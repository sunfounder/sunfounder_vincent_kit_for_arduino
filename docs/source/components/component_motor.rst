.. note::

    Hallo und willkommen in der SunFounder Raspberry Pi & Arduino & ESP32 Enthusiasten-Gemeinschaft auf Facebook! Tauchen Sie tiefer ein in die Welt von Raspberry Pi, Arduino und ESP32 mit anderen Enthusiasten.

    **Warum beitreten?**

    - **Expertenunterstützung**: Lösen Sie Nachverkaufsprobleme und technische Herausforderungen mit Hilfe unserer Gemeinschaft und unseres Teams.
    - **Lernen & Teilen**: Tauschen Sie Tipps und Anleitungen aus, um Ihre Fähigkeiten zu verbessern.
    - **Exklusive Vorschauen**: Erhalten Sie frühzeitigen Zugang zu neuen Produktankündigungen und exklusiven Einblicken.
    - **Spezialrabatte**: Genießen Sie exklusive Rabatte auf unsere neuesten Produkte.
    - **Festliche Aktionen und Gewinnspiele**: Nehmen Sie an Gewinnspielen und Feiertagsaktionen teil.

    👉 Sind Sie bereit, mit uns zu erkunden und zu erschaffen? Klicken Sie auf [|link_sf_facebook|] und treten Sie heute bei!

.. _cpn_motor:

Gleichspannungs Motor
========================

.. image:: img/image114.jpeg
    :align: center

Dies ist ein 3-V-Gleichstrommotor. Wenn Sie jedem der beiden Anschlüsse einen hohen und einen niedrigen Pegel geben, dreht er sich.

* **Größe**: 25 * 20 * 15 mm
* **Betriebsspannung**: 1-6V
* **Freilaufstrom (3V)**: 70 m
* **Eine Freilaufgeschwindigkeit (3V)**: 13000 U / min
* **Blockierstrom (3V)**: 800 mA
* **Wellendurchmesser**: 2 mm

Ein Gleichstrommotor (DC) ist ein kontinuierlicher Aktuator, der elektrische Energie in mechanische Energie umwandelt. Gleichstrommotoren lassen Kreiselpumpen, Lüfter, Kompressoren, Laufräder und andere Geräte arbeiten, indem sie eine kontinuierliche Winkeldrehung erzeugen.

Ein Gleichstrommotor besteht aus zwei Teilen, dem festen Teil des Motors, der als Stator bezeichnet wird, und dem inneren Teil des Motors, der als Rotor (oder Anker eines Gleichstrommotors) bezeichnet wird und sich dreht, um Bewegung zu erzeugen. Der Schlüssel zur Erzeugung von Bewegung besteht darin, den Anker innerhalb des Magnetfelds des Permanentmagneten zu positionieren (dessen Feld sich vom Nordpol zum Südpol erstreckt). Die Wechselwirkung des Magnetfelds und der sich bewegenden geladenen Teilchen (der stromdurchflossene Draht erzeugt das Magnetfeld) erzeugt das Drehmoment, das den Anker dreht.

.. image:: img/motor_sche.png
    :align: center

Strom fließt vom Pluspol der Batterie durch den Stromkreis, durch die Kupferbürsten zum Kommutator und dann zum Anker. Aufgrund der zwei Lücken im Kommutator kehrt sich dieser Fluss jedoch nach der Hälfte jeder vollständigen Umdrehung um. Diese kontinuierliche Umkehrung wandelt im Wesentlichen den Gleichstrom von der Batterie in Wechselstrom um, sodass der Anker zum richtigen Zeitpunkt ein Drehmoment in die richtige Richtung erfährt, um die Drehung aufrechtzuerhalten.

* `DC Motor - MagLab <https://nationalmaglab.org/education/magnet-academy/watch-play/interactive/dc-motor>`_

**Beispiel**

* :ref:`ar_motor` (Arduino-Projekt)
* :ref:`rotating_fan` (Scratch-Projekt)