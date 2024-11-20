.. note::

    Ciao, benvenuto nella SunFounder Raspberry Pi & Arduino & ESP32 Enthusiasts Community su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 con altri appassionati.

    **Perché unirti?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra comunità e del nostro team.
    - **Impara e condividi**: Scambia consigli e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni festive e giveaway**: Partecipa a giveaway e promozioni festive.

    👉 Pronto a esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi!

.. _eat_apple:

2.16 GIOCO - Mangia la Mela
============================

In questo progetto giochiamo a un gioco in cui utilizziamo un pulsante per controllare uno scarabeo che mangia una mela.

Quando si clicca sulla bandiera verde, premendo il pulsante lo scarabeo ruoterà; premendo nuovamente il pulsante, lo scarabeo smetterà di girare e avanzerà in quella direzione. Devi controllare l'angolo dello scarabeo in modo che avanzi senza toccare la linea nera sulla mappa fino a raggiungere la mela. Se tocca la linea nera, il gioco termina.

.. image:: img/14_apple.png

Costruire il Circuito
----------------------

Il pulsante è un dispositivo a 4 pin, poiché il pin 1 è collegato al pin 2 e il pin 3 al pin 4. Quando il pulsante viene premuto, i 4 pin si collegano, chiudendo il circuito.

.. image:: img/5_buttonc.png

Costruisci il circuito seguendo il diagramma sottostante.

* Collega uno dei pin sul lato sinistro del pulsante al pin 12, che è collegato a un resistore pull-down e a un condensatore da 0,1uF (104) (per eliminare il jitter e fornire un livello stabile quando il pulsante è attivo).
* Collega l'altro terminale del resistore e del condensatore a GND e uno dei pin sul lato destro del pulsante a 5V.

.. image:: img/circuit/button_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_button`
* :ref:`cpn_resistor`
* :ref:`cpn_capacitor`

Programmazione
-----------------

L'obiettivo è utilizzare il pulsante per controllare la direzione dello sprite **Scarabeo**, facendolo avanzare per mangiare la mela senza toccare la linea nera sullo sfondo **Labirinto**. Quando la mela viene mangiata, lo sfondo cambierà.

Ora aggiungi gli sfondi e gli sprite necessari.

**1. Aggiungere sfondi e sprite**

Aggiungi lo sfondo **Labirinto** tramite il pulsante **Scegli uno Sfondo**.

.. image:: img/14_backdrop.png

Elimina lo sprite predefinito, quindi seleziona lo sprite **Scarabeo**.

.. image:: img/14_sprite.png

Posiziona lo sprite **Scarabeo** all'ingresso dello sfondo **Labirinto**, ricordando i valori delle coordinate x, y in quel punto, e ridimensiona lo sprite al 40%.

.. image:: img/14_sprite1.png

**2. Disegnare uno sfondo**

Ora disegniamo uno sfondo con il testo **WIN!** per indicare la vittoria.

Clicca sulla miniatura dello sfondo per accedere alla pagina **Sfondi** e seleziona lo sfondo vuoto.

.. image:: img/14_paint_back.png
    :width: 800

Inizia a disegnare. Puoi fare riferimento all'immagine sottostante o creare uno sfondo personalizzato per esprimere la vittoria.

* Usa lo strumento **Cerchio** per disegnare un'ellisse di colore rosso senza contorno.
* Usa lo strumento **Testo** per scrivere il testo "WIN!" con caratteri neri, regolando dimensione e posizione.
* Nomina lo sfondo come **Win**.

.. image:: img/14_win.png

**3. Script per lo sfondo**

Imposta lo sfondo su **Labirinto** ogni volta che il gioco inizia.

.. image:: img/14_switchback.png

**4. Script per lo sprite Scarabeo**

Ora scrivi uno script per lo sprite **Scarabeo** in modo che possa muoversi in avanti e cambiare direzione sotto il controllo del pulsante. Il flusso di lavoro è il seguente.

* Quando si clicca sulla bandiera verde, imposta l'angolo dello scarabeo a 90 e la posizione a (-134, -134), oppure sostituisci con le coordinate del tuo posizionamento. Crea la variabile **flag** e imposta il valore iniziale a -1.

.. image:: img/14_bee1.png

Nel blocco [forever], utilizza quattro blocchi [if] per gestire vari scenari.

* Se il pulsante è premuto (valore 1), utilizza il blocco [`mod <https://en.scratch-wiki.info/wiki/Boolean_Block>`_] per alternare il valore della variabile **flag** tra 0 e 1.

.. image:: img/14_bee2.png

* Se flag=0 (pulsante premuto), lo sprite **Scarabeo** ruota in senso orario. Se flag=1 (pulsante premuto di nuovo), lo sprite **Scarabeo** avanza. Altrimenti, continua a ruotare.

.. image:: img/14_bee3.png

* Se lo sprite **Scarabeo** tocca il nero (linea nera sullo sfondo **Labirinto**), il gioco termina e lo script si ferma.

.. note::

    Clicca sull'area colore nel blocco [Touch color], seleziona lo strumento contagocce e scegli il colore della linea nera sul palco. Se scegli un nero generico, il blocco non funzionerà.

.. image:: img/14_bee5.png

* Se lo scarabeo tocca il rosso (usa il contagocce per scegliere il rosso della mela), lo sfondo cambierà in **Win**, indicando la vittoria, e lo script si fermerà.

.. image:: img/14_bee4.png




