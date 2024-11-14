.. note:: 

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook, animée par SunFounder ! Plongez plus profondément dans les univers de Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et vos défis techniques avec l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez astuces et tutoriels pour améliorer vos compétences.
    - **Aperçus exclusifs** : Bénéficiez d'un accès anticipé aux annonces de nouveaux produits et aperçus.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos produits les plus récents.
    - **Promotions festives et concours** : Participez à des concours et promotions pendant les fêtes.

    👉 Prêt à explorer et à créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _cpn_matrix_module:

Module de Matrice LED
==============================

.. image:: img/max7219_module.jpg
    :width: 400
    :align: center

Il s'agit d'un module de matrice de points 8x8 à cathode commune, piloté par le MAX7219. La tension de fonctionnement du module est de 5V, ses dimensions sont de 50mmx32mmx15mm. Le côté gauche est le port d'entrée et le côté droit est le port de sortie, avec la possibilité de connecter plusieurs modules en cascade.

* **VCC** : Tension d'alimentation positive. À connecter à +5V.
* **GND** : Masse (les deux broches GND doivent être connectées).
* **DIN** : Entrée de données série. Les données sont chargées dans le registre à décalage interne de 16 bits à l'élévation de l'horloge (CLK).
* **CS** : Entrée de sélection de puce. Les données série sont chargées dans le registre à décalage lorsque CS est à l'état bas. Les 16 derniers bits de données série sont enregistrés à l'élévation de CS.
* **CLK** : Entrée de l'horloge série. Taux maximum de 10 MHz. À l'élévation de CLK, les données sont décalées dans le registre à décalage interne. À la descente de CLK, les données sont sorties par DOUT. Sur le MAX7221, l'entrée CLK est active uniquement lorsque CS est à l'état bas.

**MAX7219**

Le MAX7219 est un pilote d'affichage à cathode commune, compact et à entrée/sortie série, qui permet d'interfacer des microprocesseurs (µP) avec des affichages à 7 segments à LED (jusqu'à 8 chiffres), des afficheurs à barres ou 64 LED individuelles. Le MAX7219 intègre un décodeur de code BCD, un circuit de balayage multiplexé, des pilotes de segments et de chiffres, ainsi qu'une RAM statique de 8x8 qui stocke chaque chiffre.

Un seul résistor externe suffit pour définir le courant des segments pour toutes les LED. Le MAX7221 est compatible avec SPI™, QSPI™ et MICROWIRE™, et dispose de pilotes de segments à taux de variation limité pour réduire les interférences électromagnétiques (EMI).

Une interface série à 4 fils permet de connecter tous les µP courants. Les chiffres individuels peuvent être adressés et mis à jour sans avoir à réécrire l'ensemble de l'affichage. Les MAX7219/MAX7221 permettent également de choisir entre un décodage de code B ou un non-décodage pour chaque chiffre.

.. image:: img/max7219_sche.png

* `MAX7219 Datasheet <https://datasheets.maximintegrated.com/en/ds/MAX7219-MAX7221.pdf>`_


**Exemple**

* :ref:`ar_matrix_module` (Arduino Project)
