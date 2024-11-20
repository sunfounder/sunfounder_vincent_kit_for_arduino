.. note::

    Ciao, benvenuto nella community di appassionati di SunFounder Raspberry Pi, Arduino ed ESP32 su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 insieme ad altri appassionati.

    **Perché unirsi?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra community e del nostro team.
    - **Impara e condividi**: Scambia suggerimenti e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni e omaggi festivi**: Partecipa a omaggi e promozioni speciali durante le festività.

    👉 Pronto per esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi stesso!

.. _cpn_slide:

Interruttore a Scorrimento
==============================

.. image:: img/slide_switch.png
    :width: 150
    :align: center

Un interruttore a scorrimento, come suggerisce il nome, funziona spostando una levetta per connettere o interrompere il circuito, permettendo di commutare tra i circuiti. I tipi comunemente usati sono SPDT, SPTT, DPDT, DPTT, ecc. L'interruttore a scorrimento è comunemente impiegato in circuiti a bassa tensione grazie alla sua flessibilità e stabilità, trovando larga applicazione in strumenti elettrici e giocattoli elettronici.

Come funziona: Imposta il pin centrale come punto fisso. Quando fai scorrere la levetta verso sinistra, i due pin a sinistra vengono collegati; quando la fai scorrere verso destra, i due pin a destra vengono collegati. Così, l'interruttore funziona per connettere o disconnettere i circuiti. Vedi la figura qui sotto:

.. image:: img/slide_principle.png
    :width: 400
    :align: center

Il simbolo del circuito per l'interruttore a scorrimento è mostrato qui sotto. Il pin2 nella figura si riferisce al pin centrale.

.. image:: img/slide_symbol.png
    :width: 200
    :align: center

**Esempio**

* :ref:`ar_slide` (Progetto Arduino)
