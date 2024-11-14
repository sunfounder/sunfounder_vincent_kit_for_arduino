.. note::

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook, animée par SunFounder ! Explorez plus en profondeur l'univers du Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et défis techniques grâce à l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez des astuces et des tutoriels pour développer vos compétences.
    - **Aperçus exclusifs** : Bénéficiez d'un accès anticipé aux annonces de nouveaux produits et aperçus exclusifs.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos produits les plus récents.
    - **Promotions festives et concours** : Participez à des concours et promotions pendant les fêtes.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _cpn_pir:

PIR Motion Sensor Module
============================

.. image:: img/pir_pic.png
    :width: 300
    :align: center

Le capteur PIR détecte le rayonnement infrarouge thermique, ce qui permet de détecter la présence d'organismes émettant ce type de rayonnement.

Le capteur PIR est divisé en deux fentes connectées à un amplificateur différentiel. Lorsqu'un objet stationnaire se trouve devant le capteur, les deux fentes reçoivent la même quantité de rayonnement et la sortie est nulle. Lorsqu'un objet en mouvement passe devant le capteur, l'une des fentes reçoit plus de rayonnement que l'autre, ce qui fait fluctuer la sortie entre un niveau haut et bas. Ce changement de tension de sortie est le résultat de la détection du mouvement.

.. image:: img/PIR_working_principle.jpg
    :width: 800

Après le câblage du module de détection, une phase d'initialisation d'une minute a lieu. Pendant cette initialisation, le module émet des sorties entre 0 et 3 fois à intervalles réguliers. Ensuite, il passe en mode veille. Il est important d'éviter l'interférence de sources lumineuses et d'autres sources de perturbation proches du module, afin d'éviter les erreurs de fonctionnement dues aux signaux interférents. Il est même préférable d'utiliser le module sans trop de vent, car celui-ci peut également interférer avec le capteur.

.. image:: img/pir_back.png
    :width: 600
    :align: center

**Réglage de la distance**

En tournant le potentiomètre de réglage de la distance dans le sens des aiguilles d'une montre, la portée de détection augmente, avec une portée maximale d'environ 0 à 7 mètres. Si vous le tournez dans le sens inverse, la portée de détection diminue, et la portée minimale est d'environ 0 à 3 mètres.

**Réglage du délai**

En tournant le potentiomètre du délai dans le sens des aiguilles d'une montre, vous pouvez augmenter le délai de détection, qui peut atteindre jusqu'à 300 secondes. Inversement, en le tournant dans le sens inverse, vous pouvez réduire ce délai à un minimum de 5 secondes.

**Deux modes de déclenchement**

Vous pouvez choisir entre différents modes à l'aide du capuchon de cavalier.

* **H** : Mode de déclenchement répétable, après avoir détecté la présence d'un corps humain, le module émet un niveau haut. Pendant la période de délai suivante, si quelqu'un entre dans la zone de détection, la sortie restera à un niveau haut.

* **L** : Mode de déclenchement non répétable, émet un niveau haut lorsqu'il détecte un corps humain. Après le délai, la sortie passe automatiquement du niveau haut au niveau bas.

**Exemple**

* :ref:`ar_pir` (Arduino Project)
