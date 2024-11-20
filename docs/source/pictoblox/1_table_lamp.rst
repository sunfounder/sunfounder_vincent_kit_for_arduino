.. note::

    Ciao, benvenuto nella SunFounder Raspberry Pi & Arduino & ESP32 Enthusiasts Community su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 con altri appassionati.

    **Perché unirsi?**

    - **Supporto Esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra comunità e del nostro team.
    - **Impara e Condividi**: Scambia consigli e tutorial per migliorare le tue competenze.
    - **Anteprime Esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti Speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni Festive e Giveaway**: Partecipa a giveaway e promozioni festive.

    👉 Pronto per esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi stesso!

.. _table_lamp:

2.1 Lampada da Tavolo
=========================

In questa attività, collegheremo un LED sulla breadboard e useremo lo sprite per controllarne il lampeggiamento.

Quando lo sprite del pulsante sul palco viene cliccato, il LED lampeggerà 5 volte e poi si fermerà.

.. image:: img/2_button.png

Imparerai
----------------------

- Breadboard, LED e Resistenze
- Costruire un circuito su una breadboard
- Eliminare e selezionare sprite
- Cambiare costumi
- Impostare un numero limitato di cicli di ripetizione

Costruire il Circuito
------------------------

Segui il diagramma sotto per costruire il circuito sulla breadboard.

Poiché l'anodo del LED (il pin più lungo) è collegato al pin 9 tramite una resistenza da 220Ω, e il catodo del LED è collegato al GND, puoi accendere il LED fornendo un livello alto al pin 9.

.. image:: img/circuit/led_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_led`
* :ref:`cpn_resistor`

Programmazione
------------------

La programmazione è divisa in 3 parti: la prima consiste nella selezione dello sprite desiderato, la seconda nel cambio di costume dello sprite per farlo sembrare cliccabile, e la terza nel far lampeggiare il LED.

**1. Seleziona lo sprite Button3**

Elimina lo sprite esistente Tobi usando il pulsante Elimina nell'angolo in alto a destra, e seleziona un nuovo sprite.

.. image:: img/2_tobi.png

Qui, selezioniamo lo sprite **Button3**.

.. image:: img/2_button3.png

Clicca su Costumi nell'angolo in alto a destra e vedrai che lo sprite Button3 ha 2 costumi. Imposta **button3-a** per il rilascio e **button3-b** per la pressione.

.. image:: img/2_button3_2.png

**2. Cambiare i costumi**

Quando lo sprite viene cliccato (**palette Eventi**), passa al costume **button3-b** (**palette Aspetto**).

.. image:: img/2_switch.png

**3. Fai lampeggiare il LED 5 volte**

Usa il blocco [Ripeti] per far lampeggiare il LED 5 volte (ciclo High -> Low), ricorda di cambiare il pin 13 al pin 9 e infine torna al costume **button3-a**.

* [Ripeti 10]: numero limitato di cicli di ripetizione, puoi impostare il numero di ripetizioni dalla **palette Controllo**.

.. image:: img/2_led_on_off.png
