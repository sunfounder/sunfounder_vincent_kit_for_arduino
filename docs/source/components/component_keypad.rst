.. note::

    Hallo und willkommen in der SunFounder Raspberry Pi & Arduino & ESP32 Enthusiasten-Gemeinschaft auf Facebook! Tauchen Sie tiefer ein in die Welt von Raspberry Pi, Arduino und ESP32 mit anderen Enthusiasten.

    **Warum beitreten?**

    - **Expertenunterstützung**: Lösen Sie Nachverkaufsprobleme und technische Herausforderungen mit Hilfe unserer Gemeinschaft und unseres Teams.
    - **Lernen & Teilen**: Tauschen Sie Tipps und Anleitungen aus, um Ihre Fähigkeiten zu verbessern.
    - **Exklusive Vorschauen**: Erhalten Sie frühzeitigen Zugang zu neuen Produktankündigungen und exklusiven Einblicken.
    - **Spezialrabatte**: Genießen Sie exklusive Rabatte auf unsere neuesten Produkte.
    - **Festliche Aktionen und Gewinnspiele**: Nehmen Sie an Gewinnspielen und Feiertagsaktionen teil.

    👉 Sind Sie bereit, mit uns zu erkunden und zu erschaffen? Klicken Sie auf [|link_sf_facebook|] und treten Sie heute bei!

.. _cpn_keypad:

Tastenfeld
========================

Ein Tastenfeld ist eine rechteckige Anordnung von 12 oder 16 AUS-(EIN)-Tasten. Der Zugang zu ihren Kontakten erfolgt über eine Stiftleiste, die zum Anschluss mit einem Flachbandkabel oder zum Einsetzen in eine Leiterplatte geeignet ist. Bei einigen Tastaturen ist jede Taste mit einem separaten Kontakt in der Kopfzeile verbunden, während alle Tasten eine gemeinsame Masse haben.

.. image:: img/keypad314.png

Häufiger sind die Tasten matrixcodiert, was bedeutet, dass jede von ihnen ein eindeutiges Leiterpaar in einer Matrix überbrückt. Diese Konfiguration ist zum Abfragen durch einen Mikrocontroller geeignet, der so programmiert werden kann, dass er nacheinander einen Ausgangsimpuls an jeden der vier horizontalen Drähte sendet. Während jedes Impulses überprüft es nacheinander die verbleibenden vier vertikalen Drähte, um festzustellen, welcher, falls vorhanden, ein Signal führt. Pullup- oder Pulldown-Widerstände sollten den Eingangsdrähten hinzugefügt werden, um zu verhindern, dass sich die Eingänge des Mikrocontrollers unvorhersehbar verhalten, wenn kein Signal vorhanden ist.

**Beispiel**

* :ref:`ar_keypad` (Arduino-Projekt)
* :ref:`ar_access_system` (Arduino-Projekt)