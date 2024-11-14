.. note:: 

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook, animée par SunFounder ! Explorez plus en profondeur l'univers de Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et vos défis techniques avec l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez des astuces et des tutoriels pour améliorer vos compétences.
    - **Aperçus exclusifs** : Bénéficiez d'un accès anticipé aux annonces de nouveaux produits et à des aperçus exclusifs.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos derniers produits.
    - **Promotions festives et concours** : Participez à des concours et des promotions pendant les fêtes.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _cpn_4_digit:

Afficheur 7 segments à 4 chiffres
======================================

L'afficheur 7 segments à 4 chiffres est composé de quatre afficheurs 
7 segments fonctionnant ensemble.

.. image:: img/4-digit-sche.png

L'afficheur 7 segments à 4 chiffres fonctionne de manière indépendante. 
Il utilise le principe de la persistance rétinienne pour afficher rapidement 
les caractères de chaque segment en boucle, formant ainsi une chaîne continue.

Par exemple, lorsque "1234" est affiché, "1" est visible sur le premier 
afficheur 7 segments, tandis que "234" ne s'affiche pas. Après un court 
instant, le deuxième afficheur 7 segments affiche "2", les premier, 
troisième et quatrième afficheurs ne sont pas visibles, et ainsi de suite. 
Ce processus est très court (généralement 5 ms), et grâce à l'effet de 
persistance rétinienne, nous pouvons voir les quatre chiffres en même temps.

.. image:: img/image78.png

**Codes d'affichage**

Pour vous aider à comprendre comment les afficheurs 7 segments (Anode commune) 
affichent les chiffres, nous avons préparé le tableau suivant. Les chiffres 
sont affichés de 0 à F sur l'afficheur 7 segments ; (DP) GFEDCBA indique 
l'état des LED correspondantes (0 ou 1). Par exemple, 11000000 signifie que 
DP et G sont à 1, tandis que les autres sont à 0. Ainsi, le chiffre 0 est 
affiché sur l'afficheur 7 segments, et le code HEX correspond au nombre 
hexadécimal.

.. image:: img/common_anode.png

**Exemple**

* :ref:`ar_4_digit` (Arduino Project)

