.. note:: 

    Bonjour, bienvenue dans la communauté SunFounder des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook ! Approfondissez vos connaissances sur le Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez les problèmes post-vente et les défis techniques avec l'aide de notre communauté et de notre équipe.
    - **Apprenez et partagez** : Échangez des conseils et des tutoriels pour améliorer vos compétences.
    - **Aperçus exclusifs** : Recevez des annonces de nouveaux produits et des avant-premières en avant-première.
    - **Réductions spéciales** : Profitez de remises exclusives sur nos derniers produits.
    - **Promotions festives et concours** : Participez à des promotions festives et des concours.

    👉 Prêt à explorer et à créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _add_libraries_ar:

Installer des bibliothèques (Important)
==========================================

Une bibliothèque est un ensemble de code ou de fonctions pré-écrites qui étendent les fonctionnalités de l'IDE Arduino. Les bibliothèques fournissent du code prêt à l'emploi pour diverses fonctionnalités, vous permettant de gagner du temps et des efforts pour coder des fonctionnalités complexes.

Il existe deux manières principales d'installer des bibliothèques :

Installation depuis le gestionnaire de bibliothèques
------------------------------------------------------

De nombreuses bibliothèques sont disponibles directement via le gestionnaire de bibliothèques Arduino. Vous pouvez accéder au gestionnaire en suivant ces étapes :

#. Dans le **gestionnaire de bibliothèques**, vous pouvez rechercher la bibliothèque souhaitée par nom ou parcourir différentes catégories.

   .. note::

      Dans les projets nécessitant l'installation de bibliothèques, des indications vous guideront sur les bibliothèques à installer. Suivez les instructions fournies, telles que "Ici, la bibliothèque du capteur DHT est utilisée, vous pouvez l'installer depuis le gestionnaire de bibliothèques." Installez simplement les bibliothèques recommandées comme indiqué.

   .. image:: img/install_lib3.png

#. Une fois que vous avez trouvé la bibliothèque que vous souhaitez installer, cliquez dessus puis sur le bouton **Installer**.

   .. image:: img/install_lib2.png

#. L'IDE Arduino téléchargera et installera automatiquement la bibliothèque pour vous.

.. _install_lib_man:

Installation manuelle
------------------------

Certaines bibliothèques ne sont pas disponibles via le **gestionnaire de bibliothèques** et doivent être installées manuellement. Pour installer ces bibliothèques, suivez ces étapes :

#. Ouvrez l'IDE Arduino et allez dans **Sketch** -> **Inclure une bibliothèque** -> **Ajouter une bibliothèque .ZIP**.

   .. image:: img/a2dp_add_zip.png

#. Naviguez jusqu'au répertoire où se trouvent les fichiers de la bibliothèque, comme le dossier ``sunfounder_vincent_kit_for_arduino/library/``, sélectionnez le fichier de la bibliothèque et cliquez sur **Ouvrir**.

   .. image:: img/rfid_choose.png

#. Après un court instant, vous recevrez une notification indiquant une installation réussie.

   .. image:: img/rfid_success.png

#. Répétez le même processus pour ajouter d'autres bibliothèques.

.. note::

   Les bibliothèques installées à l'aide de l'une des méthodes ci-dessus se trouvent dans le répertoire par défaut des bibliothèques de l'IDE Arduino, qui est généralement situé dans ``C:\Users\xxx\Documents\Arduino\libraries``.

   Si votre répertoire de bibliothèques est différent, vous pouvez le vérifier en allant dans **Fichier** -> **Préférences**.

      .. image:: img/install_lib1.png
