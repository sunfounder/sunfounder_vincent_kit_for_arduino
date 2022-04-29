.. _cpn_thermistor:

Thermistor
===============

.. image:: img/thermistor.png
    :width: 150
    :align: center

Ein Thermistor ist ein Widerstandstyp, dessen Widerstand stärker als bei Standardwiderständen stark von der Temperatur abhängt. Das Wort ist eine Kombination aus thermisch und Widerstand. Thermistoren werden häufig als Einschaltstrombegrenzer, Temperatursensoren (typischerweise mit negativem Temperaturkoeffizienten oder NTC-Typ), selbstrückstellende Überstromschutzeinrichtungen und selbstregulierende Heizelemente (typischerweise mit positivem Temperaturkoeffizienten oder PTC-Typ) verwendet.

* `Thermistor - Wikipedia <https://en.wikipedia.org/wiki/Thermistor>`_

Hier ist das elektronische Symbol des Thermistors.

.. image:: img/thermistor_symbol.png
    :width: 300
    :align: center

Thermistoren gibt es in zwei entgegengesetzten Grundtypen:

* Bei NTC-Thermistoren nimmt der Widerstand mit steigender Temperatur ab, was normalerweise auf eine Zunahme der Leitungselektronen zurückzuführen ist, die durch thermische Bewegung aus dem Valenzband nach oben gestoßen werden. Ein NTC wird üblicherweise als Temperatursensor oder in Reihe mit einer Schaltung als Einschaltstrombegrenzer verwendet.
* Bei PTC-Thermistoren nimmt der Widerstand mit steigender Temperatur zu, was normalerweise auf erhöhte thermische Gitterbewegungen zurückzuführen ist, insbesondere auf solche von Verunreinigungen und Fehlern. PTC-Thermistoren werden üblicherweise in Reihe mit einem Stromkreis installiert und als rückstellbare Sicherungen zum Schutz vor Überstrombedingungen verwendet.

In diesem Kit verwenden wir einen NTC. Jeder Thermistor hat einen normalen Widerstand. Hier sind es 10k Ohm, was unter 25 Grad Celsius gemessen wird.

Hier ist der Zusammenhang zwischen Widerstand und Temperatur:

    RT = RN * expB(1/TK – 1/TN)

* **RT** ist der Widerstand des NTC-Thermistors bei einer Temperatur von TK.
* **RN** ist der Widerstand des NTC-Thermistors unter der Nenntemperatur TN. Hier beträgt der Zahlenwert von RN 10k.
* **TK** ist eine Kelvin-Temperatur und die Einheit ist K. Hier ist der numerische Wert von TK 273,15 + Grad Celsius.
* **TN** ist eine Nenntemperatur in Kelvin; die Einheit ist auch K. Hier ist der numerische Wert von TN 273,15+25.
* Und **B(beta)** , die Materialkonstante des NTC-Thermistors, wird auch als Wärmeempfindlichkeitsindex mit einem Zahlenwert von 3950 bezeichnet.
* **exp** ist die Abkürzung für Exponential, und die Basiszahl e ist eine natürliche Zahl und entspricht ungefähr 2,7.

Wandeln Sie diese Formel ``TK=1/(ln(RT/RN)/B+1/TN)`` um, um eine Kelvin-Temperatur zu erhalten, die minus 273,15 Grad Celsius entspricht.

Diese Beziehung ist eine empirische Formel. Es ist nur dann genau, wenn Temperatur und Widerstand innerhalb des effektiven Bereichs liegen.


**Beispiel**

* :ref:`ar_thermistor` (Arduino-Projekt)
* :ref:`low_temperature` (Scratch-Projekt)
