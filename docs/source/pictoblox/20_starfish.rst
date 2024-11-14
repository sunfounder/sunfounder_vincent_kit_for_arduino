.. note:: 

    Bonjour et bienvenue dans la communauté des passionnés de SunFounder Raspberry Pi, Arduino et ESP32 sur Facebook ! Plongez dans l’univers de Raspberry Pi, Arduino et ESP32 avec d’autres enthousiastes.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez les problèmes après-vente et les défis techniques avec l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez des conseils et des tutoriels pour développer vos compétences.
    - **Aperçus exclusifs** : Accédez en avant-première aux annonces de nouveaux produits.
    - **Réductions spéciales** : Profitez de remises exclusives sur nos derniers produits.
    - **Promotions et cadeaux festifs** : Participez à des concours et promotions spéciales.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _starfish:

2.20 Attraper des étoiles de mer
=====================================

Dans ce jeu, nous allons attraper des étoiles de mer. Au démarrage du script, une étoile de mer nage paisiblement sur la scène, et un plongeur nage également de gauche à droite. Vous devez contrôler la profondeur du capteur de niveau d'eau dans l'eau pour permettre au plongeur sur scène d'attraper l'étoile de mer, et chaque étoile de mer attrapée augmente le compteur de 1.

.. image:: img/21_starfish.png


Construire le Circuit
---------------------------

Le module capteur de niveau d'eau est un capteur facile à utiliser, compact et économique pour détecter le niveau d'eau/gouttes. Il mesure le niveau d'eau grâce à une série de traces parallèles exposées pour déterminer la taille de la goutte/volume d'eau.

Plus le capteur est immergé dans l'eau, plus la valeur de sortie de la broche **S** est élevée.


Montez le circuit en suivant le schéma ci-dessous.

.. image:: img/circuit/water_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_water` 

Programmation
------------------

**1. Sélection des sprites et de l'arrière-plan**

Supprimez le sprite par défaut, puis sélectionnez les sprites **Diver1** et **Starfish**.

.. image:: img/21_starfish1.png

Allez à la page **Costumes de Diver1** et utilisez l'outil **Remplir** pour colorier les bras avec des couleurs uniques qui ne sont pas présentes ailleurs sur la scène.

.. Note:: 

    Vous devrez remplir les bras de Diver1 avec une couleur unique qui n'apparaît nulle part ailleurs sur la scène.

.. image:: img/21_starfish3.png

Réduisez la taille du sprite **Starfish** et modifiez sa couleur à votre convenance.

.. image:: img/21_starfish4.png

Sélectionnez l’arrière-plan **Underwater1**.

.. image:: img/21_starfish2.png

**2. Script pour le sprite Diver1**

Définissez la position initiale du sprite **Diver1** et faites-le nager d'un côté à l'autre de la scène.

.. image:: img/21_starfish5.png

Plus vous immergez le capteur de niveau d'eau, plus la valeur obtenue est élevée, indiquant la profondeur (coordonnée y) à laquelle nage le sprite **Diver1**.

* Lisez la valeur de A0 (capteur de niveau d'eau) et mappez sa plage de valeurs aux coordonnées y de la scène pour obtenir une nouvelle coordonnée y.
* Si **new_y** est supérieure à la coordonnée y actuelle, faites monter le sprite jusqu'à la position **new_y**.
* Si **new_y** est inférieure à la coordonnée y actuelle, faites-le descendre à la position **new_y**.

.. image:: img/21_starfish6.png
    :width: 800

**3. Script pour le sprite Starfish**

Lorsque le script démarre, cachez d'abord le sprite **Starfish** puis créez un clone de celui-ci.

.. image:: img/21_starfish7.png

Lorsqu'il apparaît en tant que clone, définissez son mouvement.

.. image:: img/21_starfish8.png

Lorsqu'il touche le rouge (couleur des bras de **Diver1**), indiquant qu'il a été attrapé, appliquez les effets suivants :

* Ajoutez 1 à la variable **count**.
* Affichez une animation de score (rétrécissement de 20 %, déplacement rapide vers le tableau de score et disparition).
* En même temps, une nouvelle étoile de mer est clonée et le jeu continue.

.. Note:: 
    Vous devrez cliquer sur la zone de couleur dans le bloc [Toucher couleur], puis utiliser l'outil pipette pour sélectionner la couleur rouge du sprite **Diver1** sur la scène. Si vous choisissez une couleur au hasard, le bloc [Toucher couleur] ne fonctionnera pas.

.. image:: img/21_starfish10.png

Lorsque le clone de Starfish atteint le bord droit de la scène, supprimez-le et créez un nouveau clone.

.. image:: img/21_starfish11.png