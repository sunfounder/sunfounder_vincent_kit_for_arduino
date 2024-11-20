.. note::

    Ciao, benvenuto nella SunFounder Raspberry Pi & Arduino & ESP32 Enthusiasts Community su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 con altri appassionati.

    **Perché unirti?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra comunità e del nostro team.
    - **Impara e condividi**: Scambia consigli e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni festive e giveaway**: Partecipa a giveaway e promozioni festive.

    👉 Pronto a esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi!

.. _breakout_clone:

2.18 GIOCO - Clone di Breakout
==================================

In questo progetto utilizziamo il potenziometro per giocare a un clone di Breakout.

Dopo aver cliccato sulla bandiera verde, devi utilizzare il potenziometro per controllare la paletta sul palco e colpire la palla affinché rimbalzi sui mattoncini. Quando tutti i mattoncini saranno spariti, il gioco sarà vinto; se non riesci a prendere la palla, il gioco sarà perso.

.. image:: img/17_brick.png


Costruire il Circuito
-------------------------

Il potenziometro è un elemento resistivo con 3 terminali: i due pin laterali sono collegati a 5V e GND, mentre il pin centrale è collegato ad A0. Dopo la conversione tramite l’ADC della scheda Arduino, il valore varia da 0 a 1023.

.. image:: img/circuit/potentiometer_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_potentiometer`

Programmazione
----------------

Sul palco ci sono 3 sprite.

**1. Sprite Paletta**

La **Paletta** deve iniziare nella posizione centrale in basso sul palco e deve essere controllata da un potenziometro per muoversi a sinistra o a destra.

* Elimina lo sprite predefinito, utilizza il pulsante **Scegli uno Sprite** per aggiungere lo sprite **Paletta**, e imposta le coordinate x e y su (0, -140).

.. image:: img/17_padd1.png

* Vai alla pagina **Costumi**, rimuovi il contorno e cambia il colore in grigio scuro.

.. image:: img/17_padd3.png

* Ora scrivi lo script per la **Paletta**: imposta la sua posizione iniziale su (0, -140) quando si clicca sulla bandiera verde e leggi il valore di A0 (potenziometro) nella variabile **a0**. Poiché la **Paletta** si muove da sinistra a destra sul palco con coordinate x tra -195 e 195, utilizza il blocco [mappa] per mappare il range 0~1023 della variabile **a0** a -195~195.

.. image:: img/17_padd2.png

* Ora puoi ruotare il potenziometro per vedere se la **Paletta** si muove a sinistra e a destra sul palco.

**2. Sprite Palla**

La **Palla** deve muoversi sul palco, rimbalzare quando tocca il bordo, rimbalzare verso l’alto se colpisce la **Paletta** durante la caduta, e terminare il gioco se non viene presa.

* Aggiungi lo sprite **Palla**.

.. image:: img/17_ball1.png

* Quando si clicca sulla bandiera verde, imposta l’angolo della **Palla** a 45° e la posizione iniziale su (0, -120).

.. image:: img/17_ball2.png

* Ora fai muovere la **Palla** sul palco e falle rimbalzare sui bordi. Clicca sulla bandiera verde per verificare l’effetto.

.. image:: img/17_ball3.png

* Quando la **Palla** tocca la **Paletta**, calcola un riflesso basato sulla posizione centrale dei due sprite per rendere il movimento meno prevedibile.

.. image:: img/17_ball4.png

.. image:: img/17_ball6.png

* Quando la **Palla** cade fuori dal palco, il gioco termina e lo script si interrompe.

.. image:: img/17_ball5.png


**3. Sprite Mattoncino1**

Il **Mattoncino1** deve clonare se stesso per apparire in una griglia 4x8 sopra il palco con colori casuali e deve eliminarsi quando viene colpito dalla **Palla**.

* Il **Mattoncino1** non è disponibile nella libreria di **PictoBlox**, quindi devi disegnarlo o modificarne uno esistente. Qui modifichiamo lo sprite **Button3**.

* Dopo aver aggiunto lo sprite **Button3**, vai alla pagina **Costumi**. Elimina **button-a**, ridimensiona **button-b**, e rinomina lo sprite in **Mattoncino1**.

.. note::

    * Per la larghezza di **Block1**, puoi provare a simularla sullo schermo per verificare se riesci a disporne 8 in una fila; in caso contrario, riduci opportunamente la larghezza.
    * Durante il ridimensionamento dello sprite **Block1**, assicurati di mantenere il punto centrale al centro dello sprite.

.. image:: img/17_bri2.png

* Crea 2 variabili: **mattoncini** per il numero di blocchi e **righe** per il numero di righe.

.. image:: img/17_bri3.png

* Clona lo sprite **Mattoncino1** per disporlo in una griglia 4x8 con colori casuali.

.. image:: img/17_bri4.png

* Dopo aver scritto lo script, clicca sulla bandiera verde per vedere i mattoncini disposti sul palco. Modifica la dimensione se necessario.

.. image:: img/17_bri5.png

* Ora scrivi l’evento trigger. Se il clone di **Mattoncino1** tocca la **Palla**, elimina il clone e trasmetti il messaggio **crush**.

.. image:: img/17_bri6.png

* Torna allo sprite **Palla**: quando riceve il messaggio **crush**, la **Palla** rimbalza nella direzione opposta.

.. image:: img/17_ball7.png






