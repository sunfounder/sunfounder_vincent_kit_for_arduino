.. note:: 

    Ciao, benvenuto nella community SunFounder Raspberry Pi & Arduino & ESP32 su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 insieme ad altri appassionati.

    **Perché unirsi?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra community e del nostro team.
    - **Impara e condividi**: Scambia suggerimenti e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni e omaggi festivi**: Partecipa a omaggi e promozioni speciali durante le festività.

    👉 Pronto per esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi stesso!

.. _cpn_buzzer:

Cicalino (Buzzer)
==================

.. image:: img/buzzer.png
    :width: 600

Il cicalino è un tipo di dispositivo elettronico con una struttura integrata, alimentato da corrente continua (DC). È ampiamente utilizzato in computer, stampanti, fotocopiatrici, allarmi, giocattoli elettronici, dispositivi elettronici automobilistici, telefoni, timer e altri prodotti elettronici o dispositivi audio.

I cicalini possono essere classificati in attivi e passivi (vedi immagine seguente). Posizionando il cicalino con i pin rivolti verso l'alto, quello con una scheda verde è un cicalino passivo, mentre quello avvolto da un nastro nero è un cicalino attivo.

Differenza tra cicalino attivo e passivo:

Un cicalino attivo ha una sorgente oscillante integrata, quindi emette suoni quando alimentato. Un cicalino passivo, invece, non dispone di questa sorgente, quindi non emetterà suoni se alimentato con segnali DC; è necessario utilizzare onde quadre con una frequenza compresa tra 2K e 5K per farlo funzionare. A causa dei circuiti oscillanti integrati, il cicalino attivo è generalmente più costoso rispetto a quello passivo.

Di seguito è riportato il simbolo elettrico del cicalino. Ha due pin con poli positivo e negativo. Il lato con il segno "+" rappresenta l'anodo, mentre l'altro è il catodo.

.. image:: img/buzzer_symbol.png
    :width: 150

Puoi controllare i pin del cicalino: quello più lungo è l'anodo, mentre quello più corto è il catodo. È importante non invertirli durante il collegamento, altrimenti il cicalino non emetterà alcun suono.

`Cicalino - Wikipedia <https://en.wikipedia.org/wiki/Buzzer>`_

**Esempi**

* :ref:`ar_active_buzzer` (Progetto Arduino)
* :ref:`ar_passive_buzzer` (Progetto Arduino)
