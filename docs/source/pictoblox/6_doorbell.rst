.. note::

    Ciao, benvenuto nella SunFounder Raspberry Pi & Arduino & ESP32 Enthusiasts Community su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 con altri appassionati.

    **Perché unirti?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra comunità e del nostro team.
    - **Impara e condividi**: Scambia consigli e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni festive e giveaway**: Partecipa a giveaway e promozioni festive.

    👉 Pronto a esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi!

.. _doorbell:

2.6 Campanello
======================

Qui utilizzeremo il pulsante e la campana nello stage per creare un campanello.

Quando si clicca sulla bandiera verde, è possibile premere il pulsante e la campana nello stage emetterà un suono.

.. image:: img/7_doorbell.png

Cosa Imparerai
---------------------

- Come funziona il pulsante
- Lettura del pin digitale e relativi intervalli
- Creazione di un ciclo condizionale
- Aggiunta di uno sfondo
- Riproduzione di un suono

Costruire il Circuito
-----------------------

Il pulsante è un dispositivo a 4 pin. Poiché il pin 1 è collegato al pin 2 e il pin 3 al pin 4, quando si preme il pulsante, i 4 pin si connettono, chiudendo così il circuito.

.. image:: img/5_buttonc.png

Costruisci il circuito seguendo il diagramma sottostante.

* Collega uno dei pin sul lato sinistro del pulsante al pin 12, che è collegato a un resistore pull-down e a un condensatore da 0.1uF (104) per eliminare il jitter e produrre un livello stabile quando il pulsante funziona.
* Collega l'altro capo del resistore e del condensatore a GND, e uno dei pin sul lato destro del pulsante a 5V.

.. image:: img/circuit/button_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_button`
* :ref:`cpn_resistor`
* :ref:`cpn_capacitor`

Programmazione
------------------

**1. Aggiungere uno Sfondo**

Clicca sul pulsante **Scegli uno Sfondo** nell'angolo in basso a destra.

.. image:: img/7_backdrop.png

Scegli **Camera da letto 1**.

.. image:: img/7_bedroom2.png

**2. Selezionare lo sprite**

Elimina lo sprite predefinito, clicca sul pulsante **Scegli uno Sprite** nell'angolo in basso a destra dell'area sprite, inserisci **campana** nella barra di ricerca e clicca per aggiungerlo.

.. image:: img/7_sprite.png

Quindi seleziona lo sprite **campana** nello stage e posizionalo nella posizione corretta.

.. image:: img/7_doorbell.png

**3. Premere il pulsante e far suonare la campana**

Usa [if then] per creare un'istruzione condizionale in modo che quando il valore letto dal pin 12 è uguale a 1 (il pulsante è premuto), venga riprodotto il suono **xylo1**.

* [read status of digital pin]: Questo blocco è nel palette **Arduino Mega** e serve per leggere il valore di un pin digitale; il risultato è 0 o 1.
* [`if then <https://en.scratch-wiki.info/wiki/If_()_Then_(block)>`_]: Questo blocco è un blocco di controllo del palette **Controllo**. Se la sua condizione booleana è vera, i blocchi al suo interno verranno eseguiti e lo script proseguirà. Se la condizione è falsa, i blocchi al suo interno saranno ignorati.
* [play sound until done]: Dal palette Suono, usato per riprodurre suoni specifici.

.. image:: img/7_bell.png