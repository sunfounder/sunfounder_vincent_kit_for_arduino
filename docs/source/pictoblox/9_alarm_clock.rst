.. note::

    Ciao, benvenuto nella SunFounder Raspberry Pi & Arduino & ESP32 Enthusiasts Community su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 con altri appassionati.

    **Perché unirti?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra comunità e del nostro team.
    - **Impara e condividi**: Scambia consigli e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni festive e giveaway**: Partecipa a giveaway e promozioni festive.

    👉 Pronto a esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi!

.. _light_alarm:

2.9 Sveglia a Luce
===================

Nella vita, esistono vari tipi di sveglie. Ora realizziamo una sveglia controllata dalla luce. Quando arriva il mattino e la luminosità aumenta, questa sveglia ti ricorderà che è ora di alzarti.

.. image:: img/10_clock.png

Cosa Imparerai
---------------------

- Principio di funzionamento della fotoresistenza
- Interruzione della riproduzione del suono e dei blocchi di script in esecuzione



Costruire il Circuito
------------------------

Una fotoresistenza, o cellula fotoelettrica, è un resistore variabile controllato dalla luce. La resistenza di una fotoresistenza diminuisce con l'aumentare dell'intensità della luce incidente.

Costruisci il circuito seguendo il diagramma sottostante.

Collega un'estremità della fotoresistenza a 5V, l'altra estremità ad A0, e collega un resistore da 10K in serie con GND a questa estremità.

Quindi, quando l'intensità della luce aumenta, la resistenza della fotoresistenza diminuisce, la tensione di divisione sul resistore da 10K aumenta e il valore ottenuto da A0 diventa maggiore.

.. image:: img/circuit/photoresistor_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_photoresistor` 
* :ref:`cpn_resistor`

Programmazione
------------------

**1. Seleziona uno sprite**

Elimina lo sprite predefinito, clicca sul pulsante **Scegli uno Sprite** nell'angolo in basso a destra dell'area degli sprite, inserisci **bell** nella barra di ricerca e clicca per aggiungerlo.

.. image:: img/10_sprite.png

**2. Leggi il valore di A0**

Crea due variabili **prima** e **attuale**. Quando si clicca sulla bandiera verde, leggi il valore di A0 e memorizzalo nella variabile **prima** come valore di riferimento. Nel blocco [per sempre], leggi nuovamente il valore di A0 e memorizzalo nella variabile **attuale**.

.. image:: img/10_reada0.png

**3. Fai suonare la sveglia**

Quando il valore attuale di A0 è maggiore di 50 rispetto al precedente, il che rappresenta un aumento dell'intensità della luce oltre la soglia, fai emettere un suono allo sprite.

.. image:: img/10_sound.png

**4. Ruota lo sprite**

Utilizza il [blocco di rotazione] per far ruotare lo sprite **bell** a sinistra e a destra, ottenendo l'effetto sveglia.

.. image:: img/10_turn.png

**5. Ferma tutto**

Interrompi la sveglia dopo che ha suonato per un po' di tempo.

.. image:: img/10_stop.png

