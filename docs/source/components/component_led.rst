.. _cpn_led:

LED
==========

.. image:: img/LED.png
    :width: 400

Halbleiter-Leuchtdioden sind Bauelemente, die elektrische Energie über PN-Übergänge in Lichtenergie umwandeln können. Nach Wellenlänge kann es in Laserdioden, Infrarotlicht emittierende Diode und sichtbares Licht emittierende Diode, die üblicherweise als Licht emittierende Diode (LED) bekannt ist, kategorisiert werden.

Die Diode hat eine unidirektionale Leitfähigkeit, so dass der Stromfluss so ist, wie der Pfeil im Schaltsymbol der Abbildung anzeigt. Sie können die Anode nur mit positivem Strom und die Kathode mit negativem Strom versorgen. Dadurch leuchtet die LED auf.

.. image:: img/led_symbol.png


Eine LED hat zwei Pins. Der längere ist die Anode und der kürzere die Kathode. Achten Sie darauf, sie nicht umgekehrt anzuschließen. Es gibt einen festen Durchlassspannungsabfall in der LED, daher kann sie nicht direkt mit der Schaltung verbunden werden, da die Versorgungsspannung diesen Abfall überwiegen und dazu führen kann, dass die LED durchbrennt. Die Vorwärtsspannung der roten, gelben und grünen LED beträgt 1,8 V und die der weißen 2,6 V. Die meisten LEDs können einem maximalen Strom von 20 mA standhalten, daher müssen wir einen Strombegrenzungswiderstand in Reihe schalten.

Die Formel des Widerstandswerts lautet wie folgt:

    R = (VVersorgung – VD)/I

**R** steht für den Widerstandswert des Strombegrenzungswiderstands, Vsupply für Spannungsversorgung, VD für Spannungsabfall und I für den Arbeitsstrom der LED.

Hier ist die ausführliche Einführung für die LED: `LED - Wikipedia <https://en.wikipedia.org/wiki/Light-emitting_diode>`_.

**Beispiel**

* :ref:`ar_led` (Arduino-Projekt)
* :ref:`breathing_led` (Scratch-Projekt)
* :ref:`table_lamp` (Scratch-Projekt)
