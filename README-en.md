# iot.workshop english #

[Hier](./README.md) findet ihr die deutsche Version

## Prerequsites ##

### Free IDEs ###

All shown IDEs, tools and driver can be downloaded at no charge or registration.  
**Notice:**  
All links and tools are provided "as is". We do not guarantee that the downloads are working and virus free. It is your own responsiblity on installing and checking for viruses.    

- GIT
    - GIT-SCM: https://git-scm.com/

    alternative

    - Github Desktop: https://desktop.github.com/

- mongoose os
    - https://mongoose-os.com/software.html

        **Notice:**  
        When using macOs or Linux please ensure the installation directoy is writable. If you encounter an error at installtion, please use **sudo** for root rights: 
            curl -fsSL https://mongoose-os.com/downloads/mos/install.sh | **sudo** /bin/bash    
        When using the installation line above please start mos with 
            **sudo** ~/.mos/bin/mos        

- blynk
    - http://www.blynk.cc/

    - Download:
        - Apple AppStore: https://itunes.apple.com/us/app/blynk-control-arduino-raspberry/id808760481?ls=1&mt=8
        - Google Play Store: https://play.google.com/store/apps/details?id=cc.blynk

- platformio using visual studio code as IDE

    - http://platformio.org/get-started/ide?install=vscode

- Platform io using Atom as IDE

    - http://platformio.org/get-started/ide?install=atom

### Driver

Since the espressif developer board is connected via USB but the chip onboard converts to UART, a driver is needed to access the board via ide. There are two chips available depending on the board you are using.  

- WCH (CH341) für espressif esp8266 and/or esp32
    - Mac: http://www.wch.cn/download/CH341SER_MAC_ZIP.html
    - Win: http://www.wch.cn/download/CH341SER_ZIP.html oder http://www.wch.cn/download/CH341SER_EXE.html
    - Linux: http://www.wch.cn/download/CH341SER_LINUX_ZIP.html
- Silicon Labs (CP210x): wemos lolin32 
    - all platforms: https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers

### Accounts

- Blynk

    To use Blynk you need a free account. For all of you not willing to register with Blynk we will provide access information for a test account onsite.  
    You will share this account with different applications installed.

- WiFi

    We will provide the access codes onsite.

## Sources

- tbd

## Data-sheats

- tdb