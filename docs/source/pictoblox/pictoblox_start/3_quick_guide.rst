.. note:: 

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 de SunFounder sur Facebook ! Plongez au cœur de Raspberry Pi, Arduino et ESP32 avec d’autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d’experts** : Résolvez vos problèmes après-vente et défis techniques avec l’aide de notre communauté et de notre équipe.
    - **Apprendre & Partager** : Échangez des conseils et des tutoriels pour améliorer vos compétences.
    - **Aperçus exclusifs** : Profitez d’un accès anticipé aux nouvelles annonces de produits.
    - **Réductions spéciales** : Bénéficiez de réductions exclusives sur nos derniers produits.
    - **Promotions festives et cadeaux** : Participez aux concours et promotions spéciales des fêtes.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd’hui !

1.3 Guide rapide de PictoBlox
====================================

Voyons maintenant comment utiliser PictoBlox dans les deux modes.

De plus, il y a une LED intégrée reliée à la broche 13 sur les cartes Arduino Uno/Mega2560 ; nous allons apprendre à faire clignoter cette LED dans 2 modes différents.

.. image:: img/1_led.jpg
    :width: 500
    :align: center


Mode Scène
---------------

**1. Connexion à la carte Arduino**

Connectez votre carte Arduino à l’ordinateur avec un câble USB. L’ordinateur reconnaît normalement la carte automatiquement et lui attribue un port COM.

Ouvrez PictoBlox. L’interface de programmation en Python s’ouvrira par défaut. Nous devons passer à l’interface de blocs.

.. image:: img/0_choose_blocks.png

En haut à droite, vous verrez l’option de basculement de mode. Le mode par défaut est le mode Scène, où Tobi se tient sur la scène.

.. image:: img/1_stage_upload.png

Cliquez sur **Board** dans la barre de navigation en haut à droite pour sélectionner la carte.

.. image:: img/1_board.png

Par exemple, choisissez **Arduino Mega**.

.. image:: img/1_choose_mega.png

Une fenêtre de connexion s’affichera pour que vous puissiez sélectionner le port de connexion, puis revenir à la page d’accueil une fois la connexion terminée. Si vous perdez la connexion, vous pouvez également cliquer sur **Connect** pour la rétablir.

.. image:: img/1_connect.png

En même temps, des palettes associées à l’Arduino Mega, comme Arduino Mega et Actuators, apparaîtront dans la **Palette de blocs**.

.. image:: img/1_arduino_mega.png

**2. Téléchargement du Firmware**

Puisque nous allons travailler en mode Scène, nous devons télécharger le firmware sur la carte pour assurer la communication en temps réel entre la carte et l’ordinateur. Le téléchargement du firmware est un processus unique. Cliquez sur le bouton **Upload Firmware**.

Après un certain temps, le message de succès de téléchargement apparaîtra.

.. note::

    Si vous utilisez cette carte Arduino dans PictoBlox pour la première fois, ou si elle a été précédemment programmée avec l'IDE Arduino, appuyez sur **Upload Firmware** pour pouvoir l'utiliser.

.. image:: img/1_firmware.png


**3. Programmation**

* Ouvrez et exécutez le script directement

Bien sûr, vous pouvez ouvrir les scripts directement pour les exécuter, mais veuillez d’abord les télécharger depuis `github <https://github.com/sunfounder/sunfounder_vincent_kit_for_arduino/archive/refs/heads/master.zip>`_.

Cliquez sur **File** en haut à droite, puis choisissez **Open**.

.. image:: img/0_open.png

Choisissez **Open from Computer**.

.. image:: img/0_dic.png

Ensuite, accédez au chemin ``sunfounder_vincent_kit_for_arduino\scratch\code`` et ouvrez **1. Stage Mode.sb3**. Assurez-vous d’avoir téléchargé le code requis depuis `github <https://github.com/sunfounder/sunfounder_vincent_kit_for_arduino/archive/refs/heads/master.zip>`_.

.. image:: img/0_stage.png

Cliquez directement sur le script pour l'exécuter ; certains projets nécessitent de cliquer sur le drapeau vert ou sur le lutin.

.. image:: img/1_more.png

* Programmez étape par étape

Vous pouvez également écrire le script étape par étape en suivant ces étapes.

Cliquez sur la palette **Arduino Mega**.

.. image:: img/1_arduino_mega.png

