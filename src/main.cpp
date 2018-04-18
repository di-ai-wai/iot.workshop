#include <Arduino.h>
#include "DHT.h"
#include <Wire.h>
#include <SPI.h>
#include <Adafruit_Sensor.h>
#include <BME280.h>
#include <WiFi.h>
#include "Adafruit_MQTT.h"
#include "Adafruit_MQTT_Client.h"

#define LED_PIN         5
#define LDR_SENSOR      A0
#define DHT_PIN         A13
#define DHT_TYPE        DHT11

//MQTT broker settings
#define HOST        "192.168.178.63"
#define PORT        1883
#define USERNAME    "YOUR BROKER USERNAME"
#define PASSWORD    "YOUR BROKER PASSWORD"

int sensorValue;
float dht_humidity;
float dht_temp;
float bme_temp;
float altitude;

const char* ssid     = "iot";
const char* password = "changeme";

DHT dht(DHT_PIN, DHT_TYPE);

BME280 bme; // I2C

WiFiClient client;
Adafruit_MQTT_Client mqtt(&client, HOST, PORT, USERNAME, PASSWORD);
Adafruit_MQTT_Publish temperature = Adafruit_MQTT_Publish(&mqtt, "weatherStation/temperature");
Adafruit_MQTT_Publish pressure = Adafruit_MQTT_Publish(&mqtt, "weatherStation/pressure");
Adafruit_MQTT_Publish humidity = Adafruit_MQTT_Publish(&mqtt, "weatherStation/humidity");
Adafruit_MQTT_Publish light = Adafruit_MQTT_Publish(&mqtt, "weatherStation/light");
Adafruit_MQTT_Publish voltage = Adafruit_MQTT_Publish(&mqtt, "weatherStation/voltage");

void connectToWiFi() {
    Serial.println();
    Serial.println();
    Serial.print("Connecting to ");
    Serial.println(ssid);
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
}

void MQTT_connect() {
  int8_t ret;
  if (mqtt.connected()) {
    return;
  }

  Serial.print("Connecting to MQTT... ");
  uint8_t retries = 10;
  while ((ret = mqtt.connect()) != 0) { // connect will return 0 for connected
       //Serial.println(mqtt.connectErrorString(ret));
       //Serial.println("Retrying MQTT connection in 1 second...");
       mqtt.disconnect();
       delay(1000);
       retries--;
       if (retries == 0);
         //deepSleep();
  }
  //Serial.println("MQTT Connected!");
}

void setup() {
    Serial.begin(115200);
    pinMode(LED_PIN, OUTPUT);
    dht.begin();
    
    bme.settings(0, 3, 5, 4, 3, 3, 3);
    if (!bme.begin()) {
        Serial.println("Could not find a valid BMP280 sensor, check wiring!");
        while (1);
    }
    connectToWiFi();
    //MQTT_connect();
    delay(100);
}

void loop() {
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    digitalWrite(LED_PIN, LOW);
    sensorValue = analogRead(LDR_SENSOR); // read analog input pin 0
    dht_humidity = dht.readHumidity();
    dht_temp = dht.readTemperature();
    bme_temp = bme.readTemp();
    altitude = bme.readAltitude();

/*
    temperature.publish(bme_temp);
    pressure.publish(altitude);
    humidity.publish(dht_humidity);
    Serial.println("Hello, iot-World!");
*/
    Serial.print(sensorValue, DEC); // prints the value read
    Serial.print(" Helligkeit \n"); // prints a space between the numbers
    Serial.print(dht_humidity);
    Serial.println(" %"); 
    Serial.print(dht_temp);
    Serial.print(" ºC     ");
    Serial.print(bme_temp);
    Serial.println(" ºC");
    Serial.print(altitude);
    Serial.println(" m");
    Serial.println();
    delay(500); // wait 100ms for next reading
}