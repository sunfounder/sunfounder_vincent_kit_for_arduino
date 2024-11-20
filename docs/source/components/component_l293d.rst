.. note::

    Ciao, benvenuto nella community di appassionati di SunFounder Raspberry Pi, Arduino ed ESP32 su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 insieme ad altri appassionati.

    **Perché unirsi?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra community e del nostro team.
    - **Impara e condividi**: Scambia suggerimenti e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni e omaggi festivi**: Partecipa a omaggi e promozioni speciali durante le festività.

    👉 Pronto per esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi stesso!

.. _cpn_l293d:

L293D
=================

L293D è un driver per motori a 4 canali integrato in un chip ad alta tensione e alta corrente.
È progettato per connettersi a livelli logici standard DTL, TTL e per pilotare carichi induttivi (come bobine di relè, motori DC, motori passo-passo) e transistor di commutazione di potenza.
I motori DC sono dispositivi che convertono l'energia elettrica continua in energia meccanica. Sono ampiamente utilizzati nella guida elettrica per le loro eccellenti prestazioni di regolazione della velocità.

Di seguito è riportata la figura dei pin. L293D ha due pin (Vcc1 e Vcc2) per l'alimentazione.
Vcc2 è utilizzato per alimentare il motore, mentre Vcc1 alimenta il chip. Poiché qui viene utilizzato un motore DC di piccole dimensioni, collega entrambi i pin a +5V.

.. image:: img/l293d111.png

La seguente immagine mostra la struttura interna dell'L293D.
Il pin EN è un pin di abilitazione che funziona solo con livello alto; A rappresenta l'ingresso e Y l'uscita.
Puoi vedere la relazione tra loro in basso a destra. Quando il pin EN è a livello alto, se A è alto, Y produce un livello alto; se A è basso, Y produce un livello basso. Quando il pin EN è a livello basso, l'L293D non funziona.

.. image:: img/l293d334.png

* `L293D Datasheet <https://www.ti.com/lit/ds/symlink/l293d.pdf?ts=1627004062301&ref_url=https%253A%252F%252Fwww.ti.com%252Fproduct%252FL293D>`_

**Esempio**


* :ref:`ar_motor` (Progetto Arduino)
* :ref:`rotating_fan` (Progetto Scratch)
