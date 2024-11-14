.. note::

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook, animée par SunFounder ! Plongez plus profondément dans l'univers du Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et défis techniques grâce à l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez des astuces et des tutoriels pour développer vos compétences.
    - **Aperçus exclusifs** : Bénéficiez d'un accès anticipé aux annonces de nouveaux produits et aperçus exclusifs.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos produits les plus récents.
    - **Promotions festives et concours** : Participez à des concours et promotions pendant les fêtes.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !
.. _cpn_rfid:

MFRC522 Module
=====================

**RFID**

L'identification par radiofréquence (RFID) fait référence à des technologies 
utilisant la communication sans fil entre un objet (ou étiquette) et un appareil 
interrogateur (ou lecteur) pour suivre et identifier automatiquement ces objets. 
La portée de transmission de l'étiquette est limitée à quelques mètres du lecteur. 
Il n'est pas nécessaire d'avoir une ligne de vue directe entre le lecteur et 
l'étiquette.

La plupart des étiquettes contiennent au moins un circuit intégré (CI) et une 
antenne. Le microprocesseur stocke des informations et gère la communication 
radiofréquence (RF) avec le lecteur. Les étiquettes passives n'ont pas de source 
d'énergie indépendante et dépendent d'un signal électromagnétique externe, 
fourni par le lecteur, pour alimenter leurs opérations. Les étiquettes actives 
contiennent une source d'énergie indépendante, comme une batterie. Elles peuvent 
ainsi avoir des capacités de traitement et de transmission accrues, ainsi qu'une 
portée plus grande.

.. image:: img/image230.png
    :align: center

**MFRC522**

Le MFRC522 est une puce intégrée pour la lecture et l'écriture de cartes. Elle 
est couramment utilisée dans les systèmes fonctionnant à 13,56 MHz. Lancée par 
la société NXP, cette puce est de faible tension, peu coûteuse et de petite 
taille, ce qui en fait un excellent choix pour les instruments intelligents et 
les dispositifs portables.

Le MFRC522 utilise un concept de modulation et démodulation avancé qui couvre 
toutes les méthodes et protocoles de communication sans contact passifs à 13,56 MHz. 
De plus, il prend en charge l'algorithme de cryptage CRYPTO1 pour vérifier les 
produits MIFARE. Le MFRC522 prend également en charge la série MIFARE pour une 
communication sans contact à haute vitesse, avec un taux de transmission 
bidirectionnelle de données pouvant atteindre 424 kbit/s. En tant que nouveau 
membre de la série des lecteurs de cartes hautement intégrés à 13,56 MHz, le 
MFRC522 est très similaire aux modèles existants MF RC500 et MF RC530, bien 
qu'il existe des différences notables. Il communique avec l'appareil hôte via 
une interface série, ce qui nécessite moins de câblage. Vous pouvez choisir entre 
les modes SPI, I2C et UART série (similaire à RS232), ce qui permet de réduire 
le nombre de connexions, de gagner de l'espace sur la carte PCB (taille plus 
petite) et de réduire les coûts.

**Exemple**

* :ref:`ar_rfid` (Arduino Project)
