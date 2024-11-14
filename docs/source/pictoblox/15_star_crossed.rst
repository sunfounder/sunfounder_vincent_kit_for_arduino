.. note:: 

    Bonjour et bienvenue dans la communauté SunFounder Raspberry Pi & Arduino & ESP32 Enthusiasts sur Facebook ! Plongez dans l’univers de Raspberry Pi, Arduino et ESP32 avec d’autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez les problèmes post-achat et les défis techniques avec l'aide de notre communauté et de notre équipe.
    - **Apprenez et partagez** : Échangez des conseils et des tutoriels pour perfectionner vos compétences.
    - **Aperçus exclusifs** : Accédez en avant-première aux annonces de nouveaux produits.
    - **Réductions spéciales** : Profitez de remises exclusives sur nos derniers produits.
    - **Promotions et cadeaux festifs** : Participez à des concours et des promotions festives.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _star_crossed:

2.15 JEU - À la Chasse aux Étoiles
=======================================

Dans les prochains projets, nous jouerons à des mini-jeux amusants dans PictoBlox.

Ici, nous utilisons le module Joystick pour jouer à un jeu de Chasse aux Étoiles.

Après avoir lancé le script, des étoiles apparaîtront aléatoirement sur la scène. Vous devrez utiliser le joystick pour contrôler le vaisseau spatial et éviter les étoiles. Si vous en touchez une, le jeu est terminé.

.. image:: img/16_rocket.png

Vous Apprendrez
---------------------

- Fonctionnement du module Joystick
- Régler les coordonnées x et y d'un sprite

Construire le Circuit
-----------------------

Un joystick est un dispositif d’entrée composé d’un manche qui pivote sur une base et transmet l’angle ou la direction à l’appareil contrôlé. Les joysticks sont souvent utilisés pour contrôler des jeux vidéo et des robots.

Pour communiquer une gamme complète de mouvements, un joystick doit mesurer la position du manche sur deux axes : l'axe X (gauche à droite) et l'axe Y (haut en bas).

Les coordonnées de mouvement du joystick sont illustrées dans la figure suivante.

.. note::

    * L'axe x va de gauche à droite avec une plage de 0 à 1023.
    * L'axe y va de haut en bas, avec une plage de 0 à 1023.

.. image:: img/16_joystick.png


Montez maintenant le circuit selon le schéma ci-dessous.

.. image:: img/circuit/joystick_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_joystick`

Programmation
------------------
Le script doit permettre que lorsque le drapeau vert est cliqué, le sprite **Stars** se déplace en courbe sur la scène, et que vous utilisez le joystick pour déplacer le **Rocketship** et éviter les étoiles.

**1. Ajouter des sprites et arrière-plans**

Supprimez le sprite par défaut, puis utilisez le bouton **Choisir un sprite** pour ajouter les sprites **Rocketship** et **Star**. Notez que la taille du sprite **Rocket** est réglée à 50 %.

.. image:: img/16_sprite.png

Ajoutez maintenant l’arrière-plan **Stars** en utilisant **Choisir un arrière-plan**.

.. image:: img/16_sprite1.png

**2. Script pour Rocketship**

Le sprite **Rocketship** doit apparaître à une position aléatoire et être contrôlé par le joystick pour se déplacer vers le haut, le bas, la gauche et la droite.

Les étapes sont les suivantes.

* Lorsque le drapeau vert est cliqué, positionnez le sprite aléatoirement et créez deux variables **x** et **y**, pour stocker les valeurs lues sur A0 (VRX du joystick) et A1 (VRY du joystick). Faites tourner le script en basculant le joystick pour voir les plages de valeurs de x et y.

.. image:: img/16_roc2.png

* La valeur d'A0 est dans la plage de 0 à 1023 (le milieu est environ 512). Utilisez ``x-512>200`` pour détecter si le joystick bascule vers la droite. Si c'est le cas, ajoutez +30 à la coordonnée x du sprite pour le déplacer vers la droite.

.. image:: img/16_roc3.png

* Si le joystick bascule vers la gauche (``x-512<-200``), diminuez la coordonnée x du sprite de 30 pour le déplacer à gauche.

.. image:: img/16_roc4.png

* Comme la coordonnée y du joystick va de haut (0) à bas (1023), et celle du sprite va du bas vers le haut, le y-coordinate doit être inversé pour déplacer le sprite vers le haut lorsque le joystick est incliné vers le haut.

.. image:: img/16_roc5.png

* Si le joystick est basculé vers le bas, la coordonnée y du sprite augmente de +30.

.. image:: img/16_roc6.png

**3. Script pour Star**

Le sprite **Star** doit apparaître aléatoirement, et si elle touche le **Rocketship**, le script s’arrête et le jeu se termine.

* Lorsque le drapeau vert est cliqué, le sprite va à une position aléatoire et le bloc [tourner de x degrés] permet de déplacer **Star** avec un léger changement d'angle pour la faire bouger en courbe. Si elle atteint le bord, elle rebondit.

.. image:: img/16_star1.png

* Si le sprite touche **Rocketship** pendant son déplacement, arrêtez le script pour finir la partie.

.. image:: img/16_star2.png