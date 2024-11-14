.. note::

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook, animée par SunFounder ! Explorez plus en profondeur l'univers du Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et défis techniques grâce à l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez des astuces et des tutoriels pour développer vos compétences.
    - **Aperçus exclusifs** : Bénéficiez d'un accès anticipé aux annonces de nouveaux produits et aperçus exclusifs.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos produits les plus récents.
    - **Promotions festives et concours** : Participez à des concours et promotions pendant les fêtes.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _cpn_receive:

Module Récepteur IR
===========================

**Module Récepteur IR**

.. image:: img/image185.png

* S : Sortie du signal
* + : VCC
* - : GND

Un récepteur infrarouge (IR) est un composant qui capte les signaux infrarouges et peut indépendamment recevoir des rayons infrarouges et émettre des signaux compatibles avec le niveau TTL. Il ressemble à un transistor classique encapsulé en plastique et est adapté à tous les types de télécommandes infrarouges et de transmissions infrarouges.

La communication infrarouge (IR) est une technologie de communication sans fil populaire, peu coûteuse et facile à utiliser. La lumière infrarouge a une longueur d'onde légèrement plus longue que celle de la lumière visible, ce qui la rend imperceptible à l'œil humain, idéal pour la communication sans fil. Une modulation courante pour la communication infrarouge est la modulation à 38 kHz.

* Capteur de récepteur IR HX1838 adopté, haute sensibilité
* Peut être utilisé pour la télécommande
* Alimentation : 5V
* Interface : Numérique
* Fréquence de modulation : 38kHz
* Définitions des broches : (1) Sortie (2) Vcc (3) GND
* Dimensions : 23,5 mm x 21,5 mm

**Télécommande**

.. image:: img/image186.jpeg
    :width: 400

Voici une télécommande infrarouge mince et compacte, avec 21 boutons fonctionnels et une portée de transmission pouvant atteindre 8 mètres, idéale pour contrôler une large gamme de dispositifs dans une chambre d'enfant.

* Dimensions : 85x39x6 mm
* Portée de la télécommande : 8-10 m
* Batterie : pile lithium-manganèse 3V
* Fréquence porteuse infrarouge : 38kHz
* Matériau de surface : PET de 0,125 mm
* Durée de vie effective : plus de 20 000 utilisations

**Exemple**

* :ref:`ar_receive` (Arduino Project)
* :ref:`ar_guess_number` (Arduino Project)