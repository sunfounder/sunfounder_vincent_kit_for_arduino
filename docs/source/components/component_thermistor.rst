.. note:: 

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook ! Plongez plus profondément dans l'univers du Raspberry Pi, de l'Arduino et de l'ESP32 avec d'autres passionnés.

    **Pourquoi rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et défis techniques avec l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez des astuces et des tutoriels pour améliorer vos compétences.
    - **Aperçus exclusifs** : Accédez en avant-première aux nouvelles annonces de produits et aperçus.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos produits les plus récents.
    - **Promotions festives et cadeaux** : Participez à nos jeux concours et promotions saisonnières.

    👉 Prêt à explorer et à créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _cpn_thermistor:

Thermistance
===============

.. image:: img/thermistor.png
    :width: 150
    :align: center

Une thermistance est un type de résistance dont la valeur varie fortement en fonction de la température, bien plus que dans les résistances classiques. Le terme est une combinaison des mots "thermique" et "résistance". Les thermistances sont largement utilisées comme limiteurs de courant d'appel, capteurs de température (généralement de type à coefficient de température négatif, ou NTC), protecteurs contre les surintensités réinitialisables, et éléments chauffants auto-régulants (généralement de type à coefficient de température positif, ou PTC).

* `Thermistor - Wikipedia <https://en.wikipedia.org/wiki/Thermistor>`_

Voici le symbole électronique d'une thermistance.

.. image:: img/thermistor_symbol.png
    :width: 300
    :align: center

Les thermistances se déclinent en deux types fondamentaux opposés :

* Les thermistances NTC (Coefficient de Température Négatif) : leur résistance diminue à mesure que la température augmente, généralement en raison de l'augmentation du nombre d'électrons de conduction excités par l'agitation thermique dans la bande de valence. Les NTC sont couramment utilisés comme capteurs de température ou en série avec un circuit comme limiteur de courant d'appel.
* Les thermistances PTC (Coefficient de Température Positif) : leur résistance augmente à mesure que la température monte, généralement en raison de l'augmentation des vibrations thermiques du réseau cristallin, en particulier celles causées par les impuretés et les imperfections. Les thermistances PTC sont couramment installées en série avec un circuit pour protéger contre les conditions de surintensité, servant de fusibles réinitialisables.

Dans ce kit, nous utilisons une thermistance NTC. Chaque thermistance possède une résistance nominale. Ici, elle est de 10 kΩ, mesurée à 25 °C.

Voici la relation entre la résistance et la température :

    RT = RN * expB(1/TK – 1/TN)   

* **RT** est la résistance de la thermistance NTC à la température TK.
* **RN** est la résistance de la thermistance NTC à la température de référence TN. Ici, la valeur de RN est de 10 kΩ.
* **TK** est la température en Kelvin, l'unité est K. Ici, la valeur de TK est 273,15 + température en °C.
* **TN** est la température de référence en Kelvin, l'unité est également K. Ici, la valeur de TN est 273,15 + 25.
* **B (bêta)** est la constante du matériau de la thermistance NTC, également appelée indice de sensibilité thermique, dont la valeur numérique est de 3950.
* **exp** est l'abréviation de la fonction exponentielle, et la base du logarithme naturel e vaut environ 2,7.

En utilisant cette formule, TK=1/(ln(RT/RN)/B+1/TN), vous pouvez obtenir la température en Kelvin, puis soustraire 273,15 pour obtenir la température en °C.

Cette relation est une formule empirique, valable seulement lorsque la température et la résistance se situent dans une plage effective.

**Exemple**

* :ref:`ar_thermistor` (Arduino Project)
* :ref:`low_temperature` (Scratch Project)
