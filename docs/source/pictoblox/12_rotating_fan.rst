.. _rotating_fan:

2.12 Rotierender Ventilator
=======================================

In diesem Projekt werden wir ein sich drehendes Stern-Figur und einen Ventilator erstellen.

Durch Klicken auf die linken und rechten **arrow**-Figur auf der Bühne wird die Drehung des Motors und des Stern-Figur im und gegen den Uhrzeigersinn gesteuert. Klicke auf das Stern-Figur, um die Drehung zu stoppen.

.. image:: img/13_fan.png

Du wirst lernen
---------------------

- Funktionsprinzip des Motors
- Broadcast-Funktion
- Anhalten anderer Skripte im Figur-Block

Den Schaltkreis aufbauen
------------------------------

In diesem Projekt wird der Motortreiber-Chip :ref:`cpn_l293d` verwendet, um den Motor zum Drehen zu bringen.

L293D ist ein integrierter 4-Kanal-Motortreiber-Chip mit hoher Spannung und hohem Strom. 

Seine Pinbelegung ist unten dargestellt: 

Pin **EN** ist ein Freigabe-Pin und funktioniert nur mit High-Pegel; **A** steht für Eingang und **Y** für Ausgang. Wenn Pin **EN** High-Pegel hat, gibt **A** High-Pegel aus, **Y** Low-Pegel, wenn **A** Low-Pegel hat, gibt **Y** Low-Pegel aus. Wenn der Pin **EN** auf Low-Pegel liegt, funktioniert der L293D nicht.

.. image:: img/13_l293d.png

Baue nun die Schaltung nach folgendem Schema auf.

* Die Enable-Pins 1 und 2 des L293D sind bereits mit 3,3V verbunden, so dass der L293D immer im Arbeitszustand ist. 
* Verbinden Sie Pin 1A und 2A mit Pin 9 bzw. 10 der Steuerplatine. 
* Die beiden Pins des Motors werden mit Pin 1Y bzw. 2Y verbunden. 
* Wenn Pin 10 auf "High" und Pin 9 auf "Low" gesetzt wird, beginnt der Motor, sich in eine Richtung zu drehen. 
* Wenn Pin 10 auf Low und Pin 9 auf High steht, dreht er sich in die entgegengesetzte Richtung.

.. image:: img/circuit/motor_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_motor`
* :ref:`cpn_l293d` 

Programmierung
------------------
Der Effekt, den wir erreichen wollen, ist die Verwendung von 2 **arrow** Figurs, um die Drehung des Motors im Uhrzeigersinn bzw. des Stern-Figur gegen den Uhrzeigersinn zu steuern; ein Klick auf das Stern-Figur stoppt die Drehung des Motors.

**1. Figurs hinzufügen**

Löschen Sie das Standard-Figur, wählen Sie dann das **Star**-Figur und das **Arrow1**-Figur aus, und kopieren Sie **Arrow1** einmal.

.. image:: img/13_star.png

In der Option **Costumes** ändern Sie das Figur **Arrow1** in ein anderes Richtungskostüm.

.. image:: img/13_star1.png

Passen Sie die Größe und Position des Figur entsprechend an.

.. image:: img/13_star2.png

**2. Linkes arrow Figur**

Wenn dieses Figur angeklickt wird, sendet es eine Nachricht - Drehen, setzt dann den digitalen Pin 9 auf low und Pin 10 auf high und setzt die Variable **flag** auf 1. Wenn du das **Arrow1**-Figur anklickst, dreht sich der Motor gegen den Uhrzeigersinn, wenn du im Uhrzeigersinn drehst, vertauschst du die Positionen von Pin 9 und Pin 10.

Hier gibt es 2 Punkte zu beachten.

* `[broadcast <https://en.scratch-wiki.info/wiki/Broadcast>`_]: aus der **Ereignisse**-Palette, wird verwendet, um eine Nachricht an die anderen Figurs zu senden, wenn die anderen Figurs diese Nachricht erhalten, werden sie ein bestimmtes Ereignis ausführen. Zum Beispiel ist hier **turn**, wenn das **Star**-Figur diese Nachricht erhält, führt es das Drehungsskript aus.
* Variable [flag]: Die Richtung der Drehung des **Star**-Figur wird durch den Wert von flag bestimmt. Wenn du also die Variable **flag** erstellst, musst du sie für alle Figurs gelten lassen.

.. image:: img/13_left.png

**3. **arrow**-nach-rechts-Figur**

Wenn dieses Figur angeklickt wird, sende eine Nachricht, dass sich der Motor im Uhrzeigersinn dreht, setze dann den digitalen Pin 9 auf high und Pin 10 auf low und setze die Variable **flag** auf 0.

.. image:: img/13_right.png

**4. Stern-Figur**

Hier gibt es 2 Ereignisse.

* Wenn das **Star**-Figur die gesendete Nachricht turn empfängt, bestimmt es den Wert von flag; wenn flag 1 ist, dreht es sich 10 Grad nach links, sonst kehrt es um. Da es sich in [FOREVER] befindet, wird es sich weiter drehen.
* Wenn dieses Figur angeklickt wird, setze beide Pins des Motors auf high, damit er aufhört sich zu drehen und die anderen Skripte in diesem Figur stoppen.

.. image:: img/13_broadcast.png



