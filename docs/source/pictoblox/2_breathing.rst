.. note:: 

    Bonjour, bienvenue dans la communauté des passionnés de SunFounder Raspberry Pi, Arduino et ESP32 sur Facebook ! Explorez plus en profondeur les univers de Raspberry Pi, Arduino et ESP32 avec d’autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et techniques grâce à l’aide de notre communauté et de notre équipe.
    - **Apprendre & Partager** : Échangez des conseils et des tutoriels pour enrichir vos compétences.
    - **Aperçus exclusifs** : Profitez d’un accès anticipé aux annonces de nouveaux produits.
    - **Réductions spéciales** : Bénéficiez de remises exclusives sur nos produits les plus récents.
    - **Promotions festives et cadeaux** : Participez à des concours et promotions festives.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] pour nous rejoindre dès aujourd'hui !

.. _breathing_led:

2.2 LED Respirante
========================

Utilisons maintenant une autre méthode pour contrôler la luminosité de la LED. Contrairement au projet précédent, la luminosité de la LED diminue lentement jusqu’à disparaître.

Lorsque le lutin sur la scène est cliqué, la luminosité de la LED augmente progressivement pour ensuite s'éteindre instantanément.

.. image:: img/3_ap.png

Ce Que Vous Apprendrez
------------------------

- Régler la valeur de sortie de la broche PWM
- Créer des variables
- Modifier la luminosité d'un lutin

Construire le Circuit
--------------------------

Ce projet utilise le même circuit que celui du projet précédent :ref:`table_lamp`, mais au lieu d’utiliser HIGH/LOW pour allumer ou éteindre les LED, ce projet utilise le signal `PWM - Wikipedia <https://en.wikipedia.org/wiki/Pulse-width_modulation>`_ pour éclairer ou atténuer progressivement la LED.

La plage de signal PWM est de 0 à 255. Sur la carte Arduino Uno, les broches 3, 5, 6, 9, 10, 11 peuvent émettre un signal PWM ; sur la Mega2560, les broches 2 à 13, 44 à 46 peuvent émettre un signal PWM.

.. image:: img/circuit/led_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_led`
* :ref:`cpn_resistor`

Programmation
------------------

**1. Sélectionner un lutin**

Supprimez le lutin par défaut, cliquez sur le bouton **Choisir un lutin** dans le coin inférieur droit de la zone des lutins, entrez **button3** dans la barre de recherche, puis cliquez pour l’ajouter.

.. image:: img/3_sprite.png

**2. Création d'une variable**

Créez une variable appelée **pwm** pour stocker la valeur de variation du pwm.

Cliquez sur la palette **Variables** et sélectionnez **Créer une variable**.

.. image:: img/3_ap_va.png

Entrez le nom de la variable ; il peut être librement choisi, mais il est recommandé d’utiliser un nom décrivant sa fonction. Le type de données est numérique et pour tous les lutins.

.. image:: img/3_ap_pwm.png

Une fois créée, vous verrez **pwm** dans la palette **Variables** en état coché, ce qui signifie que cette variable apparaîtra sur la scène. Vous pouvez essayer de décocher pour vérifier si pwm est toujours visible sur la scène.

.. image:: img/3_ap_0.png

**3. Définir l'état initial**

Lorsque le lutin **button3** est cliqué, changez son costume en **button-b** (état cliqué), et définissez la valeur initiale de la variable **pwm** à 0.

* [définir pwm à 0] : de la palette **Variables**, utilisée pour définir la valeur de la variable.

.. image:: img/3_ap_brightness.png

**4. Faire augmenter progressivement la luminosité de la LED**

Comme la plage de pwm est de 255, utilisez le bloc [répéter] pour accumuler la variable **pwm** jusqu'à 255 par incréments de 5, puis insérez-la dans le bloc [définir la broche PWM]. Vous verrez ainsi la LED s’éclairer progressivement.

* [changer pwm de 5] : de la palette **Variables**, permet d’incrémenter la variable d’une valeur spécifique à chaque répétition. Elle peut être positive ou négative, par exemple ici pwm est augmentée de 5 à chaque répétition.
* [définir la broche PWM] : de la palette **Arduino Uno**, utilisée pour régler la valeur de sortie de la broche pwm.

.. image:: img/3_ap_1.png

Enfin, changez le costume du bouton3 en **button-a** et ramenez la valeur de la broche PWM à 0, de sorte que la LED s'allume lentement, puis s'éteigne de nouveau.

.. image:: img/3_ap_2.png
