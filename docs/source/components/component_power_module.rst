.. note::

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook, animée par SunFounder ! Explorez plus en profondeur l'univers du Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et défis techniques grâce à l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez des astuces et des tutoriels pour développer vos compétences.
    - **Aperçus exclusifs** : Bénéficiez d'un accès anticipé aux annonces de nouveaux produits et aperçus exclusifs.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos produits les plus récents.
    - **Promotions festives et concours** : Participez à des concours et promotions pendant les fêtes.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _cpn_power_module:

Module d'alimentation
========================

Lorsque nous avons besoin d'un courant élevé pour alimenter un composant, cela peut interférer sérieusement avec le fonctionnement normal du Raspberry Pi. Par conséquent, nous alimentons séparément le composant via ce module pour qu'il fonctionne en toute sécurité et de manière stable.

Vous pouvez simplement le brancher sur une planche d'essai pour fournir de l'énergie. Il offre des tensions de 3,3V et 5V, et vous pouvez connecter l'une ou l'autre via un capuchon de cavalier inclus.

.. image:: img/power_supply.png
    :width: 500
    :align: center

**Caractéristiques et spécifications**

* Tension d'entrée : 6,5 - 12V
* Deux canaux indépendants
* Tension de sortie : 5V, 3,3V (réglable via les cavaliers. Configuration 0V, 3,3V et 5V)
* Courant de sortie : Courant maximum de sortie 700mA
* Connecteur mâle berg pour GND, 5V, 3,3V en sortie
* Interrupteur ON-OFF disponible.
* Entrée USB (Type-A) disponible.
* Entrée Jack DC disponible.
* LED d'alimentation onboard
* Dimensions : 53mm x 33mm (L x l)

**Exemple**

* :ref:`ar_motor` (Arduino Project)
* :ref:`ar_stepper_motor` (Arduino Project)

