.. note::

    Ciao, benvenuto nella SunFounder Raspberry Pi & Arduino & ESP32 Enthusiasts Community su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 con altri appassionati.

    **Perché unirti?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra comunità e del nostro team.
    - **Impara e condividi**: Scambia consigli e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni festive e giveaway**: Partecipa a giveaway e promozioni festive.

    👉 Pronto a esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi!

.. _moving_mouse:

2.5 Mouse in Movimento
===========================

Oggi realizzeremo un giocattolo a forma di mouse controllato da un potenziometro.

Quando si clicca sulla bandiera verde, il mouse nello stage si muove in avanti e, ruotando il potenziometro, il mouse cambierà direzione.

.. image:: img/6_mouse.png

Cosa Imparerai
---------------------

- Principio del potenziometro
- Leggere il pin analogico e i relativi intervalli
- Mappare un intervallo su un altro
- Muovere e cambiare direzione dello sprite

Costruire il Circuito
-----------------------

Il potenziometro è un elemento resistivo con 3 terminali, i due pin laterali sono collegati a 5V e GND, mentre il pin centrale è collegato ad A0. Dopo la conversione effettuata dall'ADC dell'Arduino, l'intervallo di valori è 0-1023.

.. image:: img/circuit/potentiometer_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_potentiometer`

Programmazione
------------------

**1. Scegliere uno sprite**

Elimina lo sprite predefinito, clicca su **Scegli uno Sprite** nell'angolo in basso a destra dell'area sprite, inserisci **mouse** nella barra di ricerca e clicca per aggiungerlo.

.. image:: img/6_sprite.png

**2. Creare una variabile**

Crea una variabile chiamata **value** per memorizzare il valore letto dal potenziometro.

Una volta creata, vedrai **value** apparire nel palette **Variabili** e in stato selezionato, il che significa che questa variabile apparirà nello stage.

.. image:: img/6_value.png

**3. Leggere il valore di A0**

Memorizza il valore letto da A0 nella variabile **value**.

* [set my variable to 0]: Imposta il valore della variabile.
* [read analog pin A0]: Legge il valore di A0~A5 nell'intervallo 0-1023.

.. image:: img/6_read_a0.png

Per leggere in modo continuo, utilizza il blocco [forever]. Clicca su questo script per eseguirlo, ruota il potenziometro in entrambe le direzioni e noterai che l'intervallo di valori è 0-1023.

.. image:: img/6_1023.png

**4. Muovere lo sprite**

Usa il blocco [move steps] per muovere lo sprite, esegui lo script e vedrai lo sprite muoversi dal centro verso destra.

.. image:: img/6_move.png

**5. Cambiare la direzione dello sprite**

Ora modifica la direzione di movimento dello sprite in base al valore di A0. Poiché il valore di A0 varia tra 0-1023, mentre la direzione di rotazione dello sprite è compresa tra -180~180, è necessario utilizzare un blocco [map].

Aggiungi anche [when green flag clicked] all'inizio per avviare lo script.

* [`point in direction <https://en.scratch-wiki.info/wiki/Point_in_Direction_()_(block)>`_]: Imposta l'angolo di direzione dello sprite, dal palette **Movimento**.
* [map from to]: Mappa un intervallo su un altro intervallo.

.. image:: img/6_direction.png





