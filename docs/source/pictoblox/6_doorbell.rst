.. note:: 

    Bonjour, bienvenue dans la communauté des passionnés de SunFounder Raspberry Pi, Arduino et ESP32 sur Facebook ! Explorez plus en profondeur le Raspberry Pi, l’Arduino et l’ESP32 avec d’autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Assistance d'experts** : Résolvez vos problèmes après-vente et techniques grâce à l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez des astuces et tutoriels pour perfectionner vos compétences.
    - **Aperçus exclusifs** : Accédez en avant-première aux annonces de nouveaux produits.
    - **Réductions spéciales** : Profitez de remises exclusives sur nos derniers produits.
    - **Promotions festives et cadeaux** : Participez à des concours et promotions festives.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] pour nous rejoindre dès aujourd'hui !

.. _doorbell:

2.6 Sonnette
======================

Ici, nous allons utiliser un bouton et une cloche sur la scène pour créer une sonnette.

Lorsque le drapeau vert est cliqué, vous pouvez appuyer sur le bouton, et la cloche sur la scène émettra un son.

.. image:: img/7_doorbell.png

Ce Que Vous Apprendrez
------------------------

- Fonctionnement du bouton
- Lecture d'une broche numérique et plages de valeurs
- Création d'une boucle conditionnelle
- Ajout d'un arrière-plan
- Jouer un son

Construire le Circuit
----------------------

Le bouton est un dispositif à 4 broches. Étant donné que la broche 1 est reliée à la broche 2, et la broche 3 à la broche 4, lorsque le bouton est enfoncé, les 4 broches sont connectées, fermant ainsi le circuit.

.. image:: img/5_buttonc.png

Construisez le circuit selon le schéma ci-dessous.

* Connectez une des broches du côté gauche du bouton à la broche 12, reliée à une résistance de tirage vers le bas et un condensateur de 0,1uF (104) (pour éliminer le scintillement et produire un niveau stable lorsque le bouton fonctionne).
* Connectez l'autre extrémité de la résistance et du condensateur à GND, et une des broches du côté droit du bouton à 5V.

.. image:: img/circuit/button_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_button`
* :ref:`cpn_resistor`
* :ref:`cpn_capacitor`

Programmation
------------------

**1. Ajouter un arrière-plan**

Cliquez sur le bouton **Choisir un Arrière-plan** dans le coin inférieur droit.

.. image:: img/7_backdrop.png

Choisissez **Chambre 1**.

.. image:: img/7_bedroom2.png

**2. Sélectionner le lutin**

Supprimez le lutin par défaut, cliquez sur le bouton **Choisir un Lutin** dans le coin inférieur droit de la zone des lutins, tapez **cloche** dans la barre de recherche, puis cliquez pour l'ajouter.

.. image:: img/7_sprite.png

Ensuite, sélectionnez le lutin **cloche** sur la scène et déplacez-le à la position souhaitée.

.. image:: img/7_doorbell.png

**3. Appuyer sur le bouton pour que la cloche émette un son**

Utilisez [si alors] pour créer une condition : lorsque la valeur lue de la broche 12 est égale à 1 (bouton pressé), le son **xylo1** sera joué.

* [lire état de la broche numérique] : Ce bloc se trouve dans la palette **Arduino Mega** et permet de lire la valeur d'une broche numérique, le résultat est 0 ou 1.
* [`if then <https://en.scratch-wiki.info/wiki/If_()_Then_(block)>`_]: Ce bloc est un bloc de contrôle dans la palette **Contrôle**. Si sa condition booléenne est vraie, les blocs contenus à l'intérieur s'exécutent, puis le script impliqué se poursuit. Si la condition est fausse, les scripts à l'intérieur du bloc sont ignorés.
* [jouer le son jusqu'à la fin] : dans la palette Son, utilisé pour jouer des sons spécifiques.

.. image:: img/7_bell.png