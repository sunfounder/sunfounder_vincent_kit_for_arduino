.. note:: 

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook, animée par SunFounder ! Plongez plus profondément dans l'univers de Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et défis techniques avec l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez astuces et tutoriels pour améliorer vos compétences.
    - **Aperçus exclusifs** : Bénéficiez d'un accès anticipé aux annonces de nouveaux produits et aperçus.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos derniers produits.
    - **Promotions festives et concours** : Participez à des concours et promotions pendant les fêtes.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _cpn_7_segment:

Afficheur 7 segments
========================

.. image:: img/7-seg.jpg

Un afficheur 7 segments est un composant en forme de huit qui contient 7 LEDs. Chaque LED est appelée un segment - lorsqu'un segment est activé, il fait partie d'un chiffre à afficher.

Il existe deux types de connexion de broches : Cathode Commune (CC) et Anode Commune (CA). Comme son nom l'indique, un afficheur CC a toutes les cathodes des 7 LEDs connectées, tandis qu'un afficheur CA a toutes les anodes des 7 segments connectées.

Dans ce kit, nous utilisons un afficheur 7 segments à Cathode Commune, voici le symbole électronique.

.. image:: img/segment_cathode.png
    :width: 800

Chaque LED de l'afficheur est associée à un segment positionnel, avec une de ses broches de connexion qui sort du boîtier plastique rectangulaire. Ces broches de LED sont étiquetées de "a" à "g", représentant chaque LED individuelle. Les autres broches de LED sont reliées entre elles pour former une broche commune. Ainsi, en appliquant un biais direct sur les broches appropriées des segments LED dans un ordre particulier, certains segments s'illuminent tandis que d'autres restent faibles, affichant ainsi le caractère correspondant sur l'afficheur.

**Codes d'affichage**

Pour vous aider à comprendre comment les afficheurs 7 segments (Cathode Commune) affichent les chiffres, nous avons préparé le tableau suivant. Les chiffres sont de 0 à F, affichés sur l'afficheur 7 segments ; (DP) GFEDCBA fait référence à l'état de la LED correspondante, soit 0 soit 1. Par exemple, 00111111 signifie que DP et G sont à 0, tandis que les autres sont à 1. Ainsi, le chiffre 0 est affiché sur l'afficheur 7 segments, et le code HEX correspond au nombre hexadécimal.

.. image:: img/segment_code.png

**Exemple**

* :ref:`ar_7_segment` (Arduino Project)
* :ref:`ar_pedestrian` (Arduino Project)
