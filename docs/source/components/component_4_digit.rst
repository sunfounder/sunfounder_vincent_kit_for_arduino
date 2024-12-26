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

Pour vous aider à comprendre comment les afficheurs à 7 segments (cathode commune) affichent les chiffres, nous avons dressé le tableau suivant. Les chiffres correspondent aux nombres de 0 à F affichés sur l’afficheur à 7 segments ; (DP) GFEDCBA désigne la LED correspondante réglée sur 0 ou 1. Par exemple, 00111111 signifie que DP et G sont réglés sur 0, tandis que les autres sont réglés sur 1. Par conséquent, le chiffre 0 est affiché sur l’afficheur à 7 segments, tandis que le code HEX correspond au nombre hexadécimal.

.. list-table:: Glyph Code
    :widths: 20 20 20
    :header-rows: 1

    *   - Numbers	
        - Binary Code
        - Hex Code  
    *   - 0	
        - 00111111	
        - 0x3f
    *   - 1	
        - 00000110	
        - 0x06
    *   - 2	
        - 01011011	
        - 0x5b
    *   - 3	
        - 01001111	
        - 0x4f
    *   - 4	
        - 01100110	
        - 0x66
    *   - 5	
        - 01101101	
        - 0x6d
    *   - 6	
        - 01111101	
        - 0x7d
    *   - 7	
        - 00000111	
        - 0x07
    *   - 8	
        - 01111111	
        - 0x7f
    *   - 9	
        - 01101111	
        - 0x6f
    *   - A	
        - 01110111	
        - 0x77
    *   - B
        - 01111100	
        - 0x7c
    *   - C	
        - 00111001	
        - 0x39
    *   - D	
        - 01011110	
        - 0x5e
    *   - E	
        - 01111001	
        - 0x79
    *   - F	
        - 01110001	
        - 0x71

**Exemple**

* :ref:`ar_4_digit` (Arduino Project)

