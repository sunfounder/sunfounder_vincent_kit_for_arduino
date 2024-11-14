.. note:: 

    Bonjour, bienvenue dans la communauté des passionnés de SunFounder Raspberry Pi, Arduino et ESP32 sur Facebook ! Rejoignez-nous pour explorer davantage le Raspberry Pi, l’Arduino et l’ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Bénéficiez de l'aide de notre communauté et de notre équipe pour résoudre les problèmes après-vente et les défis techniques.
    - **Apprenez et partagez** : Échangez des astuces et des tutoriels pour développer vos compétences.
    - **Aperçus exclusifs** : Soyez parmi les premiers à découvrir nos nouveaux produits et annonces.
    - **Réductions spéciales** : Profitez de remises exclusives sur nos nouveaux produits.
    - **Promotions festives et cadeaux** : Participez aux concours et promotions de saison.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] pour nous rejoindre dès aujourd'hui !

.. _tumbler:

2.7 Culbuto
=============

Nous allons maintenant utiliser un interrupteur à bascule pour contrôler un personnage culbuto sur la scène. Lorsque l'interrupteur s'incline, le culbuto s'incline également.

.. Image:: img/8_tumbler.png

Vous Apprendrez
---------------------

- Le fonctionnement de l'interrupteur à bascule
- Bloc [`si alors sinon <https://en.scratch-wiki.info/wiki/If_()_Then,_Else_(block)#:~:text=The%20if%20()%20then%2C%20else,the%20second%20C%20will%20activate.>`_]
- Ajouter un lutin externe

Construire le Circuit
------------------------

L'interrupteur à bascule utilisé ici contient une bille en métal. Lorsqu'il est droit, les deux broches sont connectées ; lorsqu'il est incliné, elles se séparent.

Construisez le circuit comme suit :

* Connectez une broche de l'interrupteur à bascule à la broche 12, reliée à une résistance de tirage vers le bas et un condensateur de 0,1uF (104) (utilisé pour éliminer les interférences et produire un signal stable lorsque l'interrupteur bascule).
* Connectez l'autre extrémité de la résistance et du condensateur à la terre (GND) et l'autre broche de l'interrupteur à 5V.

.. image:: img/circuit/tilt_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_tilt`
* :ref:`cpn_resistor`
* :ref:`cpn_capacitor`

Programmation
------------------

**1. Personnalisez le lutin**

Sélectionnez le lutin **Tobi** et accédez à la page **Costumes**. Cliquez sur l'icône en bas à gauche, puis sélectionnez **Téléverser un costume**.

.. image:: img/8_upload.png

Ouvrez ensuite ``tumbler1.png`` et ``tumbler2.png`` dans le dossier ``sunfounder_vincent_kit_for_arduino\scratch\picture``. Assurez-vous d'avoir téléchargé le matériel requis depuis `github <https://github.com/sunfounder/sunfounder_vincent_kit_for_arduino/archive/refs/heads/master.zip>`_.

.. image:: img/8_add_tumbler.png

Supprimez le costume associé au lutin **Tobi** et renommez-le **Culbuto**. Maintenant que nous avons personnalisé un nouveau lutin nommé Culbuto, nous pouvons commencer à programmer.

.. image:: img/8_rename.png

**2. Inclinons l'interrupteur**

Si la valeur de la broche 12 est lue comme 0 (l’interrupteur est incliné), changez le costume du lutin en **tumbler2**, qui représente l'état incliné. Sinon, changez le costume du lutin en **tumbler1**, qui représente l'état droit.

* [`si alors sinon <https://en.scratch-wiki.info/wiki/If_()_Then,_Else_(block)#:~:text=The%20if%20()%20then%2C%20else,the%20second%20C%20will%20activate.>`_]: Ce bloc vérifie sa condition booléenne ; si elle est vraie, le code contenu dans le premier espace C sera activé ; si elle est fausse, le code dans le deuxième espace C s'activera.
* [=]: Ce bloc est utilisé pour comparer l'égalité des valeurs de chaque côté du signe égal, dans la palette **Opérateurs**.

.. image:: img/8_script.png
