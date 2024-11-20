.. note::

    * Ciao, benvenuto nella community di appassionati di SunFounder Raspberry Pi, Arduino ed ESP32 su Facebook! Approfondisci l'utilizzo di Raspberry Pi, Arduino ed ESP32 insieme ad altri appassionati.

    **Perché unirti a noi?**

    - **Supporto esperto**: Risolvi i problemi post-vendita e le sfide tecniche con l'aiuto della nostra comunità e del nostro team.
    - **Impara e condividi**: Scambia suggerimenti e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Ottieni accesso anticipato agli annunci sui nuovi prodotti e alle anteprime.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni festive e giveaway**: Partecipa a giveaway e promozioni speciali durante le festività.

    👉 Pronto a esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi stesso!

.. _dragon:

2.21 GIOCO - Uccidi il Dragone
=================================

In questo progetto, utilizziamo un joystick per giocare a un gioco in cui bisogna sconfiggere un dragone.

Quando si preme il pulsante verde, il dragone si muoverà su e giù sul lato destro dello schermo e soffierà fuoco a intervalli. È necessario utilizzare il joystick per controllare il movimento della bacchetta magica e lanciare attacchi di stelle contro il dragone, evitando le fiamme che sputa, e infine sconfiggerlo.

.. image:: img/19_dragon.png

Costruzione del circuito
----------------------------

Un joystick è un dispositivo di input composto da una leva che ruota su una base e segnala il suo angolo o direzione al dispositivo che controlla. I joystick sono spesso utilizzati per controllare videogiochi e robot.

Per comunicare una gamma completa di movimenti al computer, un joystick deve misurare la posizione della leva su due assi: l’asse X (da sinistra a destra) e l’asse Y (dal basso verso l’alto).

Le coordinate di movimento del joystick sono illustrate nella figura seguente.

.. note::

    * La coordinata x va da sinistra a destra, con un intervallo compreso tra 0 e 1023.
    * La coordinata y va dall’alto verso il basso, con un intervallo compreso tra 0 e 1023.

.. image:: img/16_joystick.png

Ora costruisci il circuito seguendo il diagramma sottostante.

