.. note:: 

    Bonjour et bienvenue dans la communauté des passionnés de SunFounder Raspberry Pi, Arduino et ESP32 sur Facebook ! Plongez dans l’univers de Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez les problèmes après-vente et les défis techniques avec l'aide de notre communauté et de notre équipe.
    - **Apprenez et partagez** : Échangez des astuces et des tutoriels pour perfectionner vos compétences.
    - **Aperçus exclusifs** : Accédez en avant-première aux annonces de nouveaux produits.
    - **Réductions spéciales** : Profitez de remises exclusives sur nos nouveaux produits.
    - **Promotions et cadeaux festifs** : Participez à des concours et promotions spéciales.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _blow_ball:

2.12 Soufflez pour faire voler la balle
=========================================

Dans ce projet, nous allons utiliser un capteur de son pour faire monter la balle sur la scène. Soufflez dans le capteur de son ; plus le capteur détecte de vibrations, plus la balle montera haut. Lorsque la balle touche la ligne, un joli son se fait entendre, accompagné d'un effet d’étoiles scintillantes.

.. image:: img/18_ball.png

Vous Apprendrez
----------------------

- Fonctionnement du module sonore et gamme d'angle
- Remplir un sprite de couleurs
- Détection de contact entre sprites

Construire le Circuit
-----------------------

Un capteur sonore est un module qui détecte les ondes sonores en mesurant leur intensité et les convertissant en signaux électriques.

Ce module a deux sorties :

* **AO** : sortie analogique, signal de tension en temps réel du microphone.
* **DO** : sortie numérique qui passe à un niveau haut ou bas lorsque l'intensité du son atteint un seuil. La sensibilité du seuil peut être ajustée via le potentiomètre.

Ici, seul le pin AO est utilisé. Construisez maintenant le circuit selon le schéma ci-dessous.

.. image:: img/circuit/sound_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_sound` 

Programmation
------------------

L’effet recherché est que lorsque vous soufflez dans le capteur sonore, le sprite de la balle sur la scène monte progressivement ; en cessant de souffler, la balle tombe sur le sprite de bol. Si la balle touche le sprite de Ligne en montant ou en descendant, un son musical est émis, et des étoiles se dispersent tout autour.


**1. Sélectionnez les sprites et l’arrière-plan**

Supprimez le sprite par défaut, puis sélectionnez les sprites **Ball**, **Bowl** et **Star**.

.. image:: img/18_ball1.png

Déplacez le sprite **Bowl** au bas du centre de la scène et agrandissez-le.

.. image:: img/18_ball3.png

Pour monter, définissez la direction du sprite **Ball** à 0.

.. image:: img/18_ball4.png

Définissez la taille et la direction du sprite **Star** à 180 pour le faire tomber, ou choisissez un autre angle.

.. image:: img/18_ball12.png

Ajoutez maintenant l’arrière-plan **Stars**.

.. image:: img/18_ball2.png

**2. Dessinez un sprite de Ligne**

Ajoutez un sprite de Ligne.

.. image:: img/18_ball7.png

Allez dans la page **Costumes** du sprite **Line**, réduisez légèrement la largeur de la ligne rouge, puis copiez-la cinq fois et alignez les lignes.

.. image:: img/18_ball8.png

Remplissez les lignes avec des couleurs différentes en choisissant une couleur, puis en cliquant sur l’outil **Remplir** et en appliquant la couleur aux lignes.

.. image:: img/18_ball9.png

Répétez cette étape pour les autres lignes.

.. image:: img/18_ball10.png


**3. Script pour le sprite Ball**

Définissez la position initiale du sprite **Ball**. Ensuite, si la valeur du capteur de son est supérieure à 100 (ou une autre valeur adaptée à l’environnement), faites monter la balle.

.. image:: img/18_ball5.png

Sinon, le sprite **Ball** tombera, avec une limite de coordonnée Y minimum de -100 pour simuler une chute sur le sprite Bowl.

.. image:: img/18_ball6.png

Quand le sprite touche la **Ligne**, la coordonnée Y actuelle est enregistrée dans la variable **ball_coor** et un message **Bling** est diffusé.

.. image:: img/18_ball11.png

**4. Script pour le sprite Star**

Lorsque le script démarre, cachez d’abord le sprite **Star**. Quand le message **Bling** est reçu, clonez le sprite **Star**.

.. image:: img/18_ball13.png

Quand le clone du sprite **Star** apparaît, jouez un effet sonore et synchronisez ses coordonnées avec celles du sprite **Ball**.

.. image:: img/18_ball14.png

Créez l’effet d’apparition du sprite **Star** et ajustez-le selon vos besoins.

.. image:: img/18_ball15.png