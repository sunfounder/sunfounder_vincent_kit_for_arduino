.. note::

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook, animée par SunFounder ! Explorez plus en profondeur l'univers du Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et défis techniques grâce à l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez des astuces et des tutoriels pour développer vos compétences.
    - **Aperçus exclusifs** : Bénéficiez d'un accès anticipé aux annonces de nouveaux produits et aperçus exclusifs.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos produits les plus récents.
    - **Promotions festives et concours** : Participez à des concours et promotions pendant les fêtes.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !



Résistance
=============

.. image:: img/resistor.png
    :width: 300

Une résistance est un composant électronique permettant de limiter le courant 
dans un circuit. Une résistance fixe est une résistance dont la valeur ne peut 
pas être modifiée, tandis que celle d'un potentiomètre ou d'une résistance variable 
peut être ajustée.

Voici les deux symboles de circuit les plus couramment utilisés pour une résistance. En général, la valeur de la résistance est inscrite dessus. Ainsi, si vous voyez ces symboles dans un circuit, cela représente une résistance.

.. image:: img/resistor_symbol.png
    :width: 400

**Ω** est l'unité de mesure de la résistance, et les unités plus grandes incluent 
le KΩ, le MΩ, etc. Leur relation est la suivante : 1 MΩ = 1000 KΩ, 1 KΩ = 1000 Ω. 
En général, la valeur de la résistance est inscrite sur la pièce.

Lorsque vous utilisez une résistance, il est essentiel de connaître sa valeur. 
Voici deux méthodes : vous pouvez observer les bandes colorées sur la résistance, 
ou utiliser un multimètre pour mesurer la résistance. Il est recommandé d'utiliser 
la première méthode, car elle est plus pratique et rapide.

.. image:: img/resistance_card.jpg

Comme le montre la carte, chaque couleur correspond à un chiffre.

.. list-table::

   * - Noir
     - Marron
     - Rouge
     - Orange
     - Jaune
     - Vert
     - Bleu
     - Violet
     - Gris
     - Blanc
     - Or
     - Argent
   * - 0
     - 1
     - 2
     - 3
     - 4
     - 5
     - 6
     - 7
     - 8
     - 9
     - 0.1
     - 0.01

Les résistances à 4 et 5 bandes sont fréquemment utilisées, et comportent 
respectivement 4 et 5 bandes de couleur.

En général, lorsque vous obtenez une résistance, il peut être difficile de 
déterminer quel côté commencer pour lire la couleur. Le truc est que l'écart 
entre la 4e et la 5e bande est généralement plus grand.

Ainsi, vous pouvez observer l'écart entre les deux bandes de couleur à une 
extrémité de la résistance ; si l'écart est plus large que celui des autres 
bandes, vous pouvez lire à partir du côté opposé.

Voyons comment lire la valeur d'une résistance à 5 bandes, comme celle illustrée 
ci-dessous.

.. image:: img/220ohm.jpg
    :width: 500

Pour cette résistance, la lecture de la valeur se fait de gauche à droite. 
La valeur se lit dans ce format : 1ère Bande 2ème Bande 3ème Bande × 10^Multiplicateur (Ω), et l'erreur admissible est de ±Tolérance%. 
Ainsi, la valeur de cette résistance est 2 (rouge) 2 (rouge) 0 (noir) × 10^0 (noir) Ω = 220 Ω, 
et l'erreur admissible est de ± 1% (marron).

.. list-table::Common resistor color band
    :header-rows: 1

    * - Résistance 
      - Bande de couleur  
    * - 10Ω   
      - marron noir noir argent marron
    * - 100Ω   
      - marron noir noir noir marron
    * - 220Ω 
      - rouge rouge noir noir marron
    * - 330Ω 
      - orange orange noir noir marron
    * - 1kΩ 
      - marron noir noir brun brun
    * - 2kΩ 
      - rouge noir noir brun brun
    * - 5.1kΩ 
      - vert marron noir brun brun
    * - 10kΩ 
      - marron noir noir rouge brun 
    * - 100kΩ 
      - marron noir noir orange brun 
    * - 1MΩ 
      - marron noir noir vert brun

Vous pouvez en apprendre davantage sur les résistances sur Wikipedia : `Resistor - Wikipedia <https://en.wikipedia.org/wiki/Resistor>`_.
