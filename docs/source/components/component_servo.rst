.. note::

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook, animée par SunFounder ! Plongez plus profondément dans l'univers du Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et défis techniques grâce à l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez des astuces et des tutoriels pour développer vos compétences.
    - **Aperçus exclusifs** : Bénéficiez d'un accès anticipé aux annonces de nouveaux produits et aperçus exclusifs.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos produits les plus récents.
    - **Promotions festives et concours** : Participez à des concours et promotions pendant les fêtes.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _cpn_servo:

Servo
=========

.. image:: img/servo.png
    :align: center

Un servo est généralement composé des éléments suivants : boîtier, axe, système d'engrenages, potentiomètre, moteur à courant continu (DC) et carte embarquée.

Son fonctionnement est le suivant : Le microcontrôleur envoie des signaux PWM au servo, et la carte embarquée du servo reçoit ces signaux via la broche de signal et contrôle le moteur interne pour qu'il tourne. Le moteur entraîne ensuite le système d'engrenages, qui motive l'axe après réduction de la vitesse. L'axe et le potentiomètre du servo sont connectés ensemble. Lorsque l'axe tourne, il entraîne le potentiomètre, ce qui génère un signal de tension envoyé à la carte embarquée. La carte détermine alors la direction et la vitesse de rotation en fonction de la position actuelle, ce qui lui permet de s'arrêter précisément à la position définie et de maintenir cette position.

.. image:: img/servo_internal.png
    :align: center

L'angle est déterminé par la durée de l'impulsion appliquée au fil de commande. Cela s'appelle la modulation de largeur d'impulsion (PWM). Le servo attend de recevoir une impulsion toutes les 20 ms. La longueur de l'impulsion détermine la distance que le moteur tourne. Par exemple, une impulsion de 1,5 ms fera tourner le moteur jusqu'à la position de 90 degrés (position neutre).
Lorsque l'impulsion envoyée au servo est inférieure à 1,5 ms, le servo tourne vers une position et maintient son axe de sortie à un certain nombre de degrés dans le sens antihoraire par rapport au point neutre. Lorsque l'impulsion est plus large que 1,5 ms, l'effet inverse se produit. La largeur minimale et maximale de l'impulsion qui commandera le servo à se positionner valablement dépendent de chaque servo. En général, la largeur minimale de l'impulsion sera d'environ 0,5 ms et la largeur maximale sera de 2,5 ms.

.. image:: img/servo_duty.png
    :width: 600
    :align: center

**Exemple**

* :ref:`ar_servo` (Arduino Project)
* :ref:`pendulum` (Scratch Project)



