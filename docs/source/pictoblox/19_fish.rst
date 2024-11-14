.. note:: 

    Bonjour et bienvenue dans la communauté SunFounder Raspberry Pi & Arduino & ESP32 Enthusiasts sur Facebook ! Plongez dans l’univers de Raspberry Pi, Arduino et ESP32 avec d’autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez les problèmes après-vente et les défis techniques avec l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez des conseils et des tutoriels pour améliorer vos compétences.
    - **Aperçus exclusifs** : Accédez en avant-première aux annonces de nouveaux produits.
    - **Réductions spéciales** : Profitez de remises exclusives sur nos derniers produits.
    - **Promotions et cadeaux festifs** : Participez à des concours et des promotions spéciales.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _fishing:

2.19 JEU - Pêche
===========================

Ici, nous jouons à un jeu de pêche en utilisant un bouton.

Lorsque le script est lancé, les poissons nagent de gauche à droite sur la scène. Vous devez appuyer sur le bouton quand le poisson est proche de l'hameçon (il est conseillé d'appuyer longuement) pour attraper le poisson, et le nombre de poissons attrapés sera automatiquement enregistré.

.. image:: img/18_fish.png

Construire le Circuit
-----------------------

Le bouton est un composant à 4 broches ; lorsque le bouton est pressé, les 4 broches sont connectées, fermant ainsi le circuit.

.. image:: img/5_buttonc.png

Montez le circuit en suivant le schéma ci-dessous :

* Connectez une broche gauche du bouton à la broche 12, qui est reliée à une résistance de pull-down et un condensateur de 0.1uF (104) pour éliminer les interférences et stabiliser le signal.
* Connectez l'autre extrémité de la résistance et du condensateur à la masse (GND), et une broche droite du bouton à 5V.

.. image:: img/circuit/button_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_button`
* :ref:`cpn_resistor`
* :ref:`cpn_capacitor`

Programmation
------------------

Nous devons d'abord sélectionner un arrière-plan **Underwater**, puis ajouter un sprite **Fish** pour qu'il nage de part et d’autre sur la scène. Ensuite, dessinez un sprite **Fishhook** que vous contrôlerez avec un bouton pour attraper les poissons. Quand le sprite **Fish** touche l'hameçon en état de capture (rouge), il est pêché.

**1. Ajout de l’arrière-plan**

Utilisez le bouton **Choisir un arrière-plan** pour ajouter l'arrière-plan **Underwater**.

.. image:: img/18_under.png

**2. Sprite Fishhook**

Le sprite **Fishhook** doit normalement rester sous l’eau en jaune ; lorsque le bouton est pressé, il passe en état de pêche (rouge) et monte sur la scène.

Nous pouvons modifier le sprite **Glow-J** pour qu’il ressemble à un hameçon.

* Ajoutez le sprite **Glow-J** via **Choisir un Sprite**.

.. image:: img/18_hook.png

* Allez dans la page **Costumes** du sprite **Glow-J**, sélectionnez et supprimez le cyan. Changez le J en rouge et réduisez sa largeur. Assurez-vous que le haut du J soit aligné avec le centre.

.. image:: img/18_hook1.png

* Utilisez l’outil **Ligne** pour dessiner une ligne partant du centre vers le haut (hors de la scène). Renommez ce sprite **Fishhook** et placez-le correctement.

.. image:: img/18_hook2.png

* Lorsque le drapeau vert est cliqué, réglez l'effet couleur du sprite à 30 (jaune), et définissez sa position initiale.

.. image:: img/18_hook3.png

* Si le bouton est pressé, réglez l'effet couleur à 0 (rouge, état de pêche), attendez 0.1 seconde et faites monter le **Fishhook** en haut de la scène. Relâchez le bouton pour ramener **Fishhook** à sa position initiale.

.. image:: img/18_hook4.png

**3. Sprite Fish**

Le sprite **Fish** doit nager de gauche à droite sur la scène. Lorsqu'il rencontre **Fishhook** en état de pêche, il rétrécit, se déplace à une position spécifique et disparaît. Un nouveau clone de **Fish** est alors créé.

* Ajoutez le sprite **Fish** et ajustez sa taille et sa position.

.. image:: img/18_fish1.png

* Créez une variable **score** pour enregistrer le nombre de poissons attrapés. Masquez ce sprite et clonez-le.

.. image:: img/18_fish2.png

* Affichez le clone du sprite **Fish**, changez son costume et définissez sa position initiale.

.. image:: img/18_fish3.png

* Faites en sorte que le clone de **Fish** se déplace de gauche à droite et rebondisse en touchant le bord.

.. image:: img/18_fish4.png

* Le clone de **Fish** ne réagit pas lorsqu'il passe **Fishhook** ; quand il touche **Fishhook** en état de pêche (rouge), il est capturé, le score augmente de 1 et une animation de score apparaît (rétrécissement de 40%, déplacement rapide vers le tableau de score, puis disparition). Un nouveau poisson est alors cloné, et le jeu continue.

.. note:: 
    
    Cliquez sur la zone de couleur dans le bloc [Toucher couleur], puis utilisez la pipette pour capturer la couleur rouge de **Fishhook** sur la scène. Si une couleur est choisie arbitrairement, le bloc [Toucher couleur] ne fonctionnera pas.

.. image:: img/18_fish5.png
