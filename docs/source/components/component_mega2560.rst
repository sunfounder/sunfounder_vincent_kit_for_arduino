.. note::

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook, animée par SunFounder ! Plongez plus profondément dans l'univers du Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et défis techniques grâce à l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez des astuces et des tutoriels pour développer vos compétences.
    - **Aperçus exclusifs** : Bénéficiez d'un accès anticipé aux annonces de nouveaux produits et aperçus exclusifs.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos produits les plus récents.
    - **Promotions festives et concours** : Participez à des concours et promotions pendant les fêtes.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !
.. _cpn_mega2560:

SunFounder Mega Board
==============================

.. image:: img/mega2560.jpg
    :width: 600
    :align: center

.. note::

    La carte SunFounder Mega est une carte principale aux fonctions presque identiques à celles de l'`Arduino Mega 2560 Rev3 <https://store-usa.arduino.cc/products/arduino-mega-2560-rev3?selectedStore=us>`, et les deux cartes peuvent être utilisées de manière interchangeable.

La carte SunFounder Mega est une carte microcontrôleur basée sur l'ATmega2560 (`datasheet <http://ww1.microchip.com/downloads/en/DeviceDoc/ATmega640-1280-1281-2560-2561-Datasheet-DS40002211A.pdf>`_). Elle dispose de 54 broches d'entrée/sortie numériques (dont 15 pouvant être utilisées en sortie PWM), de 16 entrées analogiques, de 4 UARTs (ports série matériels), d'un oscillateur à cristaux de 16 MHz, d'une connexion USB, d'une prise d'alimentation, d'un en-tête ICSP et d'un bouton de réinitialisation. Elle contient tout le nécessaire pour prendre en charge le microcontrôleur ; il suffit de la connecter à un ordinateur via un câble USB ou de l'alimenter avec un adaptateur AC-DC ou une batterie pour commencer. La carte SunFounder Mega est compatible avec la plupart des shields conçus pour l'Uno ainsi que pour les anciennes cartes Duemilanove ou Diecimila.

**Paramètres techniques**

.. image:: img/mega_pin.png
    :align: center

* MICROCONTROLEUR : ATmega2560
* TENSION DE FONCTIONNEMENT : 5V
* TENSION D'ALIMENTATION (RECOMMANDÉE) : 7-12V
* TENSION D'ALIMENTATION (LIMITÉE) : 6-20V
* BROCHES D'ENTRÉE/SORTIE NUMÉRIQUES : 54 (0-53, dont 15 fournissent une sortie PWM (2-13, 44-46))
* BROCHES D'ENTRÉE ANALOGIQUES : 16 (A0-A15)
* COURANT CONTINU PAR BROCHE I/O : 20 mA
* COURANT CONTINU POUR LA BROCHE 3.3V : 50 mA
* MÉMOIRE FLASH : 256 Ko dont 8 Ko utilisés par le bootloader
* SRAM : 8 Ko
* EEPROM : 4 Ko
* VITESSE D'HORLOGE : 16 MHz
* LED_INCLUS : 13
* LONGUEUR : 101,52 mm
* LARGEUR : 53,3 mm
* POIDS : 37 g
* Port I2C : A4(SDA), A5(SCL); 20(SDA), 21(SCL)

**En savoir plus**

* `Arduino IDE <https://www.arduino.cc/en/software>`_
* `Arduino Programming Language Reference <https://www.arduino.cc/reference/en/>`_
* :ref:`get_started_ar`
* `ATmega2560 Datasheet <http://ww1.microchip.com/downloads/en/DeviceDoc/ATmega640-1280-1281-2560-2561-Datasheet-DS40002211A.pdf>`_