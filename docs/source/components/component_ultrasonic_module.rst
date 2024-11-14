.. note:: 

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook ! Plongez plus profondément dans l'univers du Raspberry Pi, de l'Arduino et de l'ESP32 avec d'autres passionnés.

    **Pourquoi rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et défis techniques grâce à l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez des astuces et des tutoriels pour perfectionner vos compétences.
    - **Aperçus exclusifs** : Accédez en avant-première aux annonces de nouveaux produits et à des aperçus exclusifs.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos produits les plus récents.
    - **Promotions festives et jeux concours** : Participez à des jeux concours et à des promotions spéciales pour les fêtes.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _cpn_ultrasonic:

Module Ultrasonique
=========================

.. image:: img/ultrasonic_pic.png
    :width: 400
    :align: center

Le module ultrasonique permet de réaliser des mesures sans contact dans une plage de 2 cm à 400 cm, avec une précision de 3 mm. 
Il garantit que le signal reste stable jusqu'à 5 m, puis il se dégrade progressivement après cette distance, jusqu'à disparaître à 7 m.

Le module comprend un émetteur ultrasonique, un récepteur et un circuit de contrôle. Les principes de fonctionnement sont les suivants :

#. Utiliser un basculeur IO pour traiter un signal de niveau haut d’au moins 10 µs.

#. Le module envoie automatiquement huit impulsions à 40 kHz et détecte si un signal de retour sous forme d'impulsion est reçu.

#. Si le signal est renvoyé, en passant par le niveau haut, la durée du signal de sortie en niveau haut correspond au temps écoulé depuis l'émission de l'onde ultrasonore jusqu'à son retour. Ici, la distance de mesure = (temps haut x vitesse du son (340 m/s) / 2).

Le diagramme de temporisation est montré ci-dessous.

.. image:: img/ultrasonic228.png

Il suffit de fournir une courte impulsion de 10 µs sur l'entrée de déclenchement 
pour démarrer la mesure de distance. Ensuite, le module émettra une rafale de 
huit cycles d'ultrasons à 40 kHz et attendra son écho. Vous pouvez calculer la 
distance en fonction de l'intervalle de temps entre l'émission du signal de 
déclenchement et la réception de l'écho.

Formule : us / 58 = centimètres ou us / 148 = pouces ; ou encore : la distance = 
temps haut * vitesse (340 m/s) / 2. Il est conseillé d'utiliser un cycle de mesure 
supérieur à 60 ms afin d'éviter les collisions de signaux entre le signal de 
déclenchement et l'écho.

**Exemples**

* :ref:`ar_ultrasonic` (Arduino Project)
* :ref:`ar_reversing_aid` (Arduino Project)
* :ref:`parrot` (Scratch Project)
