# iot.workshop.german #

click [here](https://gitbub.com/di-ai-wai/iot.workshop/README-en.md) for the english version

## Vorbereitungen ##

### kostenfreie Entwicklungsumgebungen ###

Alle vorgestellten IDEs, Tools und Treiber sind kostenfrei und ohne vorherige Registrierung downloadbar.  
**Bitte beachtet:**    
Wir übernehmen natürlich keine Gewährleistung über die Funktion und/oder Virenfreiheit der Downloads. Hier muss jeder Teilnehmer geeignete Vorkehrungen treffen und ist dafür selbst verantwortlich.

- GIT
    - GIT-SCM: https://git-scm.com/

    oder

    - Github Desktop: https://desktop.github.com/

- mongoose os
    - https://mongoose-os.com/software.html

        **Achtung:**  
        Bei macOS oder Linux kann es notwendig sein, dass beim Schreiben der Installationsdaten Admin/Root Rechte erforderlich sind.
        Falls die Installation abbricht, mit  
            curl -fsSL https://mongoose-os.com/downloads/mos/install.sh | **sudo** /bin/bash  
        erneut starten.  
        Analog muss dann auch die Umgebung mit  
            **sudo** ~/.mos/bin/mos  
        gestartet werden.        

- blynk
    - http://www.blynk.cc/

    - Download:
        - Apple AppStore: https://itunes.apple.com/us/app/blynk-control-arduino-raspberry/id808760481?ls=1&mt=8
        - Google Play Store: https://play.google.com/store/apps/details?id=cc.blynk

- platformio mit visual studio code als IDE

    - http://platformio.org/get-started/ide?install=vscode

- Platform io mit Atom als IDE

    - http://platformio.org/get-started/ide?install=atom

### Treiber

Damit das espressif Developer Board im Device Manager auftaucht, ist ein Treiber für den USB-2-UART Chip notwendig. Es gibt je nach Board unterschiedliche CHip-Bestückungen.

- WCH (CH341) für espressif esp8266 und/oder esp32
    - Mac: http://www.wch.cn/download/CH341SER_MAC_ZIP.html
    - Win: http://www.wch.cn/download/CH341SER_ZIP.html oder http://www.wch.cn/download/CH341SER_EXE.html
    - Linux: http://www.wch.cn/download/CH341SER_LINUX_ZIP.html
- Silicon Labs (CP210x): wemos lolin32 
    - alle Plattformen: https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers

### Accounts

- Blynk

    Um Blynk zu nutzen, benötigt man einen kostenlosen Account bei Blynk.  
    Für alle, die keinen Account dort anlegen möchten, stellen wir zum Workshop einen Test-Account zur Verfügung, für den dann mehrere Projekte installiert sind.  
    Es ist also keine 100% Voraussetzung, einen Account bei Blynk zu haben.

- WiFi

    Diese Daten stellen wir vor Ort beim Workshop bereit.

## Sourcen

- https://github.com/di-ai-wai/iot.workshop/src

## Datenblätter

tdb

