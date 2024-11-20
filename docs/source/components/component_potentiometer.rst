.. note::

    Ciao, benvenuto nella community di appassionati di SunFounder Raspberry Pi, Arduino ed ESP32 su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 insieme ad altri appassionati.

    **Perché unirsi?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra community e del nostro team.
    - **Impara e condividi**: Scambia suggerimenti e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni e omaggi festivi**: Partecipa a omaggi e promozioni speciali durante le festività.

    👉 Pronto per esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi stesso!

.. _cpn_potentiometer:

Potenziometro
===============

.. image:: img/potentiometer.png
    :align: center
    :width: 150

Il potenziometro è un componente resistivo a 3 terminali il cui valore di resistenza può essere regolato secondo una variazione regolare.

I potenziometri sono disponibili in diverse forme, dimensioni e valori, ma hanno tutti le seguenti caratteristiche in comune:

* Hanno tre terminali (o punti di connessione).
* Dispongono di una manopola, vite o cursore che può essere spostato per variare la resistenza tra il terminale centrale e uno dei terminali esterni.
* La resistenza tra il terminale centrale e uno dei terminali esterni varia da 0 Ω alla resistenza massima del potenziometro man mano che la manopola, la vite o il cursore viene spostato.

Ecco il simbolo del circuito del potenziometro.

.. image:: img/potentiometer_symbol.png
    :align: center
    :width: 400

Le funzioni del potenziometro nel circuito sono le seguenti:

#. Funzione di divisore di tensione

    Il potenziometro è una resistenza regolabile in modo continuo. Quando si regola l'albero o il cursore del potenziometro, il contatto mobile scivola sulla resistenza. In questo modo, può essere emessa una tensione in base alla tensione applicata al potenziometro e all'angolo di rotazione del braccio mobile o alla corsa effettuata.

#. Funzione di reostato

    Quando il potenziometro viene utilizzato come reostato, collega il terminale centrale e uno degli altri due terminali nel circuito. Così si può ottenere un valore di resistenza che cambia gradualmente e continuamente all'interno della corsa del contatto mobile.

#. Funzione di controllo della corrente

    Quando il potenziometro agisce come controllore di corrente, il terminale del contatto scorrevole deve essere collegato come uno dei terminali di uscita.

Se desideri approfondire il funzionamento del potenziometro, consulta: `Potenziometro - Wikipedia <https://en.wikipedia.org/wiki/Potentiometer.>`_

**Esempio**

* :ref:`ar_potentiometer` (Progetto Arduino)
* :ref:`moving_mouse` (Progetto Scratch)
* :ref:`breakout_clone` (Progetto Scratch)
