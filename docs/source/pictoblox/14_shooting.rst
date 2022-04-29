.. _shooting:

2.14 SPIEL - Schießen
====================================

Hast du diese Schießspiele im Fernsehen gesehen? Je näher ein Teilnehmer eine Kugel auf der Zielscheibe an das Bullseye schießt, desto höher ist seine Punktzahl.

Heute machen wir auch ein Schießspiel in Scratch. Bei diesem Spiel musst du das Fadenkreuz so weit wie möglich in die Zielscheibe schießen, um eine höhere Punktzahl zu erreichen.

Klicke auf die grüne Flagge, um zu starten. Benutze das Modul Hindernisvermeidung, um ein Geschoss zu schießen.

.. image:: img/14_shooting.png

Du wirst lernen
---------------------

- Wie das Modul "Hindernisvermeidung" funktioniert und den Winkelbereich
- Verschiedene Figurs malen
- Farben berühren

Den Schaltkreis aufbauen
--------------------------

Das Hindernisvermeidungsmodul ist ein in der Entfernung einstellbarer Infrarot-Näherungssensor, dessen Ausgang normalerweise hoch und niedrig ist, wenn ein Hindernis erkannt wird.

Baue nun die Schaltung nach dem folgenden Schema auf.

.. image:: img/circuit/avoid_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_avoid` 

Programmierung
------------------

**1. Das Fadenkreuz-Figur malen**

Löschen Sie das Standard-Figur, wählen Sie den Button **Figur** und klicken Sie auf **Paint(Malen)**. Es erscheint ein leeres Figur **Figur1** und nennen Sie es **Crosshair**.

.. image:: img/14_shooting0.png


Gehen Sie auf die Seite **Costumes(Kostüme)** des Figur **Crosshair**. Klicken Sie auf das Werkzeug **Kreis**, entfernen Sie die Füllfarbe und legen Sie die Farbe und Breite des Umrisses fest.

.. image:: img/14_shooting02.png

Zeichnen Sie nun einen Kreis mit dem **Kreis**-Werkzeug. Nach dem Zeichnen können Sie auf das Werkzeug **Auswählen** klicken und den Kreis so verschieben, dass der ursprüngliche Punkt mit der Mitte der Leinwand ausgerichtet ist.

.. image:: img/14_shooting03.png

Zeichnen Sie mit dem Werkzeug **Linie** ein Kreuz innerhalb des Kreises.

.. image:: img/14_shooting033.png

**2. Malen Sie das Ziel-Figur**

Erstellen Sie ein neues Figur mit dem Namen **Target**.

.. image:: img/14_shooting01.png

Gehe auf die Seite Kostüme des Figur **Target**, klicke auf das Werkzeug **Kreis**, wähle eine Füllfarbe, entferne die Kontur und male einen großen Kreis.

.. image:: img/14_shooting05.png

Verwenden Sie dieselbe Methode, um weitere Kreise zu zeichnen, jeder mit einer anderen Farbe, und Sie können das Werkzeug **Forward(nach vorne)** oder **Backward(nach hinten)** verwenden, um die Position der sich überlappenden Kreise zu ändern. Beachten Sie, dass Sie auch das Werkzeug zum Verschieben der Kreise auswählen müssen, damit der Ursprung aller Kreise und der Mittelpunkt der Leinwand aufeinander abgestimmt sind.

.. image:: img/14_shooting04.png

**3. Hinzufügen eines Hintergrunds**

Füge einen geeigneten Hintergrund hinzu, der möglichst nicht zu viele Farben hat und nicht mit den Farben im **Target**-Figur übereinstimmt. Hier habe ich **Wall1** als Hintergrund gewählt.

.. image:: img/14_shooting06.png

**4. Skript für das Fadenkreuz-Figur**

Lege die zufällige Position und Größe des **Crosshair**-Figur fest und lass es sich zufällig bewegen.

.. image:: img/14_shooting4.png

Wenn sich eine Hand vor dem Hindernisvermeidungsmodul befindet, gibt es einen niedrigen Pegel als Sendesignal aus.

.. image:: img/14_shooting5.png

Wenn die Meldung **shooting** empfangen wird, hört das Figur auf, sich zu bewegen, und schrumpft langsam, um so den Effekt eines Schusses zu simulieren.

.. image:: img/14_shooting6.png

Benutze den [Touch color ()]-Block, um die Position des Schusses zu bestimmen.

.. image:: img/14_shooting7.png

Wenn sich der Schuss innerhalb des gelben Kreises befindet, wird 10 gemeldet.

.. image:: img/14_shooting8.png

Benutze die gleiche Methode, um die Position des Schusses zu bestimmen. Wenn er nicht auf dem **Target**-Figur liegt, bedeutet das, dass er sich außerhalb des Kreises befindet.

.. image:: img/14_shooting9.png