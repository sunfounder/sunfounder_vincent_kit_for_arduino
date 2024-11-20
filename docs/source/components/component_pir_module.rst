
.. note::

    Ciao, benvenuto nella community di appassionati di SunFounder Raspberry Pi, Arduino ed ESP32 su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 insieme ad altri appassionati.

    **Perché unirsi?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra community e del nostro team.
    - **Impara e condividi**: Scambia suggerimenti e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni e omaggi festivi**: Partecipa a omaggi e promozioni speciali durante le festività.

    👉 Pronto per esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi stesso!

.. _cpn_pir:

Modulo Sensore di Movimento PIR
====================================

.. image:: img/pir_pic.png
    :width: 300
    :align: center

Il sensore PIR rileva la radiazione di calore infrarossa, che può essere utilizzata per rilevare la presenza di organismi che emettono radiazione di calore infrarossa.

Il sensore PIR è diviso in due sezioni collegate a un amplificatore differenziale. Quando un oggetto stazionario è di fronte al sensore, le due sezioni ricevono la stessa quantità di radiazione e l'uscita è zero. Quando un oggetto in movimento si trova davanti al sensore, una delle sezioni riceve più radiazione rispetto all'altra, causando fluttuazioni dell'uscita (alta o bassa). Questa variazione della tensione di uscita è il risultato della rilevazione del movimento.

.. image:: img/PIR_working_principle.jpg
    :width: 800

Dopo il cablaggio del modulo di rilevamento, è previsto un minuto di inizializzazione. Durante l'inizializzazione, il modulo emetterà segnali da 0 a 3 volte a intervalli. Successivamente, il modulo entrerà in modalità standby. Si consiglia di evitare l'interferenza di fonti di luce e altre fonti sulla superficie del modulo, per evitare operazioni errate causate da segnali di disturbo. È meglio utilizzare il modulo in assenza di vento eccessivo, poiché il vento può interferire con il sensore.

.. image:: img/pir_back.png
    :width: 600
    :align: center

**Regolazione della distanza**

Ruotando il potenziometro di regolazione della distanza in senso orario, aumenta la gamma di rilevamento, con una distanza massima di circa 0-7 metri. Ruotandolo in senso antiorario, la gamma di rilevamento si riduce, con una distanza minima di circa 0-3 metri.

**Regolazione del ritardo**

Ruotando il potenziometro di regolazione del ritardo in senso orario, aumenta il ritardo di rilevamento, che può raggiungere fino a 300 secondi. Ruotandolo in senso antiorario, il ritardo si riduce con un minimo di 5 secondi.

**Due Modalità di Trigger**

È possibile scegliere tra diverse modalità utilizzando il ponticello.

* **H**: Modalità di trigger ripetibile. Dopo aver rilevato un corpo umano, il modulo emette un livello alto. Durante il successivo periodo di ritardo, se qualcuno entra nel raggio di rilevamento, l'uscita rimane a livello alto.

* **L**: Modalità di trigger non ripetibile. Emette un livello alto quando rileva un corpo umano. Dopo il ritardo, l'uscita passa automaticamente da livello alto a livello basso.

**Esempio**

* :ref:`ar_pir` (Progetto Arduino)
