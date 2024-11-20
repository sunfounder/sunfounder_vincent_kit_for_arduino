.. note::

    Ciao, benvenuto nella Community SunFounder per appassionati di Raspberry Pi, Arduino ed ESP32 su Facebook! Approfondisci le tue conoscenze su Raspberry Pi, Arduino ed ESP32 insieme ad altri appassionati.

    **Perché unirti a noi?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra comunità e del nostro team.
    - **Impara e condividi**: Scambia consigli e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Ottieni accesso anticipato agli annunci di nuovi prodotti e anticipazioni.
    - **Sconti speciali**: Goditi sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni festive e omaggi**: Partecipa a concorsi e promozioni durante le festività.

    👉 Pronto per esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi stesso!

.. _cpn_touch:

Modulo Interruttore Touch
==================================

.. image:: img/touch168.png
    :width: 300
    :align: center

* **IO**: Pin di segnale, di solito a livello basso, che emette un livello alto dopo il tocco.
* **VCC**: Alimentazione, 3.3 ~ 5V DC.
* **GND**: Massa.

Questo modulo è un interruttore touch capacitivo basato su un IC sensore touch (TTP223B). In stato normale, il modulo emette un livello basso con un basso consumo energetico; quando un dito tocca la posizione corrispondente, il modulo emette un livello alto e ritorna a livello basso dopo che il dito viene rilasciato.

Ecco come funziona un interruttore touch capacitivo:

Un interruttore touch capacitivo ha diversi strati—una piastra isolante superiore, seguita da una piastra touch, un altro strato isolante e quindi una piastra di massa.

.. image:: img/touch169.jpeg

In pratica, un sensore capacitivo può essere realizzato su un PCB a doppia faccia utilizzando un lato come sensore touch e il lato opposto come piastra di massa del condensatore. Quando l'alimentazione viene applicata tra queste piastre, le due piastre si caricano. In stato di equilibrio, le piastre hanno la stessa tensione della sorgente di alimentazione.



Il circuito del rilevatore touch contiene un oscillatore la cui frequenza dipende dalla capacità della touchpad. Quando un dito si avvicina alla touchpad, la capacità aggiuntiva fa variare la frequenza di questo oscillatore interno. Il circuito rilevatore monitora la frequenza dell'oscillatore a intervalli regolari e, quando lo spostamento supera la soglia, il circuito attiva un evento di pressione tasto.

**Esempio**

* :ref:`ar_touch` (Progetto Arduino)
* :ref:`balloon` (Progetto Scratch)
