.. _cpn_rfid:

MFRC522-Modul
=====================

**RFID**

Radio Frequency Identification (RFID) bezieht sich auf Technologien, die die Verwendung einer drahtlosen Kommunikation zwischen einem Objekt (oder Tag) und einem Abfragegerät (oder Lesegerät) umfassen, um solche Objekte automatisch zu verfolgen und zu identifizieren. Die Reichweite der Tag-Übertragung ist auf mehrere Meter vom Lesegerät begrenzt. Eine freie Sichtverbindung zwischen Lesegerät und Tag ist nicht unbedingt erforderlich.

Die meisten Tags enthalten mindestens einen integrierten Schaltkreis (IC) und eine Antenne. Der Mikrochip speichert Informationen und ist für die Verwaltung der Funkfrequenz (RF)-Kommunikation mit dem Lesegerät verantwortlich. Passive Tags haben keine unabhängige Energiequelle und sind für ihren Betrieb auf ein externes elektromagnetisches Signal angewiesen, das vom Lesegerät bereitgestellt wird. Aktive Tags enthalten eine unabhängige Energiequelle, beispielsweise eine Batterie. Somit können sie eine erhöhte Verarbeitung, Übertragungsfähigkeiten und Reichweite aufweisen.


.. image:: img/image230.png
    :align: center


**MFRC522**

MFRC522 ist eine Art integrierter Lese- und Schreibkartenchip. Es wird üblicherweise im Radio bei 13,56 MHz verwendet. Es wurde von der NXP Company auf den Markt gebracht und ist ein kostengünstiger und kleiner berührungsloser Kartenchip mit niedriger Spannung, die beste Wahl für intelligente Instrumente und tragbare Handgeräte.

Der MF RC522 verwendet ein fortschrittliches Modulations- und Demodulationskonzept, das in allen Arten von passiven kontaktlosen 13,56-MHz-Kommunikationsmethoden und -protokollen vollständig dargestellt wird. Darüber hinaus unterstützt es den schnellen CRYPTO1-Verschlüsselungsalgorithmus zur Überprüfung von MIFARE-Produkten. Der MFRC522 unterstützt auch die berührungslose Hochgeschwindigkeitskommunikation der MIFARE-Serie mit einer bidirektionalen Datenübertragungsrate von bis zu 424 kbit/s. Als neues Mitglied der hochintegrierten 13,56-MHz-Lesekartenserie ist MF RC522 den bestehenden MF RC500 und MF RC530 sehr ähnlich, es gibt jedoch auch große Unterschiede. Es kommuniziert mit der Host-Maschine über die serielle Art und Weise, die weniger Verkabelung erfordert. Sie können zwischen SPI-, I2C- und seriellem UART-Modus (ähnlich RS232) wählen, was dazu beiträgt, die Verbindung zu reduzieren, Platz auf der Leiterplatte zu sparen (kleinere Größe) und die Kosten zu senken.


**Beispiel**

* :ref:`ar_rfid` (Arduino-Projekt)
