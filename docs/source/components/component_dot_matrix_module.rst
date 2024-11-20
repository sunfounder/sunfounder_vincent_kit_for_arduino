.. note:: 

    Ciao, benvenuto nella community SunFounder Raspberry Pi & Arduino & ESP32 su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 insieme ad altri appassionati.

    **Perché unirsi?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra community e del nostro team.
    - **Impara e condividi**: Scambia suggerimenti e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni e omaggi festivi**: Partecipa a omaggi e promozioni speciali durante le festività.

    👉 Pronto per esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi stesso!

.. _cpn_matrix_module:

Modulo Matrice LED
==============================

.. image:: img/max7219_module.jpg
    :width: 400
    :align: center

Questo è un modulo matrice a punti 8x8 con catodo comune pilotato da MAX7219. La tensione operativa del modulo è di 5V, le dimensioni sono 50mm x 32mm x 15mm. Il lato sinistro è la porta di ingresso, mentre il lato destro è la porta di uscita. Supporta il collegamento a cascata di più moduli.

* **VCC**: Tensione di alimentazione positiva. Collegare a +5V.
* **GND**: Massa (entrambi i pin GND devono essere collegati).
* **DIN**: Ingresso dati seriali. I dati vengono caricati nel registro a scorrimento interno a 16 bit sul fronte di salita del CLK.
* **CS**: Ingresso di selezione del chip. I dati seriali vengono caricati nel registro a scorrimento quando CS è basso. Gli ultimi 16 bit di dati seriali vengono memorizzati sul fronte di salita di CS.
* **CLK**: Ingresso di clock seriale. Frequenza massima di 10MHz. Sul fronte di salita del CLK, i dati vengono inseriti nel registro a scorrimento interno. Sul fronte di discesa del CLK, i dati vengono trasferiti su DOUT. Nel MAX7221, l’ingresso CLK è attivo solo quando CS è basso.

**MAX7219**

Il MAX7219 è un driver per display a catodo comune con input/output seriale compatto che interfaccia i microprocessori (µP) con display LED numerici a 7 segmenti fino a 8 cifre, display a barre o 64 LED individuali. Include un decodificatore per codice-B BCD, circuiti di scansione multiplex, driver per segmenti e cifre, e una RAM statica 8x8 che memorizza ciascuna cifra.

È richiesto un solo resistore esterno per impostare la corrente del segmento per tutti i LED. Il MAX7221 è compatibile con SPI™, QSPI™ e MICROWIRE™ e dispone di driver per segmenti a velocità limitata per ridurre le EMI.

Un'interfaccia seriale a 4 fili collega tutti i microprocessori comuni. Le singole cifre possono essere indirizzate e aggiornate senza riscrivere l'intero display. Il MAX7219/MAX7221 consente inoltre all'utente di selezionare la decodifica in codice-B o la modalità senza decodifica per ciascuna cifra.

.. image:: img/max7219_sche.png

* `MAX7219 Datasheet <https://datasheets.maximintegrated.com/en/ds/MAX7219-MAX7221.pdf>`_


**Esempio**

* :ref:`ar_matrix_module` (Progetto Arduino)
