.. note:: 

    Bonjour et bienvenue dans la communauté SunFounder Raspberry Pi & Arduino & ESP32 Enthusiasts sur Facebook ! Plongez dans l’univers de Raspberry Pi, Arduino et ESP32 avec d’autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez les problèmes post-achat et les défis techniques avec l'aide de notre communauté et de notre équipe.
    - **Apprenez et partagez** : Échangez des conseils et des tutoriels pour perfectionner vos compétences.
    - **Aperçus exclusifs** : Accédez en avant-première aux annonces de nouveaux produits.
    - **Réductions spéciales** : Profitez de remises exclusives sur nos derniers produits.
    - **Promotions et cadeaux festifs** : Participez à des concours et des promotions festives.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _breakout_clone:

2.18 JEU - Clone de Breakout
===============================

Ici, nous allons jouer à un clone de Breakout en utilisant un potentiomètre.

Après avoir cliqué sur le drapeau vert, utilisez le potentiomètre pour contrôler la raquette et rattraper la balle pour la faire rebondir et toucher les briques. Si toutes les briques disparaissent, vous avez gagné ; si vous ratez la balle, la partie est perdue.

.. image:: img/17_brick.png


Construire le Circuit
------------------------

Le potentiomètre est un composant résistif à trois bornes : les deux extrémités sont reliées à 5V et à GND, et la borne centrale est reliée à A0. Après conversion par le convertisseur ADC de la carte Arduino, la plage de valeurs est de 0 à 1023.

.. image:: img/circuit/potentiometer_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_potentiometer`

Programmation
------------------

Trois sprites apparaissent sur la scène.

**1. Sprite Paddle**

L’effet attendu pour **Paddle** est qu’il commence en bas, au centre de la scène, et qu’il soit contrôlé par un potentiomètre pour se déplacer à gauche et à droite.

* Supprimez le sprite par défaut, ajoutez le sprite **Paddle** et définissez ses coordonnées x et y sur (0, -140).

.. image:: img/17_padd1.png

* Dans la page **Costumes**, supprimez le contour et changez sa couleur en gris foncé.

.. image:: img/17_padd3.png

* Programme pour **Paddle** : définissez sa position initiale à (0, -140) lorsque le drapeau vert est cliqué, puis lisez la valeur de A0 (potentiomètre) dans la variable **a0**. Le **Paddle** se déplace entre -195 et 195 sur l’axe x ; utilisez le bloc [map] pour faire correspondre l’intervalle 0~1023 de **a0** à -195~195.

.. image:: img/17_padd2.png

* Testez en tournant le potentiomètre pour voir si **Paddle** se déplace à gauche et à droite.

**2. Sprite Ball**

Le sprite **Ball** doit se déplacer et rebondir lorsqu’il touche les bords ; rebondir vers le haut s’il touche **Paddle** en descendant ; sinon, la partie se termine.

* Ajoutez le sprite **Ball**.

.. image:: img/17_ball1.png

* Lorsque le drapeau vert est cliqué, réglez l’angle de **Ball** à 45° et la position initiale à (0, -120).

.. image:: img/17_ball2.png

* Faites bouger **Ball** et rebondir lorsqu’il touche les bords ; vérifiez en cliquant sur le drapeau vert.

.. image:: img/17_ball3.png

* Lorsque **Ball** touche **Paddle**, effectuez une réflexion. Utilisez le centre des deux sprites pour calculer la direction de rebond, ce qui rendra le jeu plus dynamique.

.. image:: img/17_ball4.png

.. image:: img/17_ball6.png

* Si **Ball** tombe hors de la scène, la partie se termine.

.. image:: img/17_ball5.png


**3. Sprite Block1**

Le sprite **Block1** se clone en une grille de 4x8 blocs colorés en haut de la scène. Un clone disparaît s’il est touché par **Ball**.

**Block1** n’est pas dans la bibliothèque **PictoBlox** ; dessinez-le vous-même ou modifiez un sprite existant, ici le sprite **Button3**.

* Ajoutez **Button3**, puis dans la page **Costumes**, supprimez **button-a**, réduisez la taille de **button-b** et renommez-le en **Block1**.

.. note::

    * Ajustez la largeur pour que **Block1** forme 8 blocs par ligne.
    * Gardez le point central au centre.

.. image:: img/17_bri2.png

* Créez deux variables, **block** pour le nombre de blocs et **roll** pour le nombre de rangées.

.. image:: img/17_bri3.png

* Clonez **Block1** pour afficher 4x8 blocs en ligne et colonne, avec des couleurs aléatoires.

.. image:: img/17_bri4.png

* Testez l'affichage avec le drapeau vert, et ajustez si besoin.

.. image:: img/17_bri5.png

* Déclencheur : si un clone de **Block1** est touché par **Ball**, supprimez-le et envoyez le message **crush**.

.. image:: img/17_bri6.png

* Retournez au sprite **Ball** : lorsqu’il reçoit **crush** (contact avec **Block1**), **Ball** rebondit dans la direction opposée.

.. image:: img/17_ball7.png
