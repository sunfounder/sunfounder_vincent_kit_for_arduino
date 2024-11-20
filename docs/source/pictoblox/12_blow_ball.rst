.. note::

    Ciao, benvenuto nella SunFounder Raspberry Pi & Arduino & ESP32 Enthusiasts Community su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 con altri appassionati.

    **Perché unirti?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra comunità e del nostro team.
    - **Impara e condividi**: Scambia consigli e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni festive e giveaway**: Partecipa a giveaway e promozioni festive.

    👉 Pronto a esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi!

.. _blow_ball:

2.12 Pallina Soffiata
==============================

In questo progetto, utilizzeremo un sensore sonoro per far volare la pallina sullo stage verso l'alto. Soffiando sul modulo del sensore sonoro, maggiore sarà la vibrazione rilevata, più in alto volerà la pallina. Quando la pallina tocca la linea, produrrà un suono musicale e scintillii a forma di stella.

.. image:: img/18_ball.png

Cosa Imparerai
---------------------

- Come funziona il modulo sonoro e l'intervallo di angoli
- Riempire uno sprite con colori
- Rilevare contatti tra sprite

Costruire il Circuito
-------------------------

Un sensore sonoro è definito come un modulo che rileva le onde sonore attraverso la loro intensità, convertendole in segnali elettrici.

Questo modulo ha due uscite:

* **AO**: uscita analogica, segnale di tensione in tempo reale del microfono.
* **DO**: quando l'intensità del suono raggiunge una certa soglia, l'uscita è un segnale ad alto o basso livello. La sensibilità della soglia può essere regolata tramite il potenziometro.

Qui useremo solo il pin AO. Ora costruisci il circuito seguendo il diagramma sottostante.

.. image:: img/circuit/sound_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_sound`

Programmazione
------------------

L'effetto che vogliamo ottenere è che, soffiando sul sensore sonoro, lo sprite della pallina sullo stage salga continuamente; se smetti di soffiare, la pallina cadrà sullo sprite della ciotola. Se tocca lo sprite della Linea mentre sale o scende, produrrà un suono musicale e emetterà stelle in tutte le direzioni.


**1. Selezionare sprite e sfondo**

Elimina lo sprite predefinito, seleziona gli sprite **Ball**, **Bowl** e **Star**.

.. image:: img/18_ball1.png

Posiziona lo sprite **Bowl** al centro inferiore dello stage e ingrandiscilo.

.. image:: img/18_ball3.png

Poiché dobbiamo muoverlo verso l'alto, imposta la direzione dello sprite **Ball** a 0.

.. image:: img/18_ball4.png

Imposta la dimensione e la direzione dello sprite **Star** a 180 poiché deve cadere, o puoi cambiarlo con un altro angolo.

.. image:: img/18_ball12.png

Ora aggiungi lo sfondo **Stars**.

.. image:: img/18_ball2.png

**2. Disegnare uno sprite Linea**

Aggiungi uno sprite Linea.

.. image:: img/18_ball7.png

Vai alla pagina **Costumes** dello sprite Linea, riduci leggermente la larghezza della linea rossa sul canvas, quindi copiala 5 volte e allinea le linee.

.. image:: img/18_ball8.png

Ora riempi le linee con colori diversi. Scegli un colore, clicca sullo strumento **Fill** e passa il mouse sopra la linea per riempirla.

.. image:: img/18_ball9.png

Segui lo stesso metodo per cambiare il colore delle altre linee.

.. image:: img/18_ball10.png


**3. Script dello sprite Ball**

Imposta la posizione iniziale dello sprite **Ball**, quindi, quando il valore del sensore sonoro è maggiore di 100 (o un altro valore, a seconda del tuo ambiente), lascia che la pallina salga.

.. image:: img/18_ball5.png

Altrimenti, lo sprite **Ball** cadrà, limitando la coordinata Y a un minimo di -100. Questo può essere modificato per far sembrare che stia cadendo sulla ciotola.

.. image:: img/18_ball6.png

Quando lo sprite **Line** viene colpito, la coordinata Y corrente viene salvata nella variabile **ball_coor** e viene trasmesso un messaggio **Bling**.

.. image:: img/18_ball11.png

**4. Script dello sprite Star**

Quando lo script inizia, nascondi lo sprite **Star**. Quando il messaggio **Bling** viene ricevuto, clona lo sprite **Star**.

.. image:: img/18_ball13.png

Quando lo sprite **Star** appare come clone, riproduci l'effetto sonoro e imposta le sue coordinate per sincronizzarle con lo sprite **Ball**.

.. image:: img/18_ball14.png

Crea l'effetto dello sprite **Star** che appare e regolalo secondo necessità.

.. image:: img/18_ball15.png