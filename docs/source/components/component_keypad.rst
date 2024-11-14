.. note:: 

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook, animée par SunFounder ! Explorez en profondeur Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et défis techniques grâce à l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez des astuces et des tutoriels pour développer vos compétences.
    - **Aperçus exclusifs** : Bénéficiez d'un accès anticipé aux annonces de nouveaux produits et aperçus exclusifs.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos produits les plus récents.
    - **Promotions festives et concours** : Participez à des concours et promotions pendant les fêtes.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _cpn_keypad:

Clavier
========================

Un clavier est une matrice rectangulaire de 12 ou 16 boutons OFF-(ON).
Les contacts sont accessibles via un connecteur adapté à une connexion avec un câble plat ou à l'insertion dans un circuit imprimé.
Dans certains claviers, chaque bouton est connecté à un contact distinct dans le connecteur, tandis que tous les boutons partagent une masse commune.

.. image:: img/keypad314.png

Plus souvent, les boutons sont codés en matrice, ce qui signifie que chacun d'eux relie une paire unique de conducteurs dans la matrice.
Cette configuration permet un sondage facile par un microcontrôleur, qui peut être programmé pour envoyer une impulsion de sortie à chaque fil horizontal à tour de rôle.
Lors de chaque impulsion, il vérifie les quatre fils verticaux restants, afin de déterminer lequel, le cas échéant, porte un signal.
Des résistances de tirage (pull-up ou pull-down) doivent être ajoutées aux fils d'entrée pour éviter des comportements imprévisibles du microcontrôleur lorsque aucun signal n'est présent.

**Exemple**

* :ref:`ar_keypad` (Arduino Project)
* :ref:`ar_access_system` (Arduino Project)