La LED de la carte Arduino est contrôlée par la broche numérique 13 (états HIGH ou LOW), alors faites glisser le bloc [set digital pin out as] vers la zone de script.

Puisque l’état par défaut de la LED est allumé, réglez maintenant la broche 13 sur LOW et cliquez sur ce bloc ; vous verrez la LED s’éteindre.

* [set digital pin out as] : Configure les broches numériques (2~13) en niveau (HIGH/LOW).

.. image:: img/1_digital.png

Pour voir l’effet du clignotement continu de la LED, vous devez utiliser les blocs [Wait 1 seconds] et [forever] dans la palette **Control**. Cliquez sur ces blocs après les avoir ajoutés ; une auréole jaune signifie que le script est en cours d'exécution.

* [Wait 1 seconds] : de la palette **Control**, pour régler l'intervalle de temps entre deux blocs.
* [forever] : de la palette **Control**, permet au script de continuer à s'exécuter tant qu’il n’est pas mis en pause.

.. image:: img/1_more.png

Mode Téléchargement
------------------------

**1. Connexion à la carte Arduino**

Connectez votre carte Arduino à l'ordinateur avec un câble USB. L'ordinateur reconnaît normalement la carte et lui attribue un port COM.

Ouvrez PictoBlox et cliquez sur **Board** dans la barre de navigation en haut à droite pour sélectionner la carte.

.. image:: img/1_board.png

Par exemple, choisissez **Arduino Mega**.

.. image:: img/1_choose_mega.png

Une fenêtre de connexion s'affichera pour que vous puissiez sélectionner le port, puis revenez à la page d'accueil une fois la connexion terminée. Si la connexion se perd, cliquez sur **Connect** pour la rétablir.

.. image:: img/1_connect.png

En même temps, des palettes associées à l'Arduino Mega, comme Arduino Mega et Actuators, apparaîtront dans la **Palette de blocs**.

.. image:: img/1_upload_mega.png

Après avoir sélectionné le mode Téléchargement, la scène se déplacera vers la zone de code Arduino d'origine.

.. image:: img/1_upload.png

**2. Programmation**

* Ouvrez et exécutez le script directement

Cliquez sur **File** en haut à droite.

.. image:: img/0_open.png

Choisissez **Open from Computer**.

.. image:: img/0_dic.png

Ensuite, accédez au chemin ``sunfounder_vincent_kit_for_arduino\scratch\code`` et ouvrez **1. Upload Mode.sb3**. Assurez-vous d'avoir téléchargé le code requis depuis `github <https://github.com/sunfounder/sunfounder_vincent_kit_for_arduino/archive/refs/heads/master.zip>`_.

.. image:: img/0_upload.png

Enfin, cliquez sur le bouton **Upload Code**.

.. image:: img/1_upload_code.png


* Programmez étape par étape

Vous pouvez également écrire le script étape par étape en suivant ces étapes.

Cliquez sur la palette **Arduino Mega**.

.. image:: img/1_upload_mega.png

Faites glisser [when Arduino Mega starts up] vers la zone de script ; ce bloc est requis pour chaque script.

.. image:: img/1_mega_starts.png

La LED de la carte Arduino est contrôlée par la broche numérique 13 (états HIGH ou LOW), alors faites glisser le bloc [set digital pin out as] vers la zone de script.

Puisque l'état par défaut de la LED est allumé, réglez maintenant la broche 13 sur LOW et cliquez sur ce bloc ; vous verrez la LED s’éteindre.

* [set digital pin out as] : Configure la broche numérique (2~13) en niveau (HIGH/LOW).

.. image:: img/1_upload_digital.png

À ce stade, vous verrez le code Arduino apparaître à droite ; si vous souhaitez modifier ce code, activez le mode Édition.

.. image:: img/1_upload1.png

Pour voir l'effet du clignotement continu de la LED, utilisez les blocs [Wait 1 seconds] et [forever] dans la palette **Control**. Cliquez sur ces blocs après les avoir ajoutés ; une auréole jaune signifie que le script est en cours d'exécution.

* [Wait 1 seconds] : de la palette **Control**, pour régler l'intervalle de temps entre deux blocs.
* [forever] : de la palette **Control**, permet au script de continuer à s'exécuter tant que l'alimentation est active.

.. image:: img/1_upload_more.png

Enfin, cliquez sur le bouton **Upload Code**.

.. image:: img/1_upload_code.png