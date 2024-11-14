.. note::

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook, animée par SunFounder ! Plongez plus profondément dans l'univers du Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et défis techniques grâce à l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez des astuces et des tutoriels pour développer vos compétences.
    - **Aperçus exclusifs** : Bénéficiez d'un accès anticipé aux annonces de nouveaux produits et aperçus exclusifs.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos produits les plus récents.
    - **Promotions festives et concours** : Participez à des concours et promotions pendant les fêtes.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _cpn_rotary:

Module Codeur Rotatif
========================

.. image:: img/rotary_encoder_pic.png
    :width: 300
    :align: center

Le module codeur rotatif compte le nombre d'impulsions émises lors de la rotation, tant en direction horaire qu'antihoraire. Contrairement à un potentiomètre, ce comptage est illimité et le nombre d'impulsions par cycle est de 20. Appuyez sur le bouton (SW) du codeur rotatif pour commencer le comptage à partir de zéro.

Il existe principalement deux types de codeurs rotatifs : absolus et incrémentaux (relatifs). Un codeur incrémental est utilisé dans ce kit.

Les codeurs incrémentaux génèrent des ondes carrées à deux phases, dont la différence de phase est de 90°, appelées généralement canal A et canal B.

Comme illustré à droite, lorsque le canal A passe du niveau haut au niveau bas, 
si le canal B est à un niveau haut, cela indique que le codeur rotatif tourne 
dans le sens horaire (CW) ; si à ce moment-là le canal B est à un niveau bas, 
cela signifie que le codeur tourne dans le sens antihoraire (CCW). Ainsi, en 
lisant la valeur du canal B lorsque le canal A est à un niveau bas, nous pouvons 
déterminer la direction de rotation du codeur rotatif.

.. image:: img/image206.png
    :width: 600
    :align: center

**Exemple**



* :ref:`ar_rotary_encoder` (Arduino Project)