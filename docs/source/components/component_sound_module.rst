.. note::

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook, animée par SunFounder ! Explorez plus en profondeur l'univers du Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et défis techniques grâce à l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez des astuces et des tutoriels pour développer vos compétences.
    - **Aperçus exclusifs** : Bénéficiez d'un accès anticipé aux annonces de nouveaux produits et aperçus exclusifs.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos produits les plus récents.
    - **Promotions festives et concours** : Participez à des concours et promotions pendant les fêtes.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _cpn_sound:

Module de capteur sonore
===========================

.. image:: img/image222.png
    :width: 500
    :align: center 

Un capteur sonore est un module qui détecte les ondes sonores à travers leur intensité et les convertit en signaux électriques.

Ce module peut être utilisé dans des applications de sécurité, de commutation et de surveillance. Sa précision peut être facilement ajustée pour en faciliter l'utilisation.

Il utilise un microphone qui fournit l'entrée à un amplificateur, un détecteur de crête et un tampon. Lorsque le capteur détecte un son, il génère un signal de sortie qui est envoyé à un microcontrôleur, lequel effectue les traitements nécessaires.

Ce module possède deux sorties :

* **AO** : sortie analogique, signal de tension en temps réel provenant du microphone.
* **DO** : lorsque l'intensité du son atteint un certain seuil, la sortie génère un signal de niveau haut ou bas. La sensibilité du seuil peut être ajustée à l'aide du potentiomètre.

**Exemple**

* :ref:`ar_sound` (Arduino Project)
* :ref:`blow_ball` (Scratch Project)