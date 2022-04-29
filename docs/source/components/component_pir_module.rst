
.. _cpn_pir:

PIR-Bewegungssensormodul
============================

.. image:: img/pir_pic.png
    :width: 300
    :align: center

Der PIR-Sensor erkennt Infrarot-Wärmestrahlung, die verwendet werden kann, um das Vorhandensein von Organismen zu erkennen, die Infrarot-Wärmestrahlung aussenden.

Der PIR-Sensor ist in zwei Steckplätze aufgeteilt, die mit einem Differenzverstärker verbunden sind. Immer wenn sich ein stationäres Objekt vor dem Sensor befindet, erhalten die beiden Schlitze die gleiche Strahlungsmenge und die Ausgabe ist Null. Immer wenn sich ein sich bewegendes Objekt vor dem Sensor befindet, empfängt einer der Schlitze mehr Strahlung als der andere, wodurch die Ausgabe hoch oder niedrig schwankt. Diese Änderung der Ausgangsspannung ist ein Ergebnis der Bewegungserkennung.

.. image:: img/PIR_working_principle.jpg
    :width: 800

Nachdem das Sensormodul verkabelt ist, erfolgt eine einminütige Initialisierung. Während der Initialisierung gibt das Modul 0-3 Mal in Intervallen aus. Dann befindet sich das Modul im Standby-Modus. Bitte halten Sie Störungen durch Lichtquellen und andere Quellen von der Oberfläche des Moduls fern, um Fehlfunktionen durch Störsignale zu vermeiden. Auch sollte man das Modul besser ohne zu viel Wind verwenden, denn auch der Wind kann den Sensor stören.

.. image:: img/pir_back.png
    :width: 600
    :align: center

**Abstandseinstellung**

Wenn Sie den Knopf des Entfernungseinstellpotentiometers im Uhrzeigersinn drehen, erhöht sich der Erfassungsbereich und der maximale Erfassungsbereich beträgt etwa 0-7 Meter. Wenn Sie ihn gegen den Uhrzeigersinn drehen, verringert sich der Erfassungsbereich und der minimale Erfassungsbereich beträgt etwa 0-3 Meter.

**Verzögerungseinstellung**

Drehen Sie den Knopf des Verzögerungseinstellpotentiometers im Uhrzeigersinn, Sie können auch sehen, wie die Erfassungsverzögerung zunimmt. Das Maximum der Erfassungsverzögerung kann bis zu 300 s betragen. Im Gegenteil, wenn Sie ihn gegen den Uhrzeigersinn drehen, können Sie die Verzögerung um mindestens 5 Sekunden verkürzen.

**Zwei Trigger-Modi**

Auswahl verschiedener Modi mit der Jumper-Kappe.

* **H**: Wiederholbarer Triggermodus, nach dem Erfassen des menschlichen Körpers gibt das Modul einen hohen Pegel aus. Wenn während der anschließenden Verzögerungszeit jemand in den Erfassungsbereich eintritt, bleibt der Ausgang auf dem hohen Pegel.
* **L**: Nicht wiederholbarer Triggermodus, gibt einen hohen Pegel aus, wenn er den menschlichen Körper wahrnimmt. Nach Ablauf der Verzögerung wechselt der Ausgang automatisch von High-Pegel auf Low-Pegel.

**Beispiel**

* :ref:`ar_pir` (Arduino-Projekt)
