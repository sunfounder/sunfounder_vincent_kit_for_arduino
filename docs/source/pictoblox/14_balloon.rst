.. note:: 

    Bonjour et bienvenue dans la communauté SunFounder Raspberry Pi & Arduino & ESP32 Enthusiasts sur Facebook ! Plongez dans l’univers de Raspberry Pi, Arduino et ESP32 avec d’autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez les problèmes post-achat et les défis techniques avec l'aide de notre communauté et de notre équipe.
    - **Apprenez et partagez** : Échangez des conseils et des tutoriels pour perfectionner vos compétences.
    - **Aperçus exclusifs** : Accédez en avant-première aux annonces de nouveaux produits.
    - **Réductions spéciales** : Profitez de remises exclusives sur nos derniers produits.
    - **Promotions et cadeaux festifs** : Participez à des concours et des promotions festives.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _balloon:

2.14 JEU - Gonfler le Ballon
=========================================

Dans ce projet, nous allons jouer à un jeu de gonflage de ballon.

Après avoir cliqué sur le drapeau vert, le ballon deviendra de plus en plus gros. Si le ballon devient trop gros, il explosera ; s'il est trop petit, il tombera. Vous devez utiliser le module tactile au bon moment pour le faire monter.

.. image:: img/13_balloon0.png

Vous Apprendrez
---------------------

- Fonctionnement du module tactile et gamme d'angles
- Peindre un costume pour le sprite


Construire le Circuit
-----------------------

Ce module est un module d'interrupteur tactile capacitif basé sur un capteur tactile IC (TTP223B). En état normal, le module émet un signal bas avec une faible consommation d'énergie ; lorsqu'un doigt touche la zone correspondante, le module émet un signal haut et revient à bas une fois le doigt retiré.

Montez maintenant le circuit selon le schéma ci-dessous.

.. image:: img/circuit/touch_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_touch` 

Programmation
------------------

**1. Ajouter un sprite et un arrière-plan**

Supprimez le sprite par défaut, cliquez sur le bouton **Choisir un sprite** en bas à droite de la zone des sprites, puis sélectionnez le sprite **Balloon1**.

.. image:: img/13_balloon1.png

Ajoutez un arrière-plan **Boardwalk** via le bouton **Choisir un arrière-plan**, ou un autre arrière-plan de votre choix.

.. image:: img/13_balloon2.png

**2. Peindre un costume pour le sprite Balloon1**

Créons maintenant un effet d'explosion pour le sprite ballon.

Allez sur la page **Costumes** du sprite **Balloon1**, cliquez sur le bouton **Choisir un costume** en bas à gauche et sélectionnez **Peindre** pour créer un costume vierge.

.. image:: img/13_balloon7.png

Choisissez une couleur, puis utilisez l'outil **Pinceau** pour dessiner un motif.

.. image:: img/13_balloon3.png

Sélectionnez une nouvelle couleur, cliquez sur l'outil Remplissage et cliquez à l'intérieur du motif pour le colorier.

.. image:: img/13_balloon4.png

Enfin, écrivez le texte BOOM pour compléter l'effet d'explosion.

.. image:: img/13_balloon5.png

**3. Script pour le sprite Balloon**

Définissez la position et la taille initiales du sprite **Balloon1**.

.. image:: img/13_balloon6.png

Ensuite, faites en sorte que le sprite **Balloon** grandisse lentement.

.. image:: img/13_balloon8.png

Lorsque le module tactile est activé (valeur égale à 1), la taille du sprite **Balloon1** cesse de croître.

* Si la taille est inférieure à 90, le ballon tombera (coordonnée Y décroissante).
* Si la taille est supérieure à 90 mais inférieure à 120, le ballon montera dans le ciel (coordonnée Y croissante).

.. image:: img/13_balloon9.png

Si le module tactile n'est pas activé, le ballon continuera de grossir et lorsqu'il dépasse 120, il explosera (changement vers le costume d'effet d'explosion).

.. image:: img/13_balloon10.png
