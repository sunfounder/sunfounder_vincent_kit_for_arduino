.. note:: 

    Bonjour et bienvenue dans la communauté SunFounder Raspberry Pi & Arduino & ESP32 Enthusiasts sur Facebook ! Plongez dans l’univers de Raspberry Pi, Arduino et ESP32 avec d’autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez les problèmes post-achat et les défis techniques avec l'aide de notre communauté et de notre équipe.
    - **Apprenez et partagez** : Échangez des conseils et des tutoriels pour perfectionner vos compétences.
    - **Aperçus exclusifs** : Accédez en avant-première aux annonces de nouveaux produits.
    - **Réductions spéciales** : Profitez de remises exclusives sur nos derniers produits.
    - **Promotions et cadeaux festifs** : Participez à des concours et des promotions de fête.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _shooting:

2.13 JEU - Tir sur cible
====================================

Avez-vous déjà vu ces jeux de tir à la télévision ? Plus un participant tire près du centre de la cible, plus son score est élevé.

Aujourd'hui, nous allons réaliser un jeu de tir dans Scratch. Dans ce jeu, faites en sorte que le viseur tire le plus près possible du centre de la cible pour obtenir un score élevé.

Cliquez sur le drapeau vert pour commencer. Utilisez le module d'évitement d’obstacles pour tirer une balle.

.. image:: img/14_shooting.png

Vous Apprendrez
---------------------

- Fonctionnement du module d’évitement d’obstacles et gamme d'angles
- Dessiner différents sprites
- Détecter les couleurs

Construire le Circuit
-------------------------

Le module d'évitement d'obstacles est un capteur infrarouge de proximité à distance réglable, dont la sortie est normalement haute et passe à bas lorsqu'un obstacle est détecté.

Montez maintenant le circuit selon le schéma ci-dessous.

.. image:: img/circuit/avoid_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_avoid` 

Programmation
------------------

**1. Dessiner le sprite de Viseur**

Supprimez le sprite par défaut, sélectionnez le bouton **Sprite** et cliquez sur **Peindre**, un sprite vide **Sprite1** apparaîtra et nommez-le **Viseur**.

.. image:: img/14_shooting0.png

Allez sur la page **Costumes** du sprite **Viseur**. Cliquez sur l'outil **Cercle**, supprimez la couleur de remplissage et définissez la couleur et la largeur du contour.

.. image:: img/14_shooting02.png

Dessinez maintenant un cercle avec l'outil **Cercle**. Après l’avoir dessiné, vous pouvez cliquer sur l'outil **Sélectionner** pour déplacer le cercle afin que son centre soit aligné avec celui de la zone de dessin.

.. image:: img/14_shooting03.png

Utilisez l'outil **Ligne** pour dessiner une croix à l'intérieur du cercle.

.. image:: img/14_shooting033.png

**Dessiner le sprite de Cible**

Créez un nouveau sprite appelé **Cible**.

.. image:: img/14_shooting01.png

Allez à la page **Costumes** du sprite **Cible**, cliquez sur l'outil **Cercle**, sélectionnez une couleur de remplissage et supprimez le contour, puis dessinez un grand cercle.

.. image:: img/14_shooting05.png

Utilisez la même méthode pour dessiner d'autres cercles, chacun d'une couleur différente. Utilisez les outils **Avancer** ou **Reculer** pour ajuster la position des cercles superposés. Assurez-vous que l'origine de tous les cercles est alignée avec le centre de la zone de dessin.

.. image:: img/14_shooting04.png

**3. Ajouter un arrière-plan**

Ajoutez un arrière-plan simple de préférence sans trop de couleurs et qui ne correspond pas aux couleurs du sprite **Cible**. Ici, nous avons choisi l'arrière-plan **Mur1**.

.. image:: img/14_shooting06.png

**4. Script du sprite Viseur**

Définissez la position aléatoire et la taille du sprite **Viseur** et faites-le se déplacer de manière aléatoire.

.. image:: img/14_shooting4.png

Lorsqu'une main est placée devant le module d'évitement d'obstacles, celui-ci émettra un signal bas.

.. image:: img/14_shooting5.png

Lorsqu’il reçoit le message **tir**, le sprite arrête de bouger et rétrécit lentement, simulant ainsi l’effet d'une balle tirée.

.. image:: img/14_shooting6.png

Utilisez le bloc [Toucher couleur ()] pour déterminer l'emplacement du tir.

.. image:: img/14_shooting7.png

Si le tir se situe dans le cercle jaune, un score de 10 points est attribué.

.. image:: img/14_shooting8.png

Utilisez la même méthode pour déterminer la position de la balle si elle n'est pas dans le sprite **Cible**, ce qui signifie qu'elle est hors du cercle.

.. image:: img/14_shooting9.png