.. note::  

    Ciao, benvenuto nella comunità di appassionati di SunFounder Raspberry Pi & Arduino & ESP32 su Facebook! Immergiti nel mondo affascinante di Raspberry Pi, Arduino e ESP32 insieme ad altri appassionati.

    **Perché unirti a noi?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra comunità e del nostro team.
    - **Impara e condividi**: Scambia consigli e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Ottieni accesso anticipato a nuovi annunci di prodotti e contenuti esclusivi.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni e omaggi festivi**: Partecipa a concorsi e promozioni speciali durante le festività.

    👉 Sei pronto a esplorare e creare con noi? Clicca su [|link_sf_facebook|] e unisciti oggi stesso!

.. _add_libraries_ar:

Installare le librerie (Importante)
====================================

Una libreria è una raccolta di codice o funzioni predefinite che ampliano le funzionalità dell'IDE di Arduino. Le librerie offrono codice pronto all'uso per varie funzionalità, consentendoti di risparmiare tempo e fatica nella programmazione di funzioni complesse.

Ci sono due metodi principali per installare le librerie:

Installare dal Gestore delle Librerie
--------------------------------------

Molte librerie sono disponibili direttamente tramite il Gestore delle Librerie di Arduino. Puoi accedervi seguendo questi passaggi:

#. Nel **Gestore delle Librerie**, puoi cercare la libreria desiderata per nome o esplorare le diverse categorie.

   .. note::

      Nei progetti in cui è necessario installare librerie, verranno mostrati suggerimenti su quali librerie installare. Segui le istruzioni fornite, come ad esempio: "Qui viene utilizzata la libreria del sensore DHT, puoi installarla dal Gestore delle Librerie." Installa semplicemente le librerie raccomandate come indicato.

   .. image:: img/install_lib3.png

#. Una volta trovata la libreria che desideri installare, fai clic su di essa e poi sul pulsante **Installa**.

   .. image:: img/install_lib2.png

#. L'IDE di Arduino scaricherà e installerà automaticamente la libreria per te.

.. _install_lib_man:

Installazione manuale
-----------------------

Alcune librerie non sono disponibili tramite il **Gestore delle Librerie** e devono essere installate manualmente. Per installare queste librerie, segui questi passaggi:

#. Apri l'IDE di Arduino e vai su **Sketch** -> **Include Library** -> **Add .ZIP Library**.

   .. image:: img/a2dp_add_zip.png

#. Naviga fino alla directory in cui si trovano i file della libreria, come la cartella ``sunfounder_vincent_kit_for_arduino/library/``, seleziona il file della libreria e fai clic su **Open**.

   .. image:: img/rfid_choose.png

#. Dopo alcuni istanti, riceverai una notifica che indica che l'installazione è avvenuta con successo.

   .. image:: img/rfid_success.png

#. Ripeti lo stesso processo per aggiungere altre librerie.

.. note::

   Le librerie installate tramite uno dei metodi sopra indicati si troveranno nella directory predefinita delle librerie dell'IDE di Arduino, che solitamente è ``C:\Users\xxx\Documents\Arduino\libraries``.

   Se la tua directory delle librerie è diversa, puoi verificarla andando su **File** -> **Preferences**.

      .. image:: img/install_lib1.png
