.. note::

    Ciao, benvenuto nella community di appassionati di SunFounder Raspberry Pi, Arduino ed ESP32 su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 insieme ad altri appassionati.

    **Perché unirsi?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra community e del nostro team.
    - **Impara e condividi**: Scambia suggerimenti e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni e omaggi festivi**: Partecipa a omaggi e promozioni speciali durante le festività.

    👉 Pronto per esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi stesso!

.. _cpn_motor:

Motore DC
===================

.. image:: img/image114.jpeg
    :align: center

Questo è un motore DC a 3V. Quando si applica un livello alto e un livello basso ai due terminali, il motore inizia a ruotare.

* **Dimensioni**: 25*20*15 mm
* **Tensione di funzionamento**: 1-6 V
* **Corrente a vuoto** (3V): 70 mA
* **Velocità a vuoto** (3V): 13000 RPM
* **Corrente di stallo** (3V): 800 mA
* **Diametro dell'albero**: 2 mm

Un motore a corrente continua (DC) è un attuatore continuo che converte l'energia elettrica in energia meccanica. I motori DC fanno funzionare pompe rotative, ventilatori, compressori, giranti e altri dispositivi producendo una rotazione angolare continua.

Un motore DC è costituito da due parti: la parte fissa del motore chiamata **statore** e la parte interna chiamata **rotore** (o **indotto** di un motore DC), che ruota per produrre il movimento.
La chiave per generare il movimento è posizionare l'indotto all'interno del campo magnetico del magnete permanente (il cui campo si estende dal polo nord al polo sud). L'interazione tra il campo magnetico e le particelle cariche in movimento (il filo percorso da corrente genera il campo magnetico) produce la coppia che fa ruotare l'indotto.

.. image:: img/motor_sche.png
    :align: center

La corrente fluisce dal terminale positivo della batteria attraverso il 
circuito, passando per le spazzole in rame fino al commutatore, e poi 
all'indotto. Tuttavia, a causa delle due interruzioni nel commutatore, 
questo flusso si inverte a metà di ogni rotazione completa. Questa inversione 
continua converte essenzialmente la corrente continua (DC) della batteria in 
corrente alternata (AC), consentendo all'indotto di ricevere la coppia nella 
direzione giusta al momento giusto per mantenere la rotazione.

* `Motore DC - MagLab <https://nationalmaglab.org/education/magnet-academy/watch-play/interactive/dc-motor>`_

**Esempio**

* :ref:`ar_motor` (Progetto Arduino)
* :ref:`rotating_fan` (Progetto Scratch)
