.. note::

    Ciao, benvenuto nella SunFounder Raspberry Pi & Arduino & ESP32 Enthusiasts Community su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 con altri appassionati.

    **Perché unirti?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra comunità e del nostro team.
    - **Impara e condividi**: Scambia consigli e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni festive e giveaway**: Partecipa a giveaway e promozioni festive.

    👉 Pronto a esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi!

.. _pendulum:

2.11 Pendolo
==============

In questo progetto, realizzeremo un pendolo a freccia controllato da un servo che seguirà la rotazione.

.. image:: img/12_pun.png

Cosa Imparerai
----------------------

- Come funziona il servo e il suo intervallo di angolazione
- Disegnare uno sprite e posizionare il punto centrale sulla coda.

Costruire il Circuito
-----------------------

Un servo è un motore ingranato che può ruotare solo di 180 gradi. 
È controllato inviando impulsi elettrici dalla tua scheda circuito. 
Questi impulsi dicono al servo in quale posizione deve muoversi.

Il servo ha tre fili: il filo marrone è GND, quello rosso è VCC 
(collegato a 3.3V) e quello arancione è il filo del segnale. 
L'intervallo di angolazione è 0-180.

Ora costruisci il circuito seguendo il diagramma sottostante.

.. image:: img/circuit/servo_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_servo`

Programmazione
------------------

**1. Disegna uno sprite**

Elimina lo sprite predefinito, seleziona il pulsante **Sprite** e clicca su **Paint**; apparirà uno sprite vuoto chiamato **Sprite1**.

.. image:: img/12_paint1.png

Nella pagina **Costumes**, usa lo **strumento Linea** per disegnare una freccia.

.. note::

    * Assicurati di iniziare a disegnare la freccia dal centro della tela verso l'esterno in modo che la freccia ruoti in cerchio con il punto centrale come origine.
    * Tieni premuto Maiusc per rendere l'angolo della linea dritto o di 45 gradi.

.. image:: img/12_paint2.png

Dopo aver disegnato, lo sprite **arrow** sarà visibile sul palco; rinominalo in **arrow**. Clicca sul numero accanto a **Direction**, apparirà un quadrante circolare: trascina la freccia per verificare se lo sprite **arrow** ruota attorno alla coda come origine.

.. image:: img/12_paint3.png

Per far oscillare lo sprite **arrow** da sinistra a destra, l'intervallo di angolazione è da -90 a -180, e da 180 a 90.

.. image:: img/12_paint4.png
    
.. image:: img/12_paint5.png

**2. Creare una variabile**

Crea una variabile chiamata **servo** che memorizzerà il valore dell'angolo e imposta il valore iniziale a 270.

.. image:: img/12_servo.png

**3. Oscillazione da sinistra a destra**

Ora fai oscillare lo sprite **arrow** dalla posizione di -90 gradi a destra a quella di 90 gradi.

Con il blocco [repeat], aggiungi -10 alla variabile ogni volta, e arriverai a 90 gradi in 18 passaggi. Usa il blocco [point in block] per far ruotare lo sprite freccia a questi angoli.

Poiché l'intervallo di rotazione dello sprite è -180 ~ 180, gli angoli al di fuori di questo intervallo vengono convertiti con le seguenti condizioni:

* Se angolo > 180, allora angolo - 360.

.. image:: img/12_servo1.png

**4. Rotazione del Servo**

Cliccando sulla bandiera verde, vedrai la freccia ruotare rapidamente a destra e poi tornare a sinistra, quindi usa un blocco [wait seconds] per rallentare la rotazione. Usa anche il blocco [set servo on to angle] per far ruotare il servo collegato alla scheda Arduino a un angolo specifico.

.. image:: img/12_servo2.png

**5. Oscillazione da destra a sinistra**

Con lo stesso metodo, fai ruotare lentamente il servo e lo sprite **arrow** da destra a sinistra.

* Se angolo > 180, allora angolo - 360.

.. image:: img/12_servo3.png


