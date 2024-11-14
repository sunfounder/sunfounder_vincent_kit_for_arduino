.. note:: 

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook, animée par SunFounder ! Explorez en profondeur Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et défis techniques grâce à l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez des astuces et des tutoriels pour développer vos compétences.
    - **Aperçus exclusifs** : Bénéficiez d'un accès anticipé aux annonces de nouveaux produits et aperçus exclusifs.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos produits les plus récents.
    - **Promotions festives et concours** : Participez à des concours et promotions pendant les fêtes.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _cpn_led:

LED
==========

.. image:: img/LED.png
    :width: 400

La diode électroluminescente à semi-conducteur est un composant qui transforme l'énergie électrique en énergie lumineuse grâce aux jonctions PN. Selon la longueur d'onde, elle peut être classée en diode laser, diode électroluminescente infrarouge et diode électroluminescente visible, souvent désignée sous le nom de LED.

La diode possède une conductivité unidirectionnelle, ce qui signifie que le courant circulera dans le sens indiqué par la flèche sur le symbole du circuit. Vous devez fournir une tension positive à l'anode et une tension négative à la cathode pour que la LED s'allume.

.. image:: img/led_symbol.png


Une LED possède deux broches. La broche la plus longue est l'anode, et la plus courte est la cathode. Faites attention à ne pas les inverser. En raison de la chute de tension fixe dans la LED, elle ne peut pas être connectée directement au circuit, car la tension d'alimentation pourrait excéder cette chute et endommager la LED. La tension directe des LED rouges, jaunes et vertes est de 1,8 V, tandis que celle des LED blanches est de 2,6 V. La plupart des LED peuvent supporter un courant maximal de 20 mA, c'est pourquoi il est nécessaire de connecter une résistance limitatrice de courant en série.

La formule pour calculer la valeur de la résistance est la suivante :

    R = (Vsupply – VD)/I

**R** représente la valeur de la résistance limitatrice de courant, **Vsupply** la tension d'alimentation, **VD** la chute de tension et **I** le courant de fonctionnement de la LED.

Voici une introduction détaillée sur la LED : `LED - Wikipedia <https://en.wikipedia.org/wiki/Light-emitting_diode>`_.

**Exemple**

* :ref:`ar_led` (Arduino Project)
* :ref:`breathing_led` (Scratch Project)
* :ref:`table_lamp` (Scratch Project)
