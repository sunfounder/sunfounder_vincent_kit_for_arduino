.. note::

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook, animée par SunFounder ! Explorez plus en profondeur l'univers du Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et défis techniques grâce à l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez des astuces et des tutoriels pour développer vos compétences.
    - **Aperçus exclusifs** : Bénéficiez d'un accès anticipé aux annonces de nouveaux produits et aperçus exclusifs.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos produits les plus récents.
    - **Promotions festives et concours** : Participez à des concours et promotions pendant les fêtes.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

Module Relais
==========================================

.. image:: img/relay_module.png
    :width: 400
    :align: center

Le module relais est un dispositif constitué d'un relais et d'un circuit simple permettant de contrôler des appareils fonctionnant à haute tension, tels que des appareils électroménagers, à l'aide d'une tension faible, comme 3.3V, provenant de la carte de commande.

CARACTÉRISTIQUES
-----------------------

* Sortie : 250VAC-10A, 125VAC-10A, 30VDC-10A, 28VDC-10A.
* Tension de fonctionnement : 5V, courant d'aspiration environ 70mA.
* Avec indicateur de signal
* Entrée haute et le relais se ferme, entrée basse et le relais s'ouvre.
* Utilisation du transistor 8050 pour piloter l'action du relais
* Avec des trous de montage pour vis
* Taille du PCB : 1,8 cm * 4,0 cm * 1,9 cm, poids 15g

BROCHES DE SORTIE
---------------------

.. image:: img/relay_pinout.jpg

**ENTRÉE**

Il dispose d'une barrette de 1×3 broches (pas de 2,54 mm) pour connecter l'alimentation (5V et 0V) et pour contrôler le relais. Les broches sont indiquées sur le PCB :

* **-** : GND
* **+** : VCC
* **S** : Broche de signal, utilisée pour contrôler ce relais. Entrée haute, le relais se ferme ; entrée basse, le relais s'ouvre.

**SORTIE**

Le module relais à 1 canal peut être considéré comme une série de commutateurs : 1 normalement ouvert (NO), 1 normalement fermé (NC) et 1 broche commune (COM).

* **COM** - Broche commune
* **NC** - Normalement fermé, dans ce cas NC est connecté avec COM lorsque la broche **S** est basse et déconnecté lorsque la broche **S** est haute.
* **NO** - Normalement ouvert, dans ce cas NO est déconnecté de COM lorsque la broche **S** est basse et connecté lorsque la broche **S** est haute.


COMMENT FONCTIONNE LE RELAIS ?
---------------------------------

Comme nous le savons, un relais est un dispositif qui permet de créer une 
connexion entre deux ou plusieurs points ou appareils en réponse à un signal 
d'entrée. Autrement dit, les relais assurent l'isolation entre le contrôleur 
et l'appareil, car les appareils peuvent fonctionner à la fois en courant 
alternatif (AC) et en courant continu (DC). Cependant, ils reçoivent des 
signaux d'un microcontrôleur qui fonctionne en DC, ce qui nécessite un relais 
pour établir la liaison. Le relais est extrêmement utile lorsque vous devez 
contrôler une grande quantité de courant ou de tension avec un petit signal 
électrique.

Il y a cinq parties dans chaque relais :

.. image:: img/relay142.jpeg

**Électro-aimant** - Il se compose d'un noyau en fer entouré d'une bobine de fils. 
Lorsque l'électricité y circule, il devient magnétique. C'est pourquoi il est 
appelé électro-aimant.

**Armature** - La bande magnétique mobile est appelée armature. Lorsque le courant 
circule à travers elle, la bobine est activée, produisant un champ magnétique utilisé 
pour faire ou défaire les points normalement ouverts (N/O) ou normalement fermés 
(N/C). L'armature peut être déplacée aussi bien par courant continu (DC) que par 
courant alternatif (AC).

**Ressort** - Lorsqu'aucun courant ne circule dans la bobine de l'électro-aimant, 
le ressort tire l'armature pour que le circuit ne soit pas complété.

Ensemble de contacts **électriques** - Il existe deux points de contact :

- Normalement ouvert - connecté lorsque le relais est activé, et déconnecté lorsqu'il est inactif.
- Normalement fermé - non connecté lorsque le relais est activé, et connecté lorsqu'il est inactif.

**Boîtier moulé** - Les relais sont recouverts de plastique pour les protéger.

Le principe de fonctionnement du relais est simple. Lorsque l'alimentation est 
fournie au relais, le courant commence à circuler dans la bobine de commande ; 
en conséquence, l'électro-aimant commence à s'activer. Ensuite, l'armature est 
attirée par la bobine, tirant le contact mobile vers le bas et le connectant 
aux contacts normalement ouverts. Le circuit avec la charge est alors alimenté. 
En coupant le circuit, un processus similaire se produit, l'armature étant tirée 
vers le haut pour se connecter aux contacts normalement fermés sous l'effet du 
ressort. Ainsi, l'activation et la désactivation du relais peuvent contrôler 
l'état d'un circuit de charge.

**Exemple**

* :ref:`ar_relay` (Arduino Project)
* :ref:`ar_overheat_monitor` (Arduino Project)