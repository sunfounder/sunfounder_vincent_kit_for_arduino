.. note::

    Ciao, benvenuto nella SunFounder Raspberry Pi & Arduino & ESP32 Enthusiasts Community su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 con altri appassionati.

    **Perché unirti?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra comunità e del nostro team.
    - **Impara e condividi**: Scambia consigli e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni festive e giveaway**: Partecipa a giveaway e promozioni festive.

    👉 Pronto a esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi!

.. _tumbler:

2.7 Tumbler
=============

Ora utilizziamo un interruttore di inclinazione per controllare il tumbler nello stage, in modo che quando l'interruttore è inclinato, anche il tumbler si inclini.

.. Image:: img/8_tumbler.png

Cosa Imparerai
---------------------

- Come funziona l'interruttore di inclinazione
- Blocco [`if then else <https://en.scratch-wiki.info/wiki/If_()_Then,_Else_(block)#:~:text=The%20if%20()%20then%2C%20else,the%20second%20C%20 20will%20activate.>`_]
- Aggiungere uno sprite esterno

Costruire il circuito
-----------------------

L'interruttore di inclinazione utilizzato qui è una sfera con una pallina di metallo all'interno. Quando è in posizione verticale, i 2 pin sono collegati insieme; quando è inclinato, sono separati.

Costruisci il circuito seguendo il diagramma sottostante:

* Collega un pin dell'interruttore di inclinazione al pin 12, che è collegato a un resistore pull-down e a un condensatore da 0,1uF (104) (utilizzato per eliminare il jitter e produrre un livello stabile quando l'interruttore di inclinazione è in funzione).
* Collega l'altra estremità del resistore e del condensatore a GND e l'altro pin dell'interruttore di inclinazione a 5V.

.. image:: img/circuit/tilt_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_tilt`
* :ref:`cpn_resistor`
* :ref:`cpn_capacitor`

Programmazione
------------------

**1. Personalizza lo sprite**

Seleziona lo sprite **Tobi** e vai alla pagina **Costumi**. Seleziona l'icona nell'angolo in basso a sinistra e poi seleziona **Carica Costume**.

.. image:: img/8_upload.png

Quindi apri ``tumbler1.png`` e ``tumbler2.png`` nel percorso ``sunfounder_vincent_kit_for_arduino\scratch\picture`` e assicurati di aver scaricato il materiale necessario da `github <https://github.com/sunfounder/sunfounder_vincent_kit_for_arduino/archive/refs/heads/master.zip>`_.

.. image:: img/8_add_tumbler.png

Rimuovi i costumi relativi allo sprite **Tobi** e rinomina lo sprite come **Tumbler**. Ora che abbiamo personalizzato un nuovo sprite Tumbler, possiamo iniziare a scrivere lo script.

.. image:: img/8_rename.png

**2. Inclina l'interruttore**

Se il valore del pin 12 letto è 0 (l'interruttore è inclinato), cambia il costume dello sprite in **tumbler2**, che rappresenta lo stato inclinato. Altrimenti, cambia il costume dello sprite in **tumbler1**, che rappresenta lo stato verticale.

* [`if then else <https://en.scratch-wiki.info/wiki/If_()_Then,_Else_(block)#:~:text=The%20if%20()%20then%2C%20else,the%20second%20C%20 20will%20activate.>`_]: Il blocco verifica la condizione booleana; se la condizione è vera, il codice contenuto nel primo spazio (C) sarà eseguito; se la condizione è falsa, verrà eseguito il codice contenuto nel secondo spazio (C).
* [=]: Il blocco viene utilizzato per confrontare l'uguaglianza dei valori sui due lati del segno uguale, dal palette **Operatori**.

.. image:: img/8_script.png