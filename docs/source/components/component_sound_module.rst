.. note::

    Ciao, benvenuto nella community di appassionati di SunFounder Raspberry Pi, Arduino ed ESP32 su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 insieme ad altri appassionati.

    **Perché unirsi?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra community e del nostro team.
    - **Impara e condividi**: Scambia suggerimenti e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni e omaggi festivi**: Partecipa a omaggi e promozioni speciali durante le festività.

    👉 Pronto per esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi stesso!

.. _cpn_sound:

Modulo Sensore Sonoro
=========================

.. image:: img/image222.png
    :width: 500
    :align: center 


Un sensore sonoro è definito come un modulo in grado di rilevare onde sonore attraverso la loro intensità, convertendole in segnali elettrici.

Questo modulo può essere utilizzato per applicazioni di sicurezza, commutazione e monitoraggio. La sua precisione può essere facilmente regolata per una maggiore praticità d'uso.

Utilizza un microfono che fornisce l'ingresso a un amplificatore, un rivelatore di picco e un buffer. Quando il sensore rileva un suono, elabora un segnale di tensione in uscita che viene inviato a un microcontrollore per eseguire l'elaborazione necessaria.

Questo modulo ha due uscite:

* **AO**: uscita analogica, segnale di tensione in tempo reale dal microfono.
* **DO**: quando l'intensità del suono raggiunge una certa soglia, l'uscita è un segnale di livello alto o basso. La sensibilità della soglia può essere regolata tramite il potenziometro.

**Esempio**

* :ref:`ar_sound` (Progetto Arduino)
* :ref:`blow_ball` (Progetto Scratch)
