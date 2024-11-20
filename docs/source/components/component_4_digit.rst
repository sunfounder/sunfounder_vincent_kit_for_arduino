.. note:: 

    Ciao, benvenuto nella community SunFounder Raspberry Pi & Arduino & ESP32 su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 insieme ad altri appassionati.

    **Perché unirsi?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra community e del nostro team.
    - **Impara e condividi**: Scambia suggerimenti e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni e omaggi festivi**: Partecipa a omaggi e promozioni speciali durante le festività.

    👉 Pronto per esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi stesso!

.. _cpn_4_digit:

Display a 4 Cifre 7 Segmenti
==================================

Il display a 4 cifre e 7 segmenti è composto da quattro display a 7 segmenti 
che funzionano insieme.

.. image:: img/4-digit-sche.png

Il display a 4 cifre e 7 segmenti lavora in modo indipendente. Utilizza il 
principio della persistenza visiva umana per mostrare rapidamente i caratteri 
di ciascun segmento in un ciclo continuo, formando stringhe di numeri continue.

Ad esempio, quando sul display appare "1234", "1" viene mostrato sul primo 
segmento a 7, mentre "234" non è visualizzato. Dopo un breve periodo di tempo, 
il secondo segmento mostra "2", e il 1°, 3° e 4° segmento non mostrano nulla, 
e così via. I quattro segmenti digitali si alternano. Questo processo è molto 
rapido (tipicamente 5ms) e, grazie all'effetto di persistenza ottica e al 
principio di persistenza visiva, possiamo vedere quattro caratteri contemporaneamente.

.. image:: img/image78.png

**Codici di Visualizzazione**

Per aiutarti a capire come i display a 7 segmenti (Anodo Comune) mostrano i 
numeri, abbiamo creato la seguente tabella. I numeri rappresentano i valori 
0-F visualizzati sul display a 7 segmenti; (DP) GFEDCBA si riferisce ai LED 
corrispondenti impostati su 0 o 1. Ad esempio, 11000000 indica che DP e G sono 
impostati su 1, mentre gli altri sono impostati su 0. Pertanto, il numero 0 
viene mostrato sul display a 7 segmenti e il codice HEX corrisponde al numero 
esadecimale.

.. image:: img/common_anode.png

**Esempio**

* :ref:`ar_4_digit` (Progetto Arduino)
