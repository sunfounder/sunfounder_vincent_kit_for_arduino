.. _cpn_power_module:

Energieversorgungs Modul
==========================

Wenn wir einen großen Strom benötigen, um eine Komponente anzutreiben, was die normale Arbeit von Raspberry Pi stark beeinträchtigt. Daher versorgen wir die Komponente über dieses Modul separat mit Strom, damit sie sicher und stabil läuft.

Sie können es einfach in das Steckbrett stecken, um es mit Strom zu versorgen. Es liefert eine Spannung von 3,3 V und 5 V, und Sie können beide über eine mitgelieferte Jumper-Kappe anschließen.

.. image:: img/power_supply.png
    :width: 500
    :align: center

**Eigenschaften und Spezifikationen**

* Eingangsspannung: 6,5 - 12 V
* Zwei unabhängige Kanäle
* Ausgangsspannung: 5 V, 3,3 V (einstellbar über Jumper. 0 V, 3,3 V und 5 V Konfiguration)
* Ausgangsstrom: Maximaler Ausgangsstrom 700mA
* Onboard-Berg-Stiftleiste für GND, 5 V, 3,3 V-Ausgang
* EIN-AUS-Schalter verfügbar.
* USB-Eingang (Typ A) verfügbar.
* DC Barrel Jack-Eingang verfügbar.
* Onboard-Power-LED
* Abmessungen: 53 mm x 33 mm (L x B)


**Beispiel**

* :ref:`ar_motor` (Arduino-Projekt)
* :ref:`ar_stepper_motor` (Arduino-Projekt)

