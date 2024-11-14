.. note:: 

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook, animée par SunFounder ! Plongez plus profondément dans les univers de Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et vos défis techniques avec l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez astuces et tutoriels pour améliorer vos compétences.
    - **Aperçus exclusifs** : Bénéficiez d'un accès anticipé aux annonces de nouveaux produits et aperçus.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos produits les plus récents.
    - **Promotions festives et concours** : Participez à des concours et promotions pendant les fêtes.

    👉 Prêt à explorer et à créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _cpn_humiture:

Module de Capteur d'Humidité et Température
=============================================

.. image:: img/dht11_pic.png
    :width: 400
    :align: center

Le capteur numérique de température et d'humidité DHT11 est un capteur composite qui fournit une sortie numérique calibrée pour la température et l'humidité. 
Il utilise une technologie de modules numériques dédiés ainsi qu'une technologie de détection de température et d'humidité pour garantir une fiabilité élevée et une excellente stabilité à long terme.

Ce capteur dispose de seulement trois broches : VCC, GND et DATA. 
Le processus de communication commence par l'envoi d'un signal de démarrage depuis la ligne DATA vers le DHT11, qui reçoit le signal et renvoie un signal de réponse. 
Ensuite, l'hôte reçoit le signal de réponse et commence à recevoir les données d'humidité et de température sous forme de 40 bits (8 bits pour l'entier de l'humidité + 8 bits pour la décimale de l'humidité + 8 bits pour l'entier de la température + 8 bits pour la décimale de la température + 8 bits pour la somme de contrôle).

.. image:: img/Dht11.png


* `DHT11 Datasheet <https://components101.com/sites/default/files/component_datasheet/DHT11-Temperature-Sensor.pdf>`_

**Exemple**


* :ref:`ar_humiture` (Arduino Project)
* :ref:`humiture` (Scratch Project)