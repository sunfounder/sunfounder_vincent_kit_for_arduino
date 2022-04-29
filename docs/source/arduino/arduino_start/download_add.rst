Code herunterladen und Bibliotheken hinzufügen
=======================================================

Laden Sie den Code herunter
-----------------------------------

Laden Sie den entsprechenden Code über den unten stehenden Link herunter.

* :download:`SunFounder Vincent Kit for Arduino <https://github.com/sunfounder/sunfounder_vincent_kit_for_arduino/archive/refs/heads/master.zip>`

* Oder sehen Sie sich den Code bei `Vincent Kit for Arduino - GitHub <https://github.com/sunfounder/sunfounder_vincent_kit_for_arduino>`_

.. _add_libraries_ar:

Bibliotheken hinzufügen
------------------------------

**Was ist Bibliothek?**

Eine Bibliothek, die einige Funktionsdefinitionen und Header-Dateien enthält, enthält normalerweise zwei Dateien: .h (Header-Datei, einschließlich Funktionsanweisung, Makrodefinition, Konstruktordefinition usw.) und .cpp (Ausführungsdatei mit Funktionsimplementierung, Variablendefinition und bald). Wenn Sie eine Funktion in einer Bibliothek verwenden müssen, müssen Sie nur eine Header-Datei hinzufügen (z. B. #include <dht.h>) und dann diese Funktion aufrufen. Dies kann Ihren Code prägnanter machen. Wenn Sie die Bibliothek nicht verwenden möchten, können Sie diese Funktionsdefinition auch direkt schreiben. Als Ergebnis wird der Code jedoch lang und unbequem zu lesen sein.

**Bibliotheken hinzufügen**

Einige Bibliotheken sind bereits in der Arduino IDE integriert, während andere möglicherweise hinzugefügt werden müssen. Sehen wir uns nun an, wie man eine hinzufügt. Dafür gibt es 2 Methoden.

**Methode 1 Fügen Sie die .ZIP-Bibliothek hinzu**

Importieren Sie die Bibliothek direkt in Arduino IDE (nehmen Sie unten Dht als Beispiel). Der Vorteil dieser Methode liegt in der einfachen Verständlichkeit und Bedienung, andererseits kann immer nur eine Bibliothek importiert werden. Es ist also unpraktisch, wenn Sie ziemlich viele Bibliotheken hinzufügen müssen.

**Schritt 1** : Wählen Sie **Sketch** -> **Include Library** -> **Add .ZIP Library**.


.. image:: img/image291.png
   :align: center

Schritt 2: ``Library`` Ordner suchen, auf **Öffnen** klicken .

.. image:: img/image292.png
   :align: center

**Schritt 3**: Wenn Sie sehen, dass **Bibliothek zu Ihren Bibliotheken hinzugefügt wurde. Aktivieren Sie das Menü „Bibliothek einbeziehen“**, dies bedeutet, dass Sie die Bibliothek erfolgreich hinzugefügt haben. Bitte verwenden Sie die gleiche Methode, um dann andere Bibliotheken hinzuzufügen.

.. image:: img/image293.png
   :align: center

**Methode 2 Manuell hinzufügen**

Sie können auch versuchen, die Bibliothek selbst in den Ordner ``libraries`` Ihres Skizzenbuchs zu legen. Diese Methode kann
Diese Methode kann alle Bibliotheken kopieren und sie auf einmal hinzufügen, aber zuerst müssen Sie den Pfad finden, in dem sich der ``libraries`` Ordner befindet.

**Schritt 1**: Sie können den Ort Ihres ``libraries``-Ordners unter **File** > **Preferences** > **Sketchbook location** finden oder ändern.

..  image:: img/image294.png
   :align: center

**Schritt 2**: Wechseln Sie in das Verzeichnis ``sunfounder_vincent_kit_for_arduino/library`` und kopieren Sie alle darin befindlichen Verzeichnisse.

.. image:: img/image295.png
   :align: center

**Schritt 3**: Gehen Sie zu Ihrem ``libraries`` Ordner (zu finden in der Arduino IDE), klicken Sie darauf um ihn zu öffnen.

.. image:: img/image296.png
   :align: center

**Schritt 4**: Füge alle zuvor kopierten Bibliotheken in den Ordner ``libraries`` ein.

.. image:: img/image297.png
   :align: center

Es gibt auch eine Möglichkeit, den **Library Manager** zu verwenden, aber die mit dieser Methode hinzugefügten Bibliotheken sind nicht unbedingt mit dem von uns bereitgestellten Code kompatibel, daher wird dies nicht empfohlen.

Hier ist der Link zum offiziellen Arduino-Tutorial: https://docs.arduino.cc/software/ide-v1/tutorials/installing-libraries