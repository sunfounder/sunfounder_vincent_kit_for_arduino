.. note::

    Ciao, benvenuto nella community di appassionati di SunFounder Raspberry Pi, Arduino ed ESP32 su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 insieme ad altri appassionati.

    **Perché unirsi?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra community e del nostro team.
    - **Impara e condividi**: Scambia suggerimenti e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni e omaggi festivi**: Partecipa a omaggi e promozioni speciali durante le festività.

    👉 Pronto per esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi stesso!

.. _cpn_mpr121:

MPR121
===========================

.. image:: img/mpr121.png

* **3.3V**: Alimentazione
* **IRQ**: Pin di uscita interrupt open collector, attivo basso
* **SCL**: Clock I2C
* **SDA**: Dati I2C
* **ADD**: Pin di selezione indirizzo I2C. Collegando il pin ADDR a VSS, VDD, SDA o SCL, gli indirizzi I2C risultanti saranno rispettivamente 0x5A, 0x5B, 0x5C e 0x5D.
* **GND**: Massa
* **0~11**: Elettrodi 0~11. Gli elettrodi sono sensori tattili. Generalmente, gli elettrodi possono essere pezzi di metallo o fili. Tuttavia, in base alla lunghezza del filo o al materiale su cui si trova l'elettrodo, il sensore potrebbe essere difficile da attivare. Per questo motivo, l'MPR121 consente di configurare i parametri necessari per attivare e disattivare un elettrodo.

**PANORAMICA MPR121**

L'MPR121 è la seconda generazione di controller per sensori tattili capacitivi, 
successiva alla serie MPR03x. L'MPR121 include funzionalità avanzate come un 
aumento del numero di elettrodi, un indirizzo I2C configurabile tramite hardware, 
un sistema di filtraggio esteso con debounce e elettrodi completamente indipendenti 
con auto-configurazione integrata. Dispone inoltre di un 13° canale di rilevamento 
simulato dedicato alla rilevazione di prossimità tramite ingressi di rilevamento 
multiplexer.

* `Datasheet MPR121 <https://cdn-shop.adafruit.com/datasheets/MPR121.pdf>`_

**Caratteristiche**

* Funzionamento a bassa potenza:
    • Alimentazione: 1,71 V - 3,6 V
    • Corrente di alimentazione: 29 μA con intervallo di campionamento di 16 ms
    • Corrente in modalità Stop: 3 μA
* 12 ingressi di rilevamento capacitivo:
    • 8 ingressi multifunzionali per driver LED e GPIO
* Rilevamento completo del tocco:
    • Auto-configurazione per ogni ingresso di rilevamento
    • Auto-calibrazione per ogni ingresso
    • Soglia e debounce per rilevamento tocco/rilascio
* Interfaccia I2C con uscita interrupt
* Pacchetto QFN a 20 pin da 3 mm x 3 mm x 0,65 mm
* Intervallo di temperatura operativa: -40°C a +85°C

**Esempio**

* :ref:`ar_mpr121` (Progetto Arduino)
