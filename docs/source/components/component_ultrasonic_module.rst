.. note::

    Ciao, benvenuto nella Community SunFounder per appassionati di Raspberry Pi, Arduino ed ESP32 su Facebook! Approfondisci le tue conoscenze su Raspberry Pi, Arduino ed ESP32 insieme ad altri appassionati.

    **Perché unirti a noi?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra comunità e del nostro team.
    - **Impara e condividi**: Scambia consigli e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Ottieni accesso anticipato agli annunci di nuovi prodotti e anticipazioni.
    - **Sconti speciali**: Goditi sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni festive e omaggi**: Partecipa a concorsi e promozioni durante le festività.

    👉 Pronto per esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi stesso!

.. _cpn_ultrasonic:

Modulo Ultrasuoni
================================

.. image:: img/ultrasonic_pic.png
    :width: 400
    :align: center

Il modulo di misura a ultrasuoni fornisce una funzione di misurazione senza contatto da 2 cm a 400 cm, con un'accuratezza di misurazione che può arrivare fino a 3 mm. 
Può garantire che il segnale sia stabile entro 5 m, con un graduale indebolimento oltre i 5 m, fino a scomparire a circa 7 m.

Il modulo include trasmettitori ultrasonici, un ricevitore e un circuito di controllo. I principi di base sono i seguenti:

#. Usa un flip-flop IO per elaborare un segnale di alto livello di almeno 10 μs.

#. Il modulo invia automaticamente otto impulsi a 40 kHz e rileva se c'è un segnale di ritorno del polso.

#. Se il segnale torna, il tempo di alto livello dell'uscita IO rappresenta il tempo trascorso dal trasmettitore ultrasonico al ritorno. La distanza viene calcolata come: distanza di test = (tempo alto \* velocità del suono (340 m/s)) / 2.

Il diagramma temporale è mostrato di seguito.

.. image:: img/ultrasonic228.png

È sufficiente fornire un breve impulso di 10 μs all'ingresso trigger per 
avviare la misurazione, e poi il modulo invierà un segnale ultrasonico di 
8 cicli a 40 kHz e alzerà il segnale di eco. È possibile calcolare la 
distanza attraverso l'intervallo di tempo tra l'invio del segnale di trigger 
e la ricezione del segnale di eco.

Formula: us / 58 = centimetri oppure us / 148 = pollici; oppure: distanza = 
tempo di alto livello \* velocità del suono (340M/S) / 2. Si consiglia un 
ciclo di misurazione superiore a 60 ms per evitare collisioni tra il segnale 
di trigger e il segnale di eco.

**Esempio**

* :ref:`ar_ultrasonic` (Progetto Arduino)
* :ref:`ar_reversing_aid` (Progetto Arduino)
* :ref:`parrot` (Progetto Scratch)
