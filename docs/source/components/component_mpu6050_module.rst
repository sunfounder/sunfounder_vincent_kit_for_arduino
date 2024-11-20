.. note::

    Ciao, benvenuto nella community di appassionati di SunFounder Raspberry Pi, Arduino ed ESP32 su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 insieme ad altri appassionati.

    **Perché unirsi?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra community e del nostro team.
    - **Impara e condividi**: Scambia suggerimenti e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni e omaggi festivi**: Partecipa a omaggi e promozioni speciali durante le festività.

    👉 Pronto per esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi stesso!

.. _cpn_mpu6050:

Modulo MPU6050
===================

.. image:: img/mpu6050_pic.png
    :width: 300
    :align: center

L'MPU-6050 è un dispositivo di tracciamento del movimento a 6 assi (che combina 
un giroscopio a 3 assi e un accelerometro a 3 assi).

I suoi tre sistemi di coordinate sono definiti come segue:

Posiziona l'MPU6050 piatto su un tavolo, assicurandoti che la faccia con 
l'etichetta sia rivolta verso l'alto e che un punto su questa superficie 
sia nell'angolo superiore sinistro. La direzione verticale verso l'alto è 
l'asse z del chip. La direzione da sinistra a destra è considerata l'asse X. 
Di conseguenza, la direzione da dietro a davanti è definita come l'asse Y.

.. image:: img/mpu223.png

**Accelerometro a 3 assi**

L'accelerometro funziona sul principio dell'effetto piezoelettrico, ovvero la 
capacità di alcuni materiali di generare una carica elettrica in risposta a uno 
stress meccanico applicato.

Immagina una scatola cuboidale contenente una piccola sfera al suo interno, come 
illustrato nell'immagine sopra. Le pareti di questa scatola sono realizzate con 
cristalli piezoelettrici. Quando inclini la scatola, la sfera viene spinta nella 
direzione dell'inclinazione a causa della gravità. La parete con cui la sfera 
collide genera piccole correnti piezoelettriche. Ci sono in totale tre coppie di 
pareti opposte in un cuboide. Ogni coppia corrisponde a un asse nello spazio 
tridimensionale: X, Y e Z. A seconda della corrente prodotta dalle pareti 
piezoelettriche, possiamo determinare la direzione e l'entità dell'inclinazione.

.. image:: img/mpu224.png

Possiamo usare l'MPU6050 per rilevare l'accelerazione su ciascun asse di 
coordinata (in uno stato stazionario, l'accelerazione sull'asse Z è di 1 
unità gravitazionale, mentre gli assi X e Y sono 0). Se viene inclinato o 
si trova in condizioni di peso nullo o sovraccarico, la lettura corrispondente 
cambierà.

Sono disponibili quattro tipi di intervalli di misurazione selezionabili a 
livello programmatico: +/-2g, +/-4g, +/-8g e +/-16g (impostazione predefinita 2g), 
corrispondenti a ciascuna precisione. I valori vanno da -32768 a 32767.

La lettura dell'accelerometro viene convertita in un valore di accelerazione 
mappando la lettura dall'intervallo di lettura all'intervallo di misurazione.

Accelerazione = (Dati grezzi dell'asse accelerometro / 65536 \* Intervallo di 
accelerazione a piena scala) g

Ad esempio, per l'asse X, quando i dati grezzi dell'asse X dell'accelerometro 
sono 16384 e l'intervallo è impostato su +/-2g:

**Accelerazione lungo l'asse X = (16384 / 65536 \* 4) g = 1g**

**Giroscopio a 3 assi**

I giroscopi funzionano sul principio dell'accelerazione di Coriolis. Immagina 
una struttura a forma di forchetta in costante movimento avanti e indietro. 
È mantenuta in posizione tramite cristalli piezoelettrici. Quando si cerca di 
inclinare questa configurazione, i cristalli subiscono una forza nella direzione 
dell'inclinazione. Questo fenomeno è causato dall'inerzia del movimento della 
forchetta. I cristalli producono quindi una corrente in accordo con l'effetto 
piezoelettrico, e questa corrente viene amplificata.

.. image:: img/mpu225.png

Anche il giroscopio ha quattro tipi di intervalli di misurazione: +/-250, 
+/-500, +/-1000, +/-2000. Il metodo di calcolo e l'accelerazione sono 
sostanzialmente coerenti.

La formula per convertire la lettura in velocità angolare è la seguente:

Velocità angolare = (Dati grezzi dell'asse giroscopio / 65536 \* Intervallo 
del giroscopio a piena scala) °/s

Ad esempio, per l'asse X, i dati grezzi dell'asse X del giroscopio sono 16384 
e l'intervallo è +/-250°/s:

**Velocità angolare lungo l'asse X = (16384 / 65536 \* 500)°/s = 125°/s**

**Esempio**

* :ref:`ar_mpu6050` (Progetto Arduino)
