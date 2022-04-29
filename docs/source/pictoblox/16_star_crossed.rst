.. _star_crossed:

2.16 SPIEL - Star-Crossed
==========================

In den nächsten Projekten werden wir einige lustige Minispiele in PictoBlox spielen.

Hier verwenden wir das Joystick-Modul, um ein Star-Crossed-Spiel zu spielen.

Nachdem das Skript ausgeführt wurde, erscheinen zufällig Sterne auf der Bühne. Du musst mit dem Joystick das Rocketship steuern, um den Sternen auszuweichen, wenn du sie berührst, ist das Spiel vorbei.

.. image:: img/16_rocket.png

Du wirst lernen
---------------------

- Wie das Joystick-Modul funktioniert
- Setzen der x- und y-Koordinaten des Figur

Die Schaltung aufbauen
-----------------------

Ein Joystick ist ein Eingabegerät, das aus einem Stock besteht, der sich auf einer Basis dreht und seinen Winkel oder seine Richtung an das Gerät, das er steuert, meldet. Joysticks werden häufig zur Steuerung von Videospielen und Robotern verwendet.

Damit ein Joystick dem Computer den vollen Bewegungsumfang mitteilen kann, muss er die Position des Sticks auf zwei Achsen messen - der X-Achse (von links nach rechts) und der Y-Achse (nach oben und unten).

Die Bewegungskoordinaten des Joysticks sind in der folgenden Abbildung dargestellt.

.. note::

    * Die x-Koordinate ist von links nach rechts, der Bereich ist 0-1023.
    * Die y-Koordinate ist von oben nach unten, der Bereich ist 0-1023.

.. image:: img/16_joystick.png


Baue nun die Schaltung nach dem folgenden Schema auf.

.. image:: img/circuit/joystick_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_joystick`

Programmierung
------------------
Das ganze Skript soll den Effekt erzielen, dass wenn die grüne Flagge angeklickt wird, sich das **Star**-Figur in einer Kurve auf der Bühne bewegt und man muss den Joystick benutzen, um das **Rocketship** zu bewegen, damit es nicht vom **Star**-Figur berührt wird.

**1. Hinzufügen von Figurs und Kulissen**

Löschen Sie das Standard-Figur und verwenden Sie die Schaltfläche **Figur Wählen**, um das Figur **Rocketship** und das Figur **Star** hinzuzufügen. Beachten Sie, dass die Größe des **Rocketship**-Figur auf 50% eingestellt ist.

.. image:: img/16_sprite.png

Fügen Sie nun den **Stars**-Hintergrund über **Bühnenbild wählen** hinzu.

.. image:: img/16_sprite1.png

**2. Scripting für Rocketship**

Das **Rocketship**-Figur soll den Effekt erzielen, dass es an einer zufälligen Position erscheint und dann mit dem Joystick gesteuert werden kann, um es nach oben, unten, links und rechts zu bewegen.

Der Arbeitsablauf ist wie folgt.

* Wenn die grüne Flagge angeklickt wird, soll das Figur an eine zufällige Position gehen und 2 Variablen **x** und **y** erstellen, die die von A0 (VRX des Joysticks) bzw. A1 (VRY des Joysticks) gelesenen Werte speichern. Sie können das Skript laufen lassen, indem Sie den Joystick nach oben und unten, links und rechts bewegen, um den Wertebereich für x und y zu sehen.

.. image:: img/16_roc2.png

* Der Wert von A0 liegt im Bereich von 0-1023 (die Mitte ist etwa 512). Benutze ``x-512>200``, um festzustellen, ob der Joystick nach rechts schaltet, und wenn ja, mache die x-Koordinate des Figur +30 (um das Figur nach rechts zu bewegen).

.. image:: img/16_roc3.png

* Wenn der Joystick nach links umgeschaltet wird (``x-512<-200``), wird die x-Koordinate des Figur auf -30 gesetzt (das Figur wird nach links bewegt).

.. image:: img/16_roc4.png

* Da die y-Koordinate des Joysticks von oben (0) nach unten (1023) geht und die y-Koordinate des Figur von unten nach oben. Um also den Joystick nach oben und das Figur nach oben zu bewegen, muss die y-Koordinate im Skript -30 sein.

.. image:: img/16_roc5.png

* Wird der Joystick nach unten geschnippt, ist die y-Koordinate des Figur +30.


.. image:: img/16_roc6.png

**3. Skripting für Star**

Das Figur **Star** soll an einer zufälligen Stelle erscheinen, und wenn es auf **Rocketship** trifft, hört das Skript auf zu laufen und das Spiel endet.

* Wenn die grüne Flagge angeklickt wird und das Figur an einer zufälligen Stelle erscheint, soll der [turn degrees]-Block dafür sorgen, dass sich das **Star**-Figur mit einer kleinen Winkeländerung vorwärts bewegt, so dass man sehen kann, dass es sich in einer Kurve bewegt und, wenn es auf einer Kante steht, abprallt.

.. image:: img/16_star1.png

* Wenn das Figur das **Rocketship**-Figur berührt, während es sich bewegt, wird das Skript nicht weiter ausgeführt.

.. image:: img/16_star2.png