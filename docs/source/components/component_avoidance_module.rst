.. note:: 

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook, animée par SunFounder ! Plongez plus profondément dans l'univers de Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et défis techniques avec l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez astuces et tutoriels pour améliorer vos compétences.
    - **Aperçus exclusifs** : Bénéficiez d'un accès anticipé aux annonces de nouveaux produits et aperçus.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos derniers produits.
    - **Promotions festives et concours** : Participez à des concours et promotions pendant les fêtes.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _cpn_avoid:

Module de détection d'obstacles
===========================================

.. image:: img/IR_Obstacle.png
   :width: 400
   :align: center

* **VCC** : Alimentation, 3,3 ~ 5V DC.
* **GND** : Masse
* **OUT** : Broche de signal, généralement à niveau haut, et à niveau bas lorsqu'un obstacle est détecté.


Le module de détection d'obstacles par infrarouge (IR) présente une grande adaptabilité à la lumière ambiante. Il comporte une paire de tubes émetteurs et récepteurs infrarouges.

Le tube émetteur émet des ondes infrarouges. Lorsque le faisceau rencontre un 
obstacle dans la direction de détection, le rayonnement infrarouge est capté 
par le tube récepteur. Après traitement par le circuit comparateur, le voyant 
vert s'allume et un signal à faible niveau est émis.

La distance de détection peut être ajustée à l'aide d'un potentiomètre, avec une plage de distance effective allant de 2 à 30 cm.

.. image:: img/IR_module.png
    :width: 600
    :align: center

**Exemple**

* :ref:`ar_avoid` (Arduino Project)
* :ref:`shooting` (Scratch Project)






