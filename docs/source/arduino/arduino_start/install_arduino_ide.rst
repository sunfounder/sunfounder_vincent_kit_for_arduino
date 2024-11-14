.. note:: 

    Bonjour, bienvenue dans la communauté des passionnés de SunFounder Raspberry Pi, Arduino et ESP32 sur Facebook ! Approfondissez vos connaissances sur Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez les problèmes après-vente et relevez les défis techniques avec l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez des conseils et tutoriels pour améliorer vos compétences.
    - **Aperçus exclusifs** : Bénéficiez d'un accès anticipé aux annonces de nouveaux produits et avant-premières.
    - **Réductions spéciales** : Profitez de remises exclusives sur nos derniers produits.
    - **Promotions festives et concours** : Participez à des concours et promotions de fêtes.

    👉 Prêt à explorer et à créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _install_arduino:

Installation de l'Arduino IDE (Important)
============================================

L'Arduino IDE, ou Environnement de Développement Intégré Arduino, fournit tout le support logiciel nécessaire pour réaliser un projet Arduino. Il s'agit d'un logiciel de programmation spécialement conçu pour Arduino, fourni par l'équipe Arduino, qui nous permet d'écrire des programmes et de les télécharger sur la carte Arduino.

L'Arduino IDE 2.0 est un projet open-source. Il représente un grand pas en avant par rapport à son robuste prédécesseur, Arduino IDE 1.x, et propose une interface utilisateur repensée, un gestionnaire de cartes et de bibliothèques amélioré, un débogueur, une fonction d'auto-complétion, et bien plus encore.

Dans ce tutoriel, nous vous montrerons comment télécharger et installer l'Arduino IDE 2.0 sur votre ordinateur sous Windows, Mac ou Linux.

Configuration requise
------------------------

* Windows - Win 10 et plus récent, 64 bits
* Linux - 64 bits
* Mac OS X - Version 10.14 "Mojave" ou plus récent, 64 bits

Télécharger l'Arduino IDE 2.0
-----------------------------

#. Rendez-vous sur |link_download_arduino|.

#. Téléchargez l'IDE pour la version de votre système d'exploitation.

    .. image:: img/sp_001.png

Installation
---------------

Windows
^^^^^^^^

#. Double-cliquez sur le fichier ``arduino-ide_xxxx.exe`` pour exécuter le fichier téléchargé.

#. Lisez et acceptez le contrat de licence.

    .. image:: img/sp_002.png

#. Choisissez les options d'installation.

    .. image:: img/sp_003.png

#. Choisissez l'emplacement d'installation. Il est recommandé d'installer le logiciel sur un lecteur autre que le lecteur système.

    .. image:: img/sp_004.png

#. Cliquez sur Terminer.

    .. image:: img/sp_005.png

macOS
^^^^^^^

Double-cliquez sur le fichier téléchargé ``arduino_ide_xxxx.dmg`` et suivez les instructions pour copier **Arduino IDE.app** dans le dossier **Applications**. Vous verrez l'Arduino IDE installé avec succès après quelques secondes.

.. image:: img/macos_install_ide.png
    :width: 800

Linux
^^^^^

Pour le tutoriel sur l'installation de l'Arduino IDE 2.0 sur un système Linux, veuillez vous référer à : https://docs.arduino.cc/software/ide-v2/tutorials/getting-started/ide-v2-downloading-and-installing#linux


Ouvrir l'IDE
------------

#. Lors de la première ouverture de l'Arduino IDE 2.0, il installe automatiquement les cartes Arduino AVR, les bibliothèques intégrées et autres fichiers nécessaires.

    .. image:: img/sp_901.png

#. De plus, votre pare-feu ou centre de sécurité peut s'afficher plusieurs fois pour vous demander si vous souhaitez installer certains pilotes de périphériques. Veuillez les installer tous.

    .. image:: img/sp_104.png

#. Votre Arduino IDE est maintenant prêt !

    .. note::
        Dans le cas où certaines installations n'ont pas réussi en raison de problèmes de réseau ou autres, vous pouvez rouvrir l'Arduino IDE pour terminer le reste de l'installation. La fenêtre de sortie ne s'ouvrira pas automatiquement après la fin de toutes les installations, sauf si vous cliquez sur Vérifier ou Téléverser.
