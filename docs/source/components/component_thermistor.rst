.. note::

    Ciao, benvenuto nella Community SunFounder per appassionati di Raspberry Pi, Arduino ed ESP32 su Facebook! Approfondisci le tue conoscenze su Raspberry Pi, Arduino ed ESP32 insieme ad altri appassionati.

    **Perché unirti a noi?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra comunità e del nostro team.
    - **Impara e condividi**: Scambia consigli e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Ottieni accesso anticipato agli annunci di nuovi prodotti e anticipazioni.
    - **Sconti speciali**: Goditi sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni festive e omaggi**: Partecipa a concorsi e promozioni durante le festività.

    👉 Pronto per esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi stesso!

.. _cpn_thermistor:

Termistore
===============

.. image:: img/thermistor.png
    :width: 150
    :align: center

Un termistore è un tipo di resistore la cui resistenza dipende fortemente dalla temperatura, molto più rispetto ai resistori standard. La parola è una combinazione di "termico" e "resistore". I termistori sono ampiamente utilizzati come limitatori di corrente di spunto, sensori di temperatura (di solito del tipo a coefficiente di temperatura negativo o NTC), protezioni contro sovracorrenti autoripristinanti e elementi riscaldanti autorregolanti (di solito del tipo a coefficiente di temperatura positivo o PTC).

* `Termistore - Wikipedia <https://en.wikipedia.org/wiki/Thermistor>`_

Ecco il simbolo elettronico del termistore.

.. image:: img/thermistor_symbol.png
    :width: 300
    :align: center

Esistono due tipi fondamentali di termistori:

* Nei termistori NTC, la resistenza diminuisce con l'aumentare della temperatura, di solito a causa dell'aumento degli elettroni di conduzione dovuto all'agitazione termica dalla banda di valenza. Un NTC viene comunemente utilizzato come sensore di temperatura o in serie con un circuito come limitatore di corrente di spunto.
* Nei termistori PTC, la resistenza aumenta con l'aumentare della temperatura, di solito a causa dell'aumento delle agitazioni del reticolo termico, in particolare di impurità e imperfezioni. I termistori PTC sono comunemente installati in serie con un circuito e utilizzati per proteggere da condizioni di sovracorrente, come fusibili autoripristinanti.

In questo kit utilizziamo un termistore NTC. Ogni termistore ha una resistenza normale. In questo caso è di 10k ohm, misurata a 25 gradi Celsius.

Ecco la relazione tra resistenza e temperatura:

    RT = RN * expB(1/TK – 1/TN)

* **RT** è la resistenza del termistore NTC quando la temperatura è TK.
* **RN** è la resistenza del termistore NTC alla temperatura nominale TN. Qui, il valore numerico di RN è 10k.
* **TK** è una temperatura in Kelvin e l'unità è K. Qui, il valore numerico di TK è 273,15 + gradi Celsius.
* **TN** è una temperatura nominale in Kelvin; anche l'unità è K. Qui, il valore numerico di TN è 273,15+25.
* E **B(beta)**, la costante del materiale del termistore NTC, è anche chiamata indice di sensibilità termica con un valore numerico di 3950.
* **exp** è l'abbreviazione di esponenziale, e la base e è un numero naturale che vale circa 2,7.

Converti questa formula TK=1/(ln(RT/RN)/B+1/TN) per ottenere la temperatura in Kelvin, da cui sottrarre 273,15 per ottenere i gradi Celsius.

Questa relazione è una formula empirica. È accurata solo quando temperatura e resistenza sono entro il range effettivo.

**Esempio**

* :ref:`ar_thermistor` (Progetto Arduino)
* :ref:`low_temperature` (Progetto Scratch)
