.. note:: 

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 de SunFounder sur Facebook ! Plongez dans l'univers du Raspberry Pi, de l'Arduino et de l'ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes post-vente et défis techniques avec l'aide de notre communauté et de notre équipe.
    - **Apprenez et partagez** : Échangez des astuces et tutoriels pour perfectionner vos compétences.
    - **Aperçus exclusifs** : Accédez en avant-première aux annonces de nouveaux produits.
    - **Réductions spéciales** : Profitez de remises exclusives sur nos derniers produits.
    - **Promotions et concours festifs** : Participez à des concours et à des promotions spéciales pour les fêtes.

    👉 Prêt à explorer et à créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _cpn_water:

Module de Capteur de Niveau d'Eau
=====================================

.. image:: img/water_sensor.png

* **S** : Broche de signal, plus le capteur est immergé dans l'eau, plus la valeur de sortie est élevée.
* **+** : Alimentation, de 3,3 à 5V CC.
* **-** : Masse.

Le module capteur de niveau d'eau est un capteur de détection de niveau/goutte d'eau compact, économique et facile à utiliser, qui mesure le niveau d'eau à l'aide d'une série de traces parallèles exposées pour déterminer la taille de la goutte ou du volume d'eau.

Le capteur comporte dix traces de cuivre exposées, cinq pour l'alimentation et cinq pour les capteurs, qui se croisent et sont pontées par l'eau lorsqu'elles sont inondées.
La carte de circuit est équipée d'une LED d'alimentation qui s'allume lorsque la carte est sous tension.

La combinaison de ces traces agit comme une résistance variable, modifiant la valeur de la résistance en fonction du niveau d'eau.
En d'autres termes, plus le capteur est immergé, meilleure est la conductivité et plus faible est la résistance. Inversement, moins il y a de conductivité, plus la résistance est élevée.
Le capteur traitera ensuite la tension du signal de sortie qui sera envoyée au microcontrôleur, permettant ainsi de déterminer le niveau d'eau.

.. warning:: 
    Le capteur ne peut pas être entièrement immergé dans l'eau ; laissez seulement la partie où se trouvent les dix traces en contact avec l'eau. De plus, alimenter le capteur dans un environnement humide accélérera la corrosion de la sonde et réduira sa durée de vie. Nous vous recommandons donc de l'alimenter uniquement lors des lectures.


**Exemple**



* :ref:`ar_water` (Arduino Project)
* :ref:`starfish` (Scratch Project)