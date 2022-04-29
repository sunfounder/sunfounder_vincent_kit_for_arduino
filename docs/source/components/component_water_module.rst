.. _cpn_water:

Wasserstandssensormodul
===================================

.. image:: img/water_sensor.png

* **S**: Signalstift, je mehr Wasser der Sensor eingetaucht ist, desto größer ist der Ausgangswert.
* **+**: Stromversorgung, 3.3 ~ 5V DC.
* **-**: Masse.

Das Wasserstandssensormodul ist ein benutzerfreundlicher, kompakter und kostengünstiger Wasserstands-/Tropfenerkennungssensor, der den Wasserstand durch eine Reihe freigelegter paralleler Leiterbahnen misst, um die Größe des Wassertropfens/Volumens zu bestimmen.

Der Wasserstandssensor hat zehn freigelegte Kupferbahnen, fünf für die Strombahnen und fünf für die Sensorbahnen, die bei Überschwemmung von Wasser gekreuzt und überbrückt werden. Die Platine verfügt über eine Power-LED, die aufleuchtet, wenn die Platine mit Strom versorgt wird.

Die Kombination dieser Spuren wirkt wie ein variabler Widerstand, der den Widerstandswert entsprechend dem Wasserstand ändert. Genauer gesagt, je mehr Wasser der Sensor eingetaucht ist, desto besser ist die Leitfähigkeit und desto geringer ist der Widerstand. Umgekehrt gilt: Je weniger leitfähig es ist, desto höher ist der Widerstand. Als nächstes verarbeitet der Sensor die Ausgangssignalspannung, die an den Mikrocontroller gesendet wird, und hilft uns so, den Wasserstand zu bestimmen.


.. warning:: 
    Der Sensor kann nicht vollständig in Wasser getaucht werden, bitte lassen Sie nur den Teil mit Wasser in Kontakt, an dem sich die zehn Spuren befinden. Darüber hinaus beschleunigt das Einschalten des Sensors in einer feuchten Umgebung die Korrosion der Sonde und verkürzt die Lebensdauer des Sensors. Wir empfehlen daher, dass Sie nur während der Messung Strom zuführen.

**Beispiel**

* :ref:`ar_water` (Arduino-Projekt)
* :ref:`starfish` (Scratch-Projekt)