.. note:: 

    Bonjour et bienvenue dans la communauté SunFounder Raspberry Pi & Arduino & ESP32 Enthusiasts sur Facebook ! Plongez dans l’univers de Raspberry Pi, Arduino et ESP32 avec d’autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez les problèmes post-achat et les défis techniques avec l'aide de notre communauté et de notre équipe.
    - **Apprenez et partagez** : Échangez des conseils et des tutoriels pour perfectionner vos compétences.
    - **Aperçus exclusifs** : Accédez en avant-première aux annonces de nouveaux produits.
    - **Réductions spéciales** : Profitez de remises exclusives sur nos derniers produits.
    - **Promotions et cadeaux festifs** : Participez à des concours et des promotions festives.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _parrot:

2.17 JEU - Flappy Perroquet
==============================

Dans ce projet, nous utilisons le module ultrason pour jouer à un jeu de flappy perroquet.

Après avoir lancé le script, le bambou vert se déplace lentement de la droite vers la gauche, à une hauteur aléatoire. 
Placez votre main au-dessus du module ultrason : si la distance entre votre main et le capteur est inférieure à 10 cm, le perroquet montera ; sinon, il descendra. Vous devez ajuster la distance pour éviter les bambous verts (Paddle) avec le perroquet, sinon le jeu se termine.

.. image:: img/15_parrot.png

Construire le Circuit
-------------------------

Un module à capteur ultrason est un instrument qui mesure la distance à un 
objet en utilisant des ondes ultrasonores. Il possède deux sondes : une émet des ondes ultrasonores et l'autre les reçoit, en transformant le temps d'émission et de réception en distance pour détecter un obstacle.

Montez maintenant le circuit en suivant le schéma ci-dessous.

.. image:: img/circuit/ultrasonic_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_ultrasonic`

Programmation
------------------

Nous souhaitons contrôler la hauteur de vol du sprite **Parrot** avec le module ultrason, tout en évitant le sprite **Paddle**.


**1. Ajouter un sprite**

Supprimez le sprite par défaut, puis utilisez le bouton **Choisir un sprite** pour ajouter le sprite **Parrot**. Réglez sa taille à 50 % et placez-le au centre gauche de la scène.

.. image:: img/15_sprite.png

Ajoutez le sprite **Paddle**, réglez sa taille à 150 %, son angle à 180, et placez-le en haut à droite de la scène.

.. image:: img/15_sprite1.png

Dans la page **Costumes** du sprite **Paddle**, supprimez le contour.

.. image:: img/15_sprite2.png

**2. Script pour le sprite Parrot**

Maintenant, programmez le sprite **Parrot** pour qu’il vole, avec une altitude déterminée par la distance mesurée par le module ultrason.

* Lorsque le drapeau vert est cliqué, faites basculer le costume toutes les 0,2 secondes pour le maintenir en vol.

.. image:: img/15_parr1.png

* Lisez la valeur du module ultrason et stockez-la dans la variable **distance** en l'arrondissant avec le bloc [round].

.. image:: img/15_parr2.png

* Si la distance de détection ultrasonore est inférieure à 10 cm, faites monter le sprite **Parrot** en augmentant son y de 50. Sinon, réduisez le y de 40 pour le faire descendre.

.. image:: img/15_parr3.png

* Si le sprite **Parrot** touche le sprite **Paddle**, le jeu se termine et le script s'arrête.

.. image:: img/15_parr4.png


**3. Script pour le sprite Paddle**

Maintenant, écrivez le script pour le sprite **Paddle**, qui doit apparaître aléatoirement sur la scène.

* Cachez le sprite **Paddle** au démarrage, et créez un clone. Le bloc [`create clone of <https://en.scratch-wiki.info/wiki/Create_Clone_of_()_(block)>`_] est un bloc de contrôle permettant de créer un clone du sprite. 

.. image:: img/15_padd.png

* Lorsqu'un clone de **Paddle** est créé, définissez sa position x à 220 (côté droit) et son y aléatoirement entre -125 et 125.

.. image:: img/15_padd1.png

* Utilisez le bloc [repeat] pour diminuer lentement la valeur x afin que le clone du sprite **Paddle** se déplace lentement de la droite vers la gauche jusqu'à disparaître.

.. image:: img/15_padd2.png

* Reproduisez un nouveau clone de **Paddle** et supprimez l'ancien clone.

.. image:: img/15_padd3.png