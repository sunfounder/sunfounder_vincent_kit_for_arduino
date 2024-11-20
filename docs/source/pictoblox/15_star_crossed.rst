.. note::

    Ciao, benvenuto nella SunFounder Raspberry Pi & Arduino & ESP32 Enthusiasts Community su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 con altri appassionati.

    **Perché unirti?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra comunità e del nostro team.
    - **Impara e condividi**: Scambia consigli e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni festive e giveaway**: Partecipa a giveaway e promozioni festive.

    👉 Pronto a esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi!

.. _star_crossed:

2.15 GIOCO - Stella e Razzo
==============================

Nei prossimi progetti giocheremo ad alcuni mini-giochi divertenti in PictoBlox.

Qui utilizziamo il modulo Joystick per giocare a un gioco di stelle e razzi.

Dopo l'esecuzione dello script, le stelle appariranno casualmente sul palco, e dovrai usare il Joystick per controllare il Razzo ed evitare le stelle. Se le tocchi, il gioco terminerà.

.. image:: img/16_rocket.png

Cosa Imparerai
----------------------

- Come funziona il modulo Joystick
- Impostare le coordinate x e y dello sprite

Costruire il Circuito
-----------------------

Un joystick è un dispositivo di input costituito da una leva che si inclina su una base e comunica il suo angolo o direzione al dispositivo che controlla. I joystick sono spesso utilizzati per controllare videogiochi e robot.

Per comunicare un'intera gamma di movimenti al computer, un joystick deve misurare la posizione della leva su due assi: l'asse X (sinistra-destra) e l'asse Y (alto-basso).

Le coordinate di movimento del joystick sono illustrate nella figura seguente.

.. note::

    * La coordinata x va da sinistra a destra, con un intervallo di 0-1023.
    * La coordinata y va dall'alto verso il basso, con un intervallo di 0-1023.

.. image:: img/16_joystick.png

Ora costruisci il circuito seguendo il diagramma sottostante.

.. image:: img/circuit/joystick_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_joystick`

Programmazione
-----------------

Lo script che vogliamo creare consente di fare in modo che, quando si clicca sulla bandiera verde, lo sprite **Stella** si muova con una traiettoria curva sul palco e si utilizzi il joystick per muovere il **Razzo**, evitando che venga toccato dallo sprite **Stella**.

**1. Aggiungere sprite e sfondi**

Elimina lo sprite predefinito e utilizza il pulsante **Scegli uno Sprite** per aggiungere gli sprite **Razzo** e **Stella**. Nota che la dimensione dello sprite **Razzo** deve essere impostata al 50%.

.. image:: img/16_sprite.png

Ora aggiungi lo sfondo **Stars** tramite il pulsante **Scegli uno Sfondo**.

.. image:: img/16_sprite1.png

**2. Script per il Razzo**

Lo sprite **Razzo** deve apparire in una posizione casuale e poi essere controllato dal joystick per muoversi su, giù, sinistra e destra.

Il flusso di lavoro è il seguente:

* Quando si clicca sulla bandiera verde, fai andare lo sprite in una posizione casuale e crea 2 variabili **x** e **y**, che memorizzano i valori letti da A0 (VRX del joystick) e A1 (VRY del joystick), rispettivamente. Puoi far eseguire lo script, muovendo il joystick su e giù, sinistra e destra, per vedere l'intervallo di valori per x e y.

.. image:: img/16_roc2.png

* Il valore di A0 è nell'intervallo 0-1023 (il centro è circa 512). Usa ``x-512>200`` per determinare se il joystick è spostato a destra e, in tal caso, incrementa la coordinata x dello sprite di 30 (per spostare lo sprite a destra).

.. image:: img/16_roc3.png

* Se il joystick viene spostato a sinistra (``x-512<-200``), decrementa la coordinata x dello sprite di 30 (per spostare lo sprite a sinistra).

.. image:: img/16_roc4.png

* Poiché la coordinata y del joystick va dall'alto (0) verso il basso (1023), mentre la coordinata y dello sprite va dal basso verso l'alto, per fare in modo che il joystick si muova verso l'alto e lo sprite vada verso l'alto, la coordinata y deve essere decrementata di 30 nello script.

.. image:: img/16_roc5.png

* Se il joystick viene spostato verso il basso, la coordinata y dello sprite viene incrementata di 30.

.. image:: img/16_roc6.png

**3. Script per la Stella**

Lo sprite **Stella** deve apparire in una posizione casuale e, se colpisce lo sprite **Razzo**, lo script si ferma e il gioco termina.

* Quando si clicca sulla bandiera verde, lo sprite va in una posizione casuale, e il blocco [ruota di gradi] fa muovere lo sprite **Stella** in avanti con una leggera variazione di angolo per simulare un movimento curvilineo, rimbalzando sui bordi.

.. image:: img/16_star1.png

* Se lo sprite tocca lo sprite **Razzo** durante il movimento, interrompe l'esecuzione dello script.

.. image:: img/16_star2.png