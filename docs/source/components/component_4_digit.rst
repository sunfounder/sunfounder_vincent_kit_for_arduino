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

Per aiutarvi a comprendere come i display a 7 segmenti (catodo comune) mostrano i numeri, abbiamo realizzato la seguente tabella. I numeri sono i numeri da 0 a F visualizzati sul display a 7 segmenti; (DP) GFEDCBA si riferisce al LED corrispondente impostato su 0 o 1. Ad esempio, 00111111 significa che DP e G sono impostati su 0, mentre gli altri sono impostati su 1. Pertanto, il numero 0 viene visualizzato sul display a 7 segmenti, mentre il codice HEX corrisponde al numero esadecimale.

.. list-table:: Glyph Code
    :widths: 20 20 20
    :header-rows: 1

    *   - Numbers	
        - Binary Code
        - Hex Code  
    *   - 0	
        - 00111111	
        - 0x3f
    *   - 1	
        - 00000110	
        - 0x06
    *   - 2	
        - 01011011	
        - 0x5b
    *   - 3	
        - 01001111	
        - 0x4f
    *   - 4	
        - 01100110	
        - 0x66
    *   - 5	
        - 01101101	
        - 0x6d
    *   - 6	
        - 01111101	
        - 0x7d
    *   - 7	
        - 00000111	
        - 0x07
    *   - 8	
        - 01111111	
        - 0x7f
    *   - 9	
        - 01101111	
        - 0x6f
    *   - A	
        - 01110111	
        - 0x77
    *   - B
        - 01111100	
        - 0x7c
    *   - C	
        - 00111001	
        - 0x39
    *   - D	
        - 01011110	
        - 0x5e
    *   - E	
        - 01111001	
        - 0x79
    *   - F	
        - 01110001	
        - 0x71

**Esempio**

* :ref:`ar_4_digit` (Progetto Arduino)
