.. note::

    Ciao, benvenuto nella community di appassionati di SunFounder Raspberry Pi, Arduino ed ESP32 su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 insieme ad altri appassionati.

    **Perché unirsi?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra community e del nostro team.
    - **Impara e condividi**: Scambia suggerimenti e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni e omaggi festivi**: Partecipa a omaggi e promozioni speciali durante le festività.

    👉 Pronto per esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi stesso!

.. _cpn_rfid:

Modulo MFRC522
=====================

**RFID**

La Radio Frequency Identification (RFID) si riferisce a tecnologie che 
prevedono l'uso della comunicazione wireless tra un oggetto (o tag) e un 
dispositivo interrogatore (o lettore) per tracciare e identificare 
automaticamente tali oggetti. La portata di trasmissione del tag è limitata 
a pochi metri dal lettore. Non è necessariamente richiesta una linea di vista 
chiara tra il lettore e il tag.

La maggior parte dei tag contiene almeno un circuito integrato (IC) e 
un'antenna. Il microchip memorizza informazioni ed è responsabile della 
gestione della comunicazione in radiofrequenza (RF) con il lettore. I 
tag passivi non dispongono di una fonte di energia indipendente e dipendono 
da un segnale elettromagnetico esterno, fornito dal lettore, per alimentare 
le loro operazioni. I tag attivi contengono una fonte di energia indipendente, 
come una batteria. Di conseguenza, possono avere capacità di elaborazione, 
trasmissione e portata maggiori.

.. image:: img/image230.png
    :align: center


**MFRC522**

MFRC522 è un tipo di chip integrato per la lettura e scrittura delle carte. 
È comunemente utilizzato per comunicazioni radio a 13.56 MHz. Lanciato dalla 
NXP Company, è un chip per carte senza contatto a basso voltaggio, basso costo 
e di piccole dimensioni, ideale per strumenti intelligenti e dispositivi portatili.

Il MF RC522 utilizza un concetto avanzato di modulazione e demodulazione, 
pienamente rappresentato in tutti i tipi di metodi e protocolli di comunicazione 
senza contatto passivi a 13.56 MHz. Inoltre, supporta l'algoritmo di crittografia 
rapida CRYPTO1 per verificare i prodotti MIFARE. MFRC522 supporta anche la 
comunicazione senza contatto ad alta velocità della serie MIFARE, con una 
velocità di trasmissione dati bidirezionale fino a 424 kbit/s. Come nuovo 
membro della serie di lettori di carte ad alta integrazione a 13.56 MHz, MF 
RC522 è molto simile ai già esistenti MF RC500 e MF RC530, ma presenta anche 
grandi differenze. Comunica con la macchina host tramite una modalità seriale 
che richiede meno cablaggi. È possibile scegliere tra le modalità SPI, I2C e 
UART seriale (simile a RS232), che aiuta a ridurre i collegamenti, risparmiare 
spazio sulla scheda PCB (dimensioni più piccole) e ridurre i costi.

**Esempio**

* :ref:`ar_rfid` (Progetto Arduino)
