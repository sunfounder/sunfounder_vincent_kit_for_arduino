.. _add_libraries_ar:

Bibliotheken installieren (Wichtig)
======================================

Eine Bibliothek ist eine Sammlung von vorab geschriebenem Code oder Funktionen, die die Fähigkeiten der Arduino IDE erweitern. Bibliotheken bieten sofort einsetzbaren Code für verschiedene Funktionen und ermöglichen es, Zeit und Aufwand beim Programmieren komplexer Funktionen zu sparen.

Es gibt zwei Hauptmethoden, um Bibliotheken zu installieren:

Über den Bibliotheks-Manager installieren
-----------------------------------------------

Viele Bibliotheken sind direkt über den Arduino Bibliotheks-Manager erhältlich. Sie können auf den **Library Manager** zugreifen, indem Sie diesen Schritten folgen:

#. Im **Library Manager** können Sie nach der gewünschten Bibliothek suchen, entweder nach ihrem Namen oder durch verschiedene Kategorien stöbern.

   .. note::

      In Projekten, bei denen eine Installation von Bibliotheken erforderlich ist, erhalten Sie Aufforderungen, welche Bibliotheken zu installieren sind. Befolgen Sie die angegebenen Anweisungen, z.B. "Die ``DHT sensor library`` wird hier verwendet. Sie können sie über den **Library Manager** installieren." Installieren Sie die empfohlenen Bibliotheken wie angegeben.

   .. image:: img/install_lib3.png

#. Sobald Sie die Bibliothek gefunden haben, die Sie installieren möchten, klicken Sie darauf und anschließend auf den **Install**-Button.

   .. image:: img/install_lib2.png

#. Die Arduino IDE wird die Bibliothek automatisch für Sie herunterladen und installieren.

.. _install_lib_man:

Manuelle Installation
--------------------------

Einige Bibliotheken sind nicht über den **Library Manager** erhältlich und müssen manuell installiert werden. Um diese Bibliotheken zu installieren, befolgen Sie diese Schritte:

#. Öffnen Sie die Arduino IDE und navigieren Sie zu **Sketch** -> **Include Library** -> **Add .ZIP Library**.

   .. image:: img/a2dp_add_zip.png

#. Navigieren Sie zu dem Verzeichnis, in dem sich die Bibliotheksdateien befinden, wie z.B. im Ordner ``sunfounder_vincent_kit_for_arduino/library/``, und wählen Sie die Bibliotheksdatei aus und klicken Sie auf **Open**.

   .. image:: img/rfid_choose.png

#. Nach kurzer Zeit erhalten Sie eine Benachrichtigung, die eine erfolgreiche Installation bestätigt.

   .. image:: img/rfid_success.png

#. Wiederholen Sie denselben Vorgang, um weitere Bibliotheken hinzuzufügen.

.. note::

   Bibliotheken, die mit einer der oben genannten Methoden installiert wurden, finden Sie im Standard-Bibliotheksverzeichnis der Arduino IDE, das sich in der Regel unter ``C:\Users\xxx\Documents\Arduino\libraries`` befindet.

   Wenn Ihr Bibliotheksverzeichnis anders ist, können Sie dies überprüfen, indem Sie zu **File** -> **Preferences** navigieren.

      .. image:: img/install_lib1.png
