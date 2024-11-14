.. note:: 

    Bonjour, bienvenue dans la communauté des passionnés de SunFounder Raspberry Pi, Arduino et ESP32 sur Facebook ! Explorez plus en profondeur les univers de Raspberry Pi, Arduino et ESP32 avec d’autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et techniques grâce à l’aide de notre communauté et de notre équipe.
    - **Apprendre & Partager** : Échangez des conseils et des tutoriels pour enrichir vos compétences.
    - **Aperçus exclusifs** : Profitez d’un accès anticipé aux annonces de nouveaux produits.
    - **Réductions spéciales** : Bénéficiez de remises exclusives sur nos produits les plus récents.
    - **Promotions festives et cadeaux** : Participez à des concours et promotions festives.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] pour nous rejoindre dès aujourd'hui !

.. _colorful_ball:

2.3 Boules Colorées
=======================

Dans ce projet, nous allons faire en sorte que les LED RVB affichent différentes couleurs.

En cliquant sur les boules de différentes couleurs dans la zone de scène, la LED RVB s'allumera dans la couleur correspondante.

.. image:: img/4_color.png

Ce Que Vous Apprendrez
-------------------------

- Principe de la LED RVB
- Copier des lutins et sélectionner des costumes différents
- Superposition des trois couleurs primaires


Construire le Circuit
------------------------

Une LED RVB regroupe trois LED (rouge, verte et bleue) dans une coque en plastique transparent ou semi-transparent. En modifiant la tension d'entrée sur les trois broches, il est possible de superposer ces couleurs, ce qui, selon les statistiques, peut créer jusqu'à 16 777 216 couleurs différentes.

.. image:: img/4_rgb.png
    :width: 300

.. image:: img/circuit/rgb_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_rgb`
* :ref:`cpn_resistor`


Programmation
------------------

**1. Sélectionner un lutin**

Supprimez le lutin par défaut, puis choisissez le lutin **Balle**.

.. image:: img/4_ball.png

Et dupliquez-le 5 fois.

.. image:: img/4_duplicate_ball.png

Choisissez des costumes différents pour ces 5 lutins **Balle** et positionnez-les aux endroits souhaités.

.. note::

    Le costume du lutin **Balle3** doit être modifié manuellement en rouge.

.. image:: img/4_rgb1.png
    :width: 800

**2. Faire en sorte que les LED RVB s'allument avec la couleur appropriée**

Avant de comprendre le code, nous devons comprendre le `RGB color model <https://en.wikipedia.org/wiki/RGB_color_model>`_.

Le modèle de couleur RVB est un modèle additif dans lequel les lumières rouge, verte et bleue sont combinées de diverses manières pour reproduire une large gamme de couleurs.

Mélange de couleurs additives : ajouter du rouge au vert donne du jaune ; ajouter du vert au bleu donne du cyan ; ajouter du bleu au rouge donne du magenta ; combiner les trois couleurs primaires donne du blanc.

.. image:: img/4_rgb_addition.png
  :width: 400

Ainsi, le code pour faire briller la LED RVB en jaune est le suivant.

.. image:: img/4_yellow.png


Lorsque le lutin Balle (balle jaune) est cliqué, nous définissons la broche 11 en état haut (LED rouge allumée), la broche 10 en état haut (LED verte allumée) et la broche 9 en état bas (LED bleue éteinte) pour que la LED RVB s'allume en jaune.

Vous pouvez programmer les autres lutins de la même manière pour que les LED RVB s'allument dans les couleurs correspondantes.

**3. Lutin Balle2 (bleu clair)**

.. image:: img/4_blue.png

**4. Lutin Balle3 (rouge)**

.. image:: img/4_red.png

**5. Lutin Balle4 (vert)**

.. image:: img/4_green.png

**6. Lutin Balle5 (violet)**

.. image:: img/4_purple.png



