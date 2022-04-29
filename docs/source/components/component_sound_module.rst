.. _cpn_sound:

Schallsensormodul
====================

.. image:: img/image222.png
    :width: 500
    :align: center 

Ein Schallsensor ist definiert als ein Modul, das Schallwellen anhand ihrer Intensität erkennt und in elektrische Signale umwandelt.

Dieses Modul kann für Sicherheits-, Schalter- und Überwachungsanwendungen verwendet werden. Seine Genauigkeit kann leicht für die Bequemlichkeit der Verwendung eingestellt werden.

Es verwendet ein Mikrofon, das den Eingang zu einem Verstärker, Spitzendetektor und Puffer liefert. Wenn der Sensor ein Geräusch erkennt, verarbeitet er eine Ausgangssignalspannung, die an einen Mikrocontroller gesendet wird und dann die erforderliche Verarbeitung durchführt.

Dieses Modul hat zwei Ausgänge:

* **AO**: Analogausgang, Echtzeit-Ausgangsspannungssignal des Mikrofons.
* **DO**: Wenn die Intensität des Tons einen bestimmten Schwellenwert erreicht, ist die Ausgabe ein Signal mit hohem oder niedrigem Pegel. Die Schwellenempfindlichkeit kann durch Einstellen des Potentiometers erreicht werden.

**Beispiel**

* :ref:`ar_sound` (Arduino-Projekt)
* :ref:`blow_ball` (Scratch-Projekt)