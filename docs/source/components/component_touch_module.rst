.. note:: 

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook ! Explorez davantage le monde du Raspberry Pi, de l'Arduino et de l'ESP32 avec d'autres passionnés.

    **Pourquoi rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et défis techniques avec l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez des astuces et des tutoriels pour améliorer vos compétences.
    - **Aperçus exclusifs** : Accédez en avant-première aux annonces de nouveaux produits et découvrez des aperçus exclusifs.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos produits les plus récents.
    - **Promotions festives et cadeaux** : Participez à nos jeux concours et promotions saisonnières.

    👉 Prêt à explorer et à créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _cpn_touch:

Module d'Interrupteur Tactile
==================================

.. image:: img/touch168.png
    :width: 300
    :align: center

* **IO** : Broche de signal, généralement à niveau bas, elle passe à un niveau haut après un contact.
* **VCC** : Alimentation, 3.3 ~ 5V CC.
* **GND** : Masse.

Ce module est un interrupteur capacitif basé sur un circuit intégré de capteur tactile (TTP223B). En état normal, le module sort un signal à faible niveau avec une faible consommation d'énergie ; lorsque le doigt touche la zone correspondante, le module génère un signal à niveau haut, puis revient à un niveau bas après le retrait du doigt.

Voici comment fonctionne l'interrupteur capacitif :

Un interrupteur capacitif est constitué de différentes couches : une plaque isolante supérieure, suivie de la plaque tactile, une autre couche isolante, puis la plaque de masse.

.. image:: img/touch169.jpeg

En pratique, un capteur capacitif peut être réalisé sur un circuit imprimé double face, en considérant un côté comme le capteur tactile et l'autre comme la plaque de masse du condensateur. Lorsqu'une alimentation est appliquée entre ces plaques, celles-ci se chargent. En état d'équilibre, les plaques ont la même tension que la source d'alimentation.

Le circuit détecteur comprend un oscillateur dont la fréquence dépend de la capacitance de la zone tactile. Lorsqu'un doigt s'approche du capteur, la capacitance supplémentaire fait varier la fréquence de cet oscillateur interne. Le circuit détecteur suit la fréquence de l'oscillateur à intervalles réguliers, et lorsque le décalage dépasse le seuil, le circuit déclenche un événement de pression sur la touche.


**Exemple**


* :ref:`ar_touch` (Arduino Project)
* :ref:`balloon` (Scratch Project)