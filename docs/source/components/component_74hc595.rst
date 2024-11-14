.. note:: 

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook, animée par SunFounder ! Plongez plus profondément dans l'univers de Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et défis techniques avec l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez astuces et tutoriels pour améliorer vos compétences.
    - **Aperçus exclusifs** : Bénéficiez d'un accès anticipé aux annonces de nouveaux produits et aperçus.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos derniers produits.
    - **Promotions festives et concours** : Participez à des concours et promotions pendant les fêtes.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _cpn_74hc595:

74HC595
===========

.. image:: img/74HC595.png

Le 74HC595 est un registre à décalage 8 bits et un registre de stockage avec des sorties parallèles à trois états. Il convertit les entrées série en sorties parallèles, ce qui permet de conserver les ports d'E/S d'un microcontrôleur (MCU).

Lorsque MR (broche 10) est à un niveau haut et OE (broche 13) est à un niveau bas, les données sont entrées sur le front montant de SHcp et passent dans le registre mémoire au même moment. Si les deux horloges sont connectées ensemble, le registre à décalage prend toujours un temps d'avance d'un cycle par rapport au registre mémoire. Il existe une broche d'entrée série (Ds), une broche de sortie série (Q) et un bouton de réinitialisation asynchrone (niveau bas) dans le registre mémoire. Le registre mémoire émet un bus avec des sorties parallèles 8 bits et trois états. Lorsque OE est activé (niveau bas), les données du registre mémoire sont envoyées vers le bus.

* `74HC595 Datasheet <https://www.ti.com/lit/ds/symlink/cd74hc595.pdf?ts=1617341564801>`_

.. image:: img/74hc595_pin.png
    :width: 600

Broches du 74HC595 et leurs fonctions :

* **Q0-Q7** : Pins de sortie des données parallèles 8 bits, pouvant contrôler directement 8 LEDs ou 8 broches d'un afficheur 7 segments.
* **Q7’** : Broche de sortie série, connectée à DS d'un autre 74HC595 pour connecter plusieurs 74HC595 en série.
* **MR** : Broche de réinitialisation, active à un niveau bas.
* **SHcp** : Entrée d'horloge du registre à décalage. Sur le front montant, les données du registre à décalage se déplacent successivement d'un bit, c'est-à-dire que les données de Q1 passent à Q2, et ainsi de suite. Sur le front descendant, les données restent inchangées.
* **STcp** : Entrée d'horloge du registre de stockage. Sur le front montant, les données du registre à décalage passent dans le registre mémoire.
* **CE** : Broche d'activation de sortie, active à un niveau bas.
* **DS** : Broche d'entrée des données série.
* **VCC** : Broche de tension d'alimentation positive.
* **GND** : Broche de masse.

**Exemple**

* :ref:`ar_4_digit` (Arduino Project)
* :ref:`ar_pedestrian` (Arduino Project)



