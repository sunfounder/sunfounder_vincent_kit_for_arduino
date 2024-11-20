.. note::  

    Ciao, benvenuto nella comunità di appassionati di SunFounder Raspberry Pi & Arduino & ESP32 su Facebook! Immergiti nel mondo affascinante di Raspberry Pi, Arduino e ESP32 insieme ad altri appassionati.

    **Perché unirti a noi?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra comunità e del nostro team.
    - **Impara e condividi**: Scambia consigli e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Ottieni accesso anticipato a nuovi annunci di prodotti e contenuti esclusivi.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni festive e concorsi**: Partecipa a concorsi e promozioni speciali durante le festività.

    👉 Sei pronto a esplorare e creare con noi? Clicca su [|link_sf_facebook|] e unisciti oggi stesso!

.. _install_arduino:

Installazione di Arduino IDE (Importante)
============================================

Arduino IDE, conosciuto come Ambiente di Sviluppo Integrato Arduino, offre tutto il supporto software necessario per completare un progetto con Arduino. Si tratta di un software di programmazione progettato specificamente dal team Arduino che consente di scrivere programmi e caricarli sulla scheda Arduino.

Arduino IDE 2.0 è un progetto open source. Rappresenta un notevole passo avanti rispetto al suo predecessore, Arduino IDE 1.x, con un'interfaccia rinnovata, un gestore di schede e librerie migliorato, un debugger, una funzione di completamento automatico e molto altro.

In questo tutorial ti mostreremo come scaricare e installare Arduino IDE 2.0 sul tuo computer con Windows, Mac o Linux.

Requisiti
-------------

* Windows - Win 10 o versioni successive, 64 bit
* Linux - 64 bit
* Mac OS X - Versione 10.14: "Mojave" o versioni successive, 64 bit

Scaricare Arduino IDE 2.0
----------------------------

#. Visita |link_download_arduino|.

#. Scarica la versione dell'IDE adatta al tuo sistema operativo.

    .. image:: img/sp_001.png

Installazione
--------------

Windows
^^^^^^^^^^^

#. Fai doppio clic sul file ``arduino-ide_xxxx.exe`` per avviare il file scaricato.

#. Leggi e accetta il Contratto di Licenza.

    .. image:: img/sp_002.png

#. Seleziona le opzioni di installazione.

    .. image:: img/sp_003.png

#. Scegli la destinazione dell'installazione. Si consiglia di installare il software su un disco diverso da quello del sistema operativo.

    .. image:: img/sp_004.png

#. Infine, clicca su Fine.

    .. image:: img/sp_005.png

macOS
^^^^^^^

Fai doppio clic sul file scaricato ``arduino_ide_xxxx.dmg`` e segui le istruzioni per copiare l'applicazione **Arduino IDE.app** nella cartella **Applications**. Dopo pochi secondi, vedrai che Arduino IDE è stato installato correttamente.

.. image:: img/macos_install_ide.png
    :width: 800

Linux
^^^^^

Per il tutorial su come installare Arduino IDE 2.0 su un sistema Linux, 
consulta: https://docs.arduino.cc/software/ide-v2/tutorials/getting-started/ide-v2-downloading-and-installing#linux


Aprire l'IDE
--------------

#. Al primo avvio di Arduino IDE 2.0, verranno installate automaticamente le schede Arduino AVR, le librerie integrate e altri file necessari.

    .. image:: img/sp_901.png

#. Inoltre, il tuo firewall o centro di sicurezza potrebbe mostrare messaggi pop-up chiedendoti il permesso per installare alcuni driver. Accetta e installa tutto.

    .. image:: img/sp_104.png

#. Ora Arduino IDE è pronto per l'uso!

    .. note:: 
        Se alcune installazioni non vengono completate a causa di problemi di rete o altre ragioni, puoi riaprire Arduino IDE e questo completerà le installazioni rimanenti. La finestra di output non si aprirà automaticamente a meno che tu non faccia clic su Verifica o Carica.