.. image:: img/circuit/joystick_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_joystick`

Programmazione
--------------

**1. Dragone**

* Aggiungi lo sfondo **Woods** tramite il pulsante **Scegli uno sfondo**.

.. image:: img/19_dragon01.png

* Elimina lo sprite predefinito e aggiungi lo sprite **Dragon**.

.. image:: img/19_dragon0.png

* Vai alla pagina **Costumi** e capovolgi orizzontalmente dragon-b e dragon-c.

.. image:: img/19_dragon1.png

* Imposta la dimensione su 50%.

.. image:: img/19_dragon3.png

* Crea una variabile **dragon** per registrare i punti vita del dragone, impostandone il valore iniziale a 50.

.. image:: img/19_dragon2.png

* Fai fluttuare lo sprite **Dragon** su e giù entro un intervallo.

.. image:: img/19_dragon4.png


* Aggiungi uno sprite **Lightning** come il fuoco sputato dallo sprite **Dragon**. È necessario ruotarlo di 90° in senso orario nella pagina Costumi, per far sì che lo sprite **Lightning** si muova nella direzione corretta.

.. note::
    Durante la regolazione del costume dello sprite **Lightning**, potrebbe essere spostato fuori dal centro; questo deve essere evitato! Il punto centrale deve essere esattamente al centro dello sprite.

.. image:: img/19_lightning1.png



* Regola il costume **dragon-c** dello sprite **Dragon** in modo che il suo punto centrale si trovi sulla coda del fuoco. Questo garantirà che le posizioni degli sprite **Dragon** e **Lightning** siano corrette, evitando che **Lightning** venga lanciato dai piedi del dragone.

.. image:: img/19_dragon5.png

* Allo stesso modo, il costume **dragon-b** deve far coincidere la testa del dragone con il punto centrale.

.. image:: img/19_dragon5.png

* Regola la dimensione e l'orientamento dello sprite **Lightning** per rendere l'immagine più armoniosa.

.. image:: img/19_lightning3.png

* Ora crea uno script per lo sprite **Lightning**. È semplice: basta farlo seguire sempre lo sprite **Dragon**. A questo punto, clicca sulla bandiera verde e vedrai il **Dragon** muoversi con il fulmine nella bocca.

.. image:: img/19_lightning4.png

* Torna allo sprite **Dragon** e fallo sputare fuoco, assicurandoti che il fuoco nella sua bocca non venga lanciato direttamente, ma che venga creato un clone per lo sprite **Lightning**.

.. image:: img/19_dragon6.png

* Fai in modo che il clone dello sprite **Lightning** venga lanciato ad un angolo casuale, rimbalzi sulle pareti e scompaia dopo un certo periodo di tempo.

.. image:: img/19_lightning5.png

* Nello sprite **Lightning**, nascondi il corpo principale e mostra il clone.

.. image:: img/19_lightning6.png

Ora il dragone può muoversi su e giù e sputare fuoco.


**2. Bacchetta Magica**

* Crea uno sprite **Wand** e ruotalo di 180° per puntare verso destra.

.. image:: img/19_wand1.png

* Crea una variabile **hp** per registrare il valore di vita, inizialmente impostata a 3. Leggi poi il valore del Joystick, che verrà utilizzato per controllare il movimento della bacchetta.

.. image:: img/19_wand2.png

* Il dragone ha il fulmine, e la bacchetta che lo sconfiggerà ha il suo "proiettile magico"! Crea uno sprite **Star**, ridimensionalo e crea uno script per farlo seguire sempre la **Wand**, limitando il numero di stelle a tre.

.. image:: img/19_star2.png

* Fai in modo che lo sprite **Wand** spari automaticamente le stelle. Lo sprite **Wand** spara le stelle nello stesso modo in cui il dragone sputa fuoco: creando cloni.

.. image:: img/19_wand3.png

* Torna allo sprite **Star** e crea uno script per il clone: deve ruotare, sparare verso destra, scomparire dopo aver superato il bordo dello stage e ripristinare il numero di stelle. Come per lo sprite **Lightning**, nascondi il corpo principale e mostra il clone.

.. image:: img/19_star3.png

Ora abbiamo una bacchetta che spara stelle.

**3. Combattimento!**

La bacchetta e il dragone si scontreranno. Ecco le regole:


1. Se la bacchetta tocca il dragone, sarà respinta e perderà punti vita.
2. Se un fulmine colpisce la bacchetta, questa perderà punti vita.
3. Se un proiettile di stella colpisce il dragone, questo perderà punti vita.

Ora aggiorniamo gli script di ogni sprite.

* Se la **Wand** tocca il **Dragon**, sarà respinta e perderà punti vita.

.. image:: img/19_wand4.png

* Se un fulmine (clone dello sprite **Lightning**) colpisce la **Wand**, emetterà un suono e scomparirà, e la bacchetta perderà punti vita.

.. image:: img/19_lightning7.png

* Se un proiettile di stella (clone dello sprite **Star**) colpisce il **Dragon**, emetterà un suono di raccolta, scomparirà, ripristinando il numero di stelle, e il dragone perderà punti vita.

.. image:: img/19_star4.png


**4. Stage**

La battaglia tra la **Wand** e il **Dragon** avrà un vincitore e un perdente, rappresentati dagli sfondi.

* Aggiungi lo sfondo **Blue Sky** e scrivi la parola "WIN!" per rappresentare la vittoria sul dragone.

.. image:: img/19_sky0.png

* Modifica lo sfondo vuoto per rappresentare la sconfitta, con un tema scuro.

.. image:: img/19_night.png

* Scrivi uno script per cambiare gli sfondi: quando si clicca sulla bandiera verde, passa allo sfondo **Woods**; se i punti vita del dragone scendono sotto 1, il gioco è vinto e si passa allo sfondo **Blue Sky**; se i punti vita della bacchetta scendono sotto 1, il gioco è perso e si passa allo sfondo **Night**.

.. image:: img/19_sky1.png
