.. note:: 

    Ciao, benvenuto nella community SunFounder Raspberry Pi & Arduino & ESP32 su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 insieme ad altri appassionati.

    **Perché unirsi?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra community e del nostro team.
    - **Impara e condividi**: Scambia suggerimenti e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni e omaggi festivi**: Partecipa a omaggi e promozioni speciali durante le festività.

    👉 Pronto per esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi stesso!

.. _cpn_7_segment:

Display a 7 Segmenti
=========================

.. image:: img/7-seg.jpg

Un display a 7 segmenti è un componente a forma di "8" che racchiude 7 LED. Ogni LED è chiamato segmento e, quando alimentato, forma parte di una cifra da visualizzare.

Esistono due tipi di connessione dei pin: Catodo Comune (CC) e Anodo Comune (CA). Come suggerisce il nome, un display CC collega tutti i catodi dei 7 LED, mentre un display CA collega tutti gli anodi dei 7 segmenti.

In questo kit, utilizziamo un display a 7 segmenti con Catodo Comune. Di seguito è riportato il simbolo elettronico.

.. image:: img/segment_cathode.png
    :width: 800

Ogni LED del display è associato a un segmento posizionale con uno dei suoi pin di connessione che sporge dalla confezione di plastica rettangolare. Questi pin LED sono etichettati da "a" a "g" e rappresentano ciascun LED individuale. Gli altri pin LED sono collegati insieme formando un pin comune. Alimentando correttamente i pin dei segmenti LED in un determinato ordine, alcuni segmenti si illumineranno mentre altri rimarranno spenti, mostrando così il carattere corrispondente sul display. 

**Codici di Visualizzazione** 

Per aiutarti a capire come i display a 7 segmenti (Catodo Comune) mostrano i numeri, abbiamo creato la seguente tabella. I numeri rappresentano i valori 0-F visualizzati sul display a 7 segmenti; (DP) GFEDCBA si riferisce ai LED corrispondenti impostati su 0 o 1. Ad esempio, 00111111 indica che DP e G sono impostati su 0, mentre gli altri sono impostati su 1. Pertanto, il numero 0 viene mostrato sul display a 7 segmenti e il codice HEX corrisponde al numero esadecimale.

.. image:: img/segment_code.png

**Esempio**

* :ref:`ar_7_segment` (Progetto Arduino)
* :ref:`ar_pedestrian` (Progetto Arduino)
