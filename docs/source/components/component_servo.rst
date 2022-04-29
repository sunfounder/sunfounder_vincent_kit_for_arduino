.. _cpn_servo:

Servo
===========

.. image:: img/servo.png
    :align: center

Ein Servo besteht im Allgemeinen aus den folgenden Teilen: Gehäuse, Welle, Getriebesystem, Potentiometer, Gleichstrommotor und eingebettete Platine.

Es funktioniert so: Der Mikrocontroller sendet PWM-Signale an das Servo, und dann empfängt die eingebettete Platine im Servo die Signale über den Signalstift und steuert den Motor im Inneren, um sich zu drehen. Als Ergebnis treibt der Motor das Getriebesystem an und treibt dann die Welle nach der Verzögerung an. Welle und Potentiometer des Servos sind miteinander verbunden. Wenn sich die Welle dreht, treibt sie das Potentiometer an, sodass das Potentiometer ein Spannungssignal an die eingebettete Platine ausgibt. Dann bestimmt das Board anhand der aktuellen Position die Drehrichtung und -geschwindigkeit, sodass es genau an der definierten Position anhalten und dort halten kann.

.. image:: img/servo_internal.png
    :align: center

Der Winkel wird durch die Dauer eines Impulses bestimmt, der an den Steuerdraht angelegt wird. Dies wird als Pulsweitenmodulation bezeichnet. Der Servo erwartet alle 20 ms einen Impuls. Die Länge des Impulses bestimmt, wie weit sich der Motor dreht. Ein 1,5-ms-Impuls z. B. lässt den Motor in die 90-Grad-Position (Neutralposition) drehen. Wenn ein Impuls von weniger als 1,5 ms an ein Servo gesendet wird, dreht sich das Servo in eine Position und hält seine Ausgangswelle einige Grad gegen den Uhrzeigersinn vom neutralen Punkt entfernt. Wenn der Impuls breiter als 1,5 ms ist, tritt das Gegenteil ein. Die minimale Breite und die maximale Breite des Impulses, der dem Servo befiehlt, sich in eine gültige Position zu drehen, sind Funktionen jedes Servos. Im Allgemeinen ist der minimale Impuls etwa 0,5 ms breit und der maximale Impuls 2,5 ms breit.

.. image:: img/servo_duty.png
    :width: 600
    :align: center

**Beispiel**

* :ref:`ar_servo` (Arduino-Projekt)
* :ref:`pendulum` (Scratch-Projekt)



