.. note::

    Ciao, benvenuto nella SunFounder Raspberry Pi & Arduino & ESP32 Enthusiasts Community su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 con altri appassionati.

    **Perché unirti?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra comunità e del nostro team.
    - **Impara e condividi**: Scambia consigli e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni festive e giveaway**: Partecipa a giveaway e promozioni festive.

    👉 Pronto a esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi!

.. _rotating_fan:

2.11 Ventilatore Rotante
===========================

In questo progetto, realizzeremo uno sprite a forma di stella rotante e un ventilatore.

Cliccando sulle frecce sinistra e destra sullo stage controlleremo la rotazione oraria e antioraria del motore e dello sprite stella. Cliccando sulla stella si fermerà la rotazione.

.. image:: img/13_fan.png

Cosa Imparerai
----------------------

- Principio di funzionamento del motore
- Funzione di trasmissione (broadcast)
- Bloccare altri script nello stesso sprite

Costruire il Circuito
------------------------

In questo progetto, il chip driver per motori :ref:`cpn_l293d` viene utilizzato per far ruotare il motore.

L293D è un driver per motori a 4 canali integrato in un chip con alta tensione e alta corrente.

I suoi pin sono così configurati:

Il pin **EN** è un pin di abilitazione che funziona solo con un livello alto; **A** indica l'ingresso e **Y** l'uscita. Quando il pin **EN** è ad alto livello, se **A** è alto, **Y** emette un segnale ad alto livello; se **A** è basso, **Y** emette un segnale a basso livello. Quando il pin **EN** è a livello basso, l'L293D non funziona.

.. image:: img/13_l293d.png

Ora costruisci il circuito seguendo il diagramma sottostante.

* Il pin di abilitazione 1,2EN dell'L293D è già collegato a 3.3V, quindi L293D è sempre in stato operativo. 
* Collega i pin 1A e 2A rispettivamente ai pin 9 e 10 della scheda di controllo.
* I due pin del motore sono collegati rispettivamente ai pin 1Y e 2Y.
* Quando il pin 10 è impostato su alto livello e il pin 9 su basso, il motore inizierà a ruotare in una direzione.
* Quando il pin 10 è basso e il pin 9 è alto, il motore ruota nella direzione opposta.

.. image:: img/circuit/motor_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_motor`
* :ref:`cpn_l293d`

Programmazione
---------------

L'effetto che vogliamo ottenere è utilizzare 2 sprite a forma di freccia per controllare rispettivamente la rotazione oraria e antioraria del motore e dello sprite stella. Cliccando sulla stella, il motore si fermerà.

**1. Aggiungere gli sprite**

Elimina lo sprite predefinito, poi seleziona lo sprite **Star** e lo sprite **Arrow1**, e duplica **Arrow1** una volta.

.. image:: img/13_star.png

Nell'opzione **Costumes**, cambia la direzione di **Arrow1** con un costume diverso.

.. image:: img/13_star1.png

Regola dimensione e posizione degli sprite in modo appropriato.

.. image:: img/13_star2.png

**2. Sprite freccia sinistra**

Quando questo sprite viene cliccato, trasmette un messaggio - turn, poi imposta il pin digitale 9 su basso e il pin 10 su alto, e imposta la variabile **flag** su 1. Se clicchi la freccia sinistra, vedrai che il motore ruota in senso antiorario. Se invece la rotazione è oraria, scambia le posizioni dei pin 9 e 10.

Due punti importanti da notare qui:

* `[broadcast <https://en.scratch-wiki.info/wiki/Broadcast>`_]: dalla palette **Events**, utilizzato per trasmettere un messaggio agli altri sprite. Quando questi ricevono il messaggio, eseguono un evento specifico. Ad esempio, qui viene usato **turn**, e quando lo sprite **star** riceve questo messaggio, esegue lo script di rotazione.
* Variabile flag: la direzione di rotazione dello sprite stella è determinata dal valore di flag. Quindi, quando crei la variabile **flag**, devi fare in modo che si applichi a tutti gli sprite.

.. image:: img/13_left.png

**3. Sprite freccia destra**

Quando questo sprite viene cliccato, trasmette un messaggio - turn, poi imposta il pin digitale 9 su alto e il pin 10 su basso per far ruotare il motore in senso orario, e imposta la variabile **flag** su 0.

.. image:: img/13_right.png

**4. Sprite stella**

Qui sono inclusi due eventi:

* Quando lo sprite **star** riceve il messaggio trasmesso turn, determina il valore di flag; se flag è 1, ruota di 10 gradi a sinistra, altrimenti ruota nella direzione opposta. Poiché si trova in [FOREVER], continuerà a ruotare.
* Quando questo sprite viene cliccato, imposta entrambi i pin del motore su alto per farlo smettere di ruotare e ferma gli altri script nello stesso sprite.

.. image:: img/13_broadcast.png
