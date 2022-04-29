.. _colorful_ball:

2.3 Farbenfrohe Bälle
========================

In diesem Projekt werden wir die RGB-LEDs verschiedene Farben anzeigen lassen.

Wenn man auf verschiedenfarbige Bälle auf der Bühne klickt, leuchten die RGB-LEDs in verschiedenen Farben auf.

.. image:: img/4_color.png

Sie werden lernen
---------------------

- Das Prinzip der RGB-LED
- Figurs kopieren und verschiedene Kostüme auswählen
- Drei Grundfarben überlagern


Den Schaltkreis aufbauen
---------------------------------

Eine RGB-LED vereint drei LEDs in den Farben Rot, Grün und Blau in einem transparenten oder halbtransparenten Kunststoffgehäuse. Sie kann verschiedene Farben anzeigen, indem sie die Eingangsspannung der drei Stifte ändert und sie überlagert, was laut Statistik 16.777.216 verschiedene Farben erzeugen kann.

.. image:: img/4_rgb.png
    :width: 300

.. image:: img/circuit/rgb_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_rgb`
* :ref:`cpn_resistor`


Programmierung
------------------

**1. Figur auswählen**


Lösche das Standard-Figur und wähle dann das Figur **Ball**.

.. image:: img/4_ball.png

Und dupliziere es 5 Mal.

.. image:: img/4_duplicate_ball.png

Wähle verschiedene Kostüme für diese 5 **Ball**-Figurs und verschiebe sie an die entsprechenden Positionen.

.. note::

    Die Farbe des Kostüms von **Ball3** muss manuell auf rot geändert werden.

.. image:: img/4_rgb1.png
    :width: 800

**2. RGB-LEDs in der entsprechenden Farbe aufleuchten lassen**

Bevor wir den Code verstehen, müssen wir das `RGB-Farbmodell <https://en.wikipedia.org/wiki/RGB_color_model>`_ verstehen.

Das RGB-Farbmodell ist ein additives Farbmodell, bei dem rotes, grünes und blaues Licht auf verschiedene Weise zusammengemischt werden, um eine breite Palette von Farben zu reproduzieren. 

Additive Farbmischung: Die Addition von Rot zu Grün ergibt Gelb; die Addition von Grün zu Blau ergibt Cyan; die Addition von Blau zu Rot ergibt Magenta; die Addition aller drei Primärfarben zusammen ergibt Weiß.

.. image:: img/4_rgb_addition.png
    :width: 400

Der Code, um die RGB-LED gelb leuchten zu lassen, lautet also wie folgt.

.. image:: img/4_yellow.png


Wenn das **Ball**-Figur (gelber Ball) angeklickt wird, setzen wir Pin 11 auf high (rote LED an), Pin 10 auf high (grüne LED an) und Pin 9 auf low (blaue LED aus), so dass die RGB-LED gelb leuchtet.

Du kannst auf die gleiche Weise Codes in andere Figurs schreiben, um die RGB-LEDs in den entsprechenden Farben aufleuchten zu lassen.

**3. Ball2 Figur (hellblau)**

.. image:: img/4_blue.png

**4. Ball3 Figur (rot)**

.. image:: img/4_red.png

**5. Ball4 Figur (grün)**

.. image:: img/4_green.png

**6. Ball5 Figur (lila)**

.. image:: img/4_purple.png



