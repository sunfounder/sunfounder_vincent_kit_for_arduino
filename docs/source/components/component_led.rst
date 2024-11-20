.. note::

    Ciao, benvenuto nella community di appassionati di SunFounder Raspberry Pi, Arduino ed ESP32 su Facebook! Approfondisci Raspberry Pi, Arduino ed ESP32 insieme ad altri appassionati.

    **Perché unirsi?**

    - **Supporto esperto**: Risolvi problemi post-vendita e sfide tecniche con l'aiuto della nostra community e del nostro team.
    - **Impara e condividi**: Scambia suggerimenti e tutorial per migliorare le tue competenze.
    - **Anteprime esclusive**: Accedi in anteprima agli annunci di nuovi prodotti.
    - **Sconti speciali**: Approfitta di sconti esclusivi sui nostri prodotti più recenti.
    - **Promozioni e omaggi festivi**: Partecipa a omaggi e promozioni speciali durante le festività.

    👉 Pronto per esplorare e creare con noi? Clicca [|link_sf_facebook|] e unisciti oggi stesso!

.. _cpn_led:

LED
==========

.. image:: img/LED.png
    :width: 400

Il diodo a emissione di luce (LED) è un tipo di componente semiconduttore in grado di convertire l'energia elettrica in energia luminosa attraverso giunzioni PN. Per lunghezza d'onda, si può classificare in diodo laser, diodo a infrarossi e diodo a emissione di luce visibile, comunemente conosciuto come LED.

Il diodo ha una conduttività unidirezionale, quindi il flusso di corrente seguirà la direzione indicata dalla freccia nel simbolo del circuito. È possibile fornire alimentazione positiva solo all'anodo e negativa al catodo. In questo modo, il LED si accenderà.

.. image:: img/led_symbol.png


Un LED ha due pin. Quello più lungo è l'anodo, mentre quello più corto è il catodo. È importante non collegarli in modo errato. Il LED ha una caduta di tensione diretta fissa, quindi non può essere collegato direttamente al circuito poiché la tensione di alimentazione potrebbe superare questa caduta e bruciare il LED. La tensione diretta per i LED rossi, gialli e verdi è di 1,8 V, mentre per quelli bianchi è di 2,6 V. La maggior parte dei LED può sopportare una corrente massima di 20 mA, quindi è necessario collegare una resistenza limitatrice di corrente in serie.

La formula per calcolare il valore della resistenza è la seguente:

    R = (Vsupply – VD)/I

**R** rappresenta il valore della resistenza limitatrice di corrente, **Vsupply** la tensione di alimentazione, **VD** la caduta di tensione e **I** la corrente di funzionamento del LED.

Qui trovi un'introduzione dettagliata sul LED: `LED - Wikipedia <https://en.wikipedia.org/wiki/Light-emitting_diode>`_.

**Esempio**

* :ref:`ar_led` (Progetto Arduino)
* :ref:`breathing_led` (Progetto Scratch)
* :ref:`table_lamp` (Progetto Scratch)
