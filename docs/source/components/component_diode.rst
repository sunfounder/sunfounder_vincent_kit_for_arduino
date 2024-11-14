.. note:: 

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook, animée par SunFounder ! Plongez plus profondément dans les univers de Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et vos défis techniques avec l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez astuces et tutoriels pour améliorer vos compétences.
    - **Aperçus exclusifs** : Bénéficiez d'un accès anticipé aux annonces de nouveaux produits et aperçus.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos produits les plus récents.
    - **Promotions festives et concours** : Participez à des concours et promotions pendant les fêtes.

    👉 Prêt à explorer et à créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _cpn_diode:

Diode
=================


Une diode est un composant électronique à deux électrodes. Elle permet au courant de circuler uniquement dans une direction, 
ce qui est souvent appelé la fonction "redresseuse". Ainsi, on peut considérer la diode comme une version électronique d'une vanne anti-retour.

En raison de sa conductivité unidirectionnelle, la diode est utilisée dans presque tous les circuits électroniques de complexité variée. C'est l'un des premiers dispositifs à semi-conducteurs et elle a un large éventail d'applications.

Selon son usage, elle peut être classée en diodes détectrices, diodes redresseuses, diodes limiteuses, diodes de régulation de tension, etc.

Les diodes redresseuses et les diodes de régulation de tension sont incluses dans ce kit.


**Diode Redresseuse**

.. image:: img/in4007_diode.png
.. image:: img/symbol_rectifier_diode.png
    :width: 200

Une diode redresseuse est une diode à semi-conducteur, utilisée pour redresser le courant alternatif (CA) en courant continu (CC) via une application de pont redresseur. L'alternative des diodes redresseuses passant par la barrière Schottky est principalement utilisée dans l'électronique numérique. Cette diode est capable de conduire des courants allant de quelques mA à quelques kA et des tensions allant jusqu'à quelques kV.

La conception des diodes redresseuses peut être réalisée avec du silicium, et elles sont capables de conduire des courants électriques élevés. Bien qu'elles ne soient pas très connues, certaines diodes à base de Ge (germanium) ou d'arséniure de gallium sont encore utilisées. Les diodes Ge ont une tension inverse plus faible ainsi qu'une température de jonction maximale plus basse. L'avantage des diodes Ge par rapport aux diodes Si réside dans leur faible tension seuil lorsqu'elles fonctionnent en polarisation directe.

* `1N400x general-purpose diode  - Wikipedia <https://en.wikipedia.org/wiki/1N400x_general-purpose_diode>`_


**Diode Zener**

Une diode Zener est un type particulier de diode conçue pour permettre de manière fiable le passage du courant "en sens inverse" lorsqu'une certaine tension inverse, appelée tension Zener, est atteinte.

Cette diode est un dispositif à semi-conducteur qui présente une très haute résistance jusqu'à la tension de claquage inverse critique. À ce point critique, la résistance inverse est réduite à une très faible valeur, et le courant augmente tandis que la tension reste constante dans cette région de faible résistance.

.. image:: img/zener_diode.png
.. image:: img/symbol-zener-diode.jpg


* `Zener diode - Wikipedia <https://en.wikipedia.org/wiki/Zener_diode>`_


