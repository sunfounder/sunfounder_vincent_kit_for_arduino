.. note::

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook, animée par SunFounder ! Plongez plus profondément dans l'univers du Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et défis techniques grâce à l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez des astuces et des tutoriels pour développer vos compétences.
    - **Aperçus exclusifs** : Bénéficiez d'un accès anticipé aux annonces de nouveaux produits et aperçus exclusifs.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos produits les plus récents.
    - **Promotions festives et concours** : Participez à des concours et promotions pendant les fêtes.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

LED RGB
===========

.. image:: img/rgb_led.png
    :width: 100

Les LED RGB émettent de la lumière dans différentes couleurs. Une LED RGB combine trois LED (rouge, verte et bleue) dans un boîtier en plastique transparent ou semi-transparent. Elle peut afficher une large gamme de couleurs en modifiant la tension d'entrée sur ses trois broches et en superposant les couleurs, ce qui permet de créer jusqu'à 16 777 216 couleurs différentes, selon les statistiques.

.. image:: img/rgb_light.png
    :width: 600

Les LED RGB peuvent être classées en deux types : à anode commune et à cathode commune. Dans ce kit, nous utilisons un modèle à **cathode commune** (CC), ce qui signifie que les cathodes des trois LED sont connectées ensemble. Une fois connectée à la masse (GND) et les trois broches branchées, la LED s'illuminera dans la couleur correspondante.

Le symbole de circuit d'une LED RGB est montré ci-dessous.

.. image:: img/rgb_symbol.png
    :width: 300

Une LED RGB dispose de 4 broches : la plus longue est la broche GND. Les autres sont respectivement pour le rouge, le vert et le bleu. Si vous touchez son boîtier en plastique, vous trouverez une entaille. La broche la plus proche de cette entaille est la première, marquée "Rouge", suivie de GND, Vert et Bleu dans cet ordre.

.. image:: img/rgb_pin.jpg
    :width: 200

**Exemples**

* :ref:`ar_rgb` (Arduino Project)
* :ref:`ar_overheat_monitor` (Arduino Project)
