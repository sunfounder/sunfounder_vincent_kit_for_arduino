.. note::

    Hallo und willkommen in der SunFounder Raspberry Pi & Arduino & ESP32 Enthusiasten-Gemeinschaft auf Facebook! Tauchen Sie tiefer ein in die Welt von Raspberry Pi, Arduino und ESP32 mit anderen Enthusiasten.

    **Warum beitreten?**

    - **Expertenunterstützung**: Lösen Sie Nachverkaufsprobleme und technische Herausforderungen mit Hilfe unserer Gemeinschaft und unseres Teams.
    - **Lernen & Teilen**: Tauschen Sie Tipps und Anleitungen aus, um Ihre Fähigkeiten zu verbessern.
    - **Exklusive Vorschauen**: Erhalten Sie frühzeitigen Zugang zu neuen Produktankündigungen und exklusiven Einblicken.
    - **Spezialrabatte**: Genießen Sie exklusive Rabatte auf unsere neuesten Produkte.
    - **Festliche Aktionen und Gewinnspiele**: Nehmen Sie an Gewinnspielen und Feiertagsaktionen teil.

    👉 Sind Sie bereit, mit uns zu erkunden und zu erschaffen? Klicken Sie auf [|link_sf_facebook|] und treten Sie heute bei!

.. _cpn_buzzer:

Summer
=======

.. image:: img/buzzer.png
    :width: 600

Als eine Art elektronischer Summer mit integrierter Struktur werden Summer, die mit Gleichstrom versorgt werden, weit verbreitet in Computern, Druckern, Fotokopierern, Alarmen, elektronischen Spielzeugen, elektronischen Automobilgeräten, Telefonen, Timern und anderen elektronischen Produkten oder Sprachgeräten verwendet.

Summer können in aktive und passive Summer eingeteilt werden (siehe folgendes Bild). Drehen Sie den Summer so, dass seine Stifte nach oben zeigen, und der Summer mit einer grünen Platine ist ein passiver Summer, während der mit einem schwarzen Klebeband umschlossene ein aktiver ist.

Der Unterschied zwischen einem aktiven Summer und einem passiven Summer:

Ein aktiver Summer hat eine eingebaute oszillierende Quelle, sodass er Geräusche macht, wenn er elektrifiziert wird. Ein passiver Summer hat jedoch keine solche Quelle, sodass er nicht piept, wenn DC-Signale verwendet werden. Stattdessen müssen Sie Rechteckwellen verwenden, deren Frequenz zwischen 2K und 5K liegt, um es anzutreiben. Der aktive Buzzer ist wegen mehrerer eingebauter Schwingkreise oft teurer als der passive.

Das Folgende ist das elektrische Symbol eines Summers. Es hat zwei Pins mit Plus- und Minuspol. Ein + in der Oberfläche stellt die Anode dar und das andere die Kathode.

.. image:: img/buzzer_symbol.png
    :width: 150

Sie können die Stifte des Summers überprüfen, der längere ist die Anode und der kürzere die Kathode. Bitte beim Anschließen nicht verwechseln, da sonst der Summer keinen Ton von sich gibt.

`Summer – Wikipedia <https://en.wikipedia.org/wiki/Buzzer>`_

**Beispiel**

* :ref:`ar_active_buzzer` (Arduino-Projekt)
* :ref:`ar_passive_buzzer` (Arduino-Projekt)


