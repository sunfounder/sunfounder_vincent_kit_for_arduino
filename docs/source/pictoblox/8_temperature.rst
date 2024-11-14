.. note:: 

    Bonjour, bienvenue dans la communauté des passionnés de SunFounder Raspberry Pi, Arduino et ESP32 sur Facebook ! Rejoignez-nous pour explorer plus en profondeur le Raspberry Pi, l’Arduino et l’ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez les problèmes après-vente et les défis techniques avec l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez des conseils et des tutoriels pour perfectionner vos compétences.
    - **Aperçus exclusifs** : Soyez parmi les premiers à découvrir nos nouveaux produits et annonces.
    - **Réductions spéciales** : Profitez de remises exclusives sur nos nouveaux produits.
    - **Promotions festives et cadeaux** : Participez aux concours et promotions de saison.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] pour nous rejoindre dès aujourd'hui !

.. _low_temperature:

2.8 Alarme de Basse Température
===================================

Dans ce projet, nous allons créer un système d'alarme de basse température. Lorsque la température descend en dessous d'un certain seuil, le lutin **Flocon de neige** apparaîtra sur la scène.

.. image:: img/9_tem.png

Vous Apprendrez
---------------------

- Principe de fonctionnement de la thermistance
- Utilisation de plusieurs variables et opérations de soustraction

Construire le Circuit
------------------------

Une thermistance est un type de résistance dont la valeur dépend fortement de la température, davantage que pour les résistances standards. Il en existe deux types : les PTC (la résistance augmente avec la température) et les NTC (la résistance diminue avec la température).

Construisez le circuit selon le schéma suivant :

Connectez une extrémité de la thermistance à la terre (GND), l’autre extrémité à A0, et un résistor de 10K en série à 5V.

Ici, nous utilisons une thermistance NTC. Ainsi, lorsque la température augmente, la résistance de la thermistance diminue, la tension sur A0 diminue, et la valeur obtenue depuis A0 diminue également ; inversement, elle augmente lorsque la température baisse.

.. image:: img/circuit/thermistor_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_thermistor` 
* :ref:`cpn_resistor`

Programmation
------------------

**1. Sélectionnez un lutin**

Supprimez le lutin par défaut, puis cliquez sur le bouton **Choisir un lutin** en bas à droite de la zone des lutins. Entrez **Flocon de neige** dans la barre de recherche, puis cliquez pour l’ajouter.

.. image:: img/9_snow.png

**2. Créez 2 variables**

Créez deux variables, **avant** et **actuel**, pour stocker les valeurs d'A0 dans différentes situations.

.. image:: img/9_va.png

**3. Lisez la valeur de A0**

Lorsque le drapeau vert est cliqué, la valeur de A0 est lue et stockée dans la variable **avant**.

.. image:: img/9_before.png

**4. Lisez de nouveau la valeur de A0**

Dans [pour toujours], lisez la valeur de A0 et stockez-la dans la variable **actuel**.

.. image:: img/9_current.png

**5. Déterminer les variations de température**

À l'aide du bloc [si alors sinon], vérifiez si la valeur actuelle de A0 est supérieure de 50 à la valeur de **avant**, ce qui représente une baisse de température. À ce moment, faites apparaître le lutin **Flocon de neige** ; sinon, cachez-le.

* [-] & [>]: Opérateurs de soustraction et de comparaison de la palette **Opérateurs**.

.. image:: img/9_show.png