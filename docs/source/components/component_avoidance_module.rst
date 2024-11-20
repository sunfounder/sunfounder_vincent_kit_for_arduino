.. note:: 

    Ciao, benvenuto nella community SunFounder Raspberry Pi & Arduino & ESP32 su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 insieme ad altri appassionati.

    **Perché unirsi?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra community e del nostro team.
    - **Impara e condividi**: Scambia suggerimenti e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni e omaggi festivi**: Partecipa a omaggi e promozioni speciali durante le festività.

    👉 Pronto per esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi stesso!

.. _cpn_avoid:

Modulo di Evitamento Ostacoli
===========================================

.. image:: img/IR_Obstacle.png
   :width: 400
   :align: center

* **VCC**: Alimentazione, 3.3 ~ 5V DC.
* **GND**: Massa
* **OUT**: Pin di segnale, normalmente a livello alto, passa a livello basso quando viene rilevato un ostacolo.

Il modulo di evitamento ostacoli IR ha una forte adattabilità alla luce ambientale ed è dotato di una coppia di tubi di trasmissione e ricezione a infrarossi.

Il tubo trasmittente emette frequenze a infrarossi; quando la direzione di rilevamento incontra un ostacolo, la radiazione infrarossa viene ricevuta dal tubo ricevente. 
Dopo l'elaborazione tramite il circuito comparatore, l'indicatore verde si accende e viene emesso un segnale a livello basso.

La distanza di rilevamento può essere regolata tramite un potenziometro; l'intervallo di distanza efficace è compreso tra 2 e 30 cm.

.. image:: img/IR_module.png
    :width: 600
    :align: center

**Esempio**

* :ref:`ar_avoid` (Progetto Arduino)
* :ref:`shooting` (Progetto Scratch)
