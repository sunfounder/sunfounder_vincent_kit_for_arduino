.. note:: 

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook, animée par SunFounder ! Plongez dans l'univers de Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et vos défis techniques grâce à l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez astuces et tutoriels pour améliorer vos compétences.
    - **Aperçus exclusifs** : Bénéficiez d'un accès anticipé aux annonces de nouveaux produits et aperçus exclusifs.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos produits les plus récents.
    - **Promotions festives et concours** : Participez à des concours et promotions pendant les fêtes.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _cpn_joystick:

Module Joystick
=======================

.. image:: img/joystick_pic.png
    :align: center
    :width: 600

Le principe de base d'un joystick est de traduire le mouvement du levier en informations électroniques que l'ordinateur peut traiter.

Pour transmettre toute l'amplitude de mouvement à l'ordinateur, un joystick doit mesurer la position du levier sur deux axes : l'axe X (de gauche à droite) et l'axe Y (de haut en bas). Comme en géométrie de base, les coordonnées X-Y permettent de localiser précisément la position du levier.

Pour déterminer la position du levier, le système de contrôle du joystick surveille simplement la position de chaque axe. Le design classique du joystick analogique fait cela à l'aide de deux potentiomètres, ou résistances variables.

Le joystick dispose également d'une entrée numérique qui est activée lorsque le joystick est enfoncé.

.. image:: img/joystick318.png
    :align: center
    :width: 600

**Exemple**

* :ref:`ar_joystick` (Arduino Project)
* :ref:`star_crossed` (Scratch Project)
* :ref:`dragon` (Scratch Project)