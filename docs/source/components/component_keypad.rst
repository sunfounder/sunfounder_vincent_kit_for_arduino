.. note:: 

    Ciao, benvenuto nella community di appassionati di SunFounder Raspberry Pi, Arduino ed ESP32 su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 insieme ad altri appassionati.

    **Perché unirsi?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra community e del nostro team.
    - **Impara e condividi**: Scambia suggerimenti e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni e omaggi festivi**: Partecipa a omaggi e promozioni speciali durante le festività.

    👉 Pronto per esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi stesso!

.. _cpn_keypad:

Tastierino
========================

Un tastierino è una matrice rettangolare composta da 12 o 16 pulsanti OFF-(ON). 
I contatti sono accessibili tramite un connettore adatto al collegamento con un cavo a nastro o per l'inserimento in un circuito stampato. 
In alcuni tastierini, ogni pulsante è collegato a un contatto separato nel connettore, mentre tutti i pulsanti condividono un comune collegamento a massa.

.. image:: img/keypad314.png

Più spesso, i pulsanti sono codificati in una matrice, il che significa che ciascuno di essi collega una coppia unica di conduttori in una matrice. 
Questa configurazione è adatta per il polling da parte di un microcontrollore, che può essere programmato per inviare un impulso di uscita a ciascuno dei quattro fili orizzontali a turno. 
Durante ogni impulso, verifica in sequenza i quattro fili verticali rimanenti, per determinare quale, se presente, sta trasportando un segnale. 
Resistenze di pullup o pulldown dovrebbero essere aggiunte ai fili di ingresso per evitare che gli ingressi del microcontrollore si comportino in modo imprevedibile in assenza di segnale.

**Esempio**

* :ref:`ar_keypad` (Progetto Arduino)
* :ref:`ar_access_system` (Progetto Arduino)
