.. note::

    Ciao, benvenuto nella SunFounder Raspberry Pi & Arduino & ESP32 Enthusiasts Community su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 con altri appassionati.

    **Perché unirti?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra comunità e del nostro team.
    - **Impara e condividi**: Scambia consigli e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni festive e giveaway**: Partecipa a giveaway e promozioni festive.

    👉 Pronto a esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi!

.. _shooting:

2.13 GIOCO - Tiro al Bersaglio
====================================

Hai mai visto quei giochi di tiro al bersaglio in TV? Più un concorrente avvicina il proiettile al centro del bersaglio, più alto sarà il suo punteggio.

Oggi realizzeremo un gioco di tiro al bersaglio in Scratch. Nel gioco, il mirino dovrà sparare il più vicino possibile al centro del bersaglio per ottenere un punteggio più alto.

Clicca sulla bandiera verde per iniziare. Usa il modulo di evitamento ostacoli per sparare un proiettile.

.. image:: img/14_shooting.png

Cosa Imparerai
---------------------

- Come funziona il modulo di evitamento ostacoli e il range di angoli
- Disegnare diversi sprite
- Riconoscere i colori

Costruire il Circuito
-------------------------

Il modulo di evitamento ostacoli è un sensore di prossimità a infrarossi regolabile in distanza, la cui uscita è normalmente alta e bassa quando viene rilevato un ostacolo.

Ora costruisci il circuito seguendo il diagramma sottostante.

.. image:: img/circuit/avoid_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_avoid` 

Programmazione
-----------------

**1. Disegnare lo sprite Mirino**

Elimina lo sprite predefinito, seleziona il pulsante **Sprite** e clicca su **Disegna**, apparirà uno sprite vuoto chiamato **Sprite1**, rinominalo in **Mirino**.

.. image:: img/14_shooting0.png

Vai alla pagina **Costumes** dello sprite **Mirino**. Clicca sullo strumento **Cerchio**, rimuovi il colore di riempimento e imposta il colore e la larghezza del contorno.

.. image:: img/14_shooting02.png

Ora disegna un cerchio con lo strumento **Cerchio**. Dopo averlo disegnato, puoi cliccare sullo strumento **Seleziona** e spostare il cerchio in modo che il punto centrale sia allineato con il centro del canvas.

.. image:: img/14_shooting03.png

Usando lo strumento **Linea**, disegna una croce all'interno del cerchio.

.. image:: img/14_shooting033.png

**Disegnare lo sprite Bersaglio**

Crea un nuovo sprite chiamato **Bersaglio**.

.. image:: img/14_shooting01.png

Vai alla pagina **Costumes** dello sprite **Bersaglio**, clicca sullo strumento **Cerchio**, seleziona un colore di riempimento, rimuovi il contorno e disegna un cerchio grande.

.. image:: img/14_shooting05.png

Usa lo stesso metodo per disegnare altri cerchi, ciascuno con un colore diverso, e puoi utilizzare gli strumenti **Avanti** o **Indietro** per cambiare la posizione dei cerchi sovrapposti. Assicurati che i centri di tutti i cerchi siano allineati con il centro del canvas.

.. image:: img/14_shooting04.png

**3. Aggiungere uno sfondo**

Aggiungi uno sfondo adatto, preferibilmente senza troppi colori che corrispondano a quelli dello sprite **Bersaglio**. Qui ho scelto lo sfondo **Wall1**.

.. image:: img/14_shooting06.png

**4. Script dello sprite Mirino**

Imposta la posizione e la dimensione casuale dello sprite **Mirino**, e lascialo muovere in modo casuale.

.. image:: img/14_shooting4.png

Quando una mano viene posta davanti al modulo di evitamento ostacoli, questo emetterà un segnale di livello basso.

.. image:: img/14_shooting5.png

Quando viene ricevuto il messaggio **sparare**, lo sprite si ferma e si restringe lentamente, simulando l'effetto di un proiettile sparato.

.. image:: img/14_shooting6.png

Usa il blocco [Touch color ()] per determinare la posizione del tiro.

.. image:: img/14_shooting7.png

Quando il colpo è all'interno del cerchio giallo, viene segnalato un punteggio di 10.

.. image:: img/14_shooting8.png

Usa lo stesso metodo per determinare la posizione del proiettile sparato; se non è impostato sullo sprite **Bersaglio**, significa che è fuori dal cerchio.

.. image:: img/14_shooting9.png