.. note:: 

    Ciao, benvenuto nella community di appassionati di SunFounder Raspberry Pi, Arduino ed ESP32 su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 insieme ad altri appassionati.

    **Perché unirsi?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra community e del nostro team.
    - **Impara e condividi**: Scambia suggerimenti e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni e omaggi festivi**: Partecipa a omaggi e promozioni speciali durante le festività.

    👉 Pronto per esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi stesso!

.. _cpn_i2c_lcd1602:

LCD1602 I2C
==============

.. image:: img/i2c_lcd1602.png
    :width: 800

* **GND**: Massa
* **VCC**: Alimentazione, 5V.
* **SDA**: Linea dati seriale. Collegare al VCC tramite una resistenza di pull-up.
* **SCL**: Linea di clock seriale. Collegare al VCC tramite una resistenza di pull-up.

Come sappiamo, anche se LCD e altri display arricchiscono notevolmente l'interazione uomo-macchina, condividono una debolezza comune. Quando sono collegati a un controller, occupano molte porte IO, limitando altre funzioni del controller. 

Per risolvere questo problema, è stato sviluppato il modulo LCD1602 con I2C. Il modulo I2C ha un chip PCF8574 integrato che converte i dati seriali I2C in dati paralleli per il display LCD.

* `Datasheet PCF8574 <https://www.ti.com/lit/ds/symlink/pcf8574.pdf?ts=1627006546204&ref_url=https%253A%252F%252Fwww.google.com%252F>`_

**Indirizzo I2C**

L'indirizzo predefinito è generalmente 0x27, in alcuni casi potrebbe essere 0x3F.

Prendendo come esempio l'indirizzo predefinito 0x27, l'indirizzo del dispositivo può essere modificato collegando i ponticelli A0/A1/A2; nello stato predefinito, A0/A1/A2 è 1, mentre se i ponticelli sono collegati, A0/A1/A2 diventa 0.

.. image:: img/i2c_address.jpg
    :width: 600

**Retroilluminazione/Contrasto**

La retroilluminazione può essere abilitata tramite un cappuccio di cortocircuito; rimuovendo il cappuccio si disabilita la retroilluminazione. Il potenziometro blu sul retro è utilizzato per regolare il contrasto.

.. image:: img/back_lcd1602.jpg

* **Cappuccio di cortocircuito**: Abilita la retroilluminazione, rimuovendo il cappuccio si disabilita la retroilluminazione.
* **Potenziometro**: Serve per regolare il contrasto (la nitidezza del testo visualizzato), che aumenta in senso orario e diminuisce in senso antiorario.


**Esempio**

* :ref:`ar_lcd1602` (Progetto Arduino)
* :ref:`ar_access_system` (Progetto Arduino)
* :ref:`ar_guess_number` (Progetto Arduino)
* :ref:`ar_overheat_monitor` (Progetto Arduino)
* :ref:`lcd1602` (Progetto Scratch)
