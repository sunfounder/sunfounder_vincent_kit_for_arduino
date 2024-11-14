.. note:: 

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook, animée par SunFounder ! Explorez en profondeur Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et défis techniques grâce à l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez des astuces et des tutoriels pour développer vos compétences.
    - **Aperçus exclusifs** : Bénéficiez d'un accès anticipé aux annonces de nouveaux produits et aperçus exclusifs.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos produits les plus récents.
    - **Promotions festives et concours** : Participez à des concours et promotions pendant les fêtes.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _cpn_l293d:

L293D
=================

Le L293D est un pilote de moteur à 4 canaux intégré, conçu pour des charges à haute tension et à fort courant. 
Il est destiné à être connecté à des niveaux logiques standards DTL et TTL, et permet de piloter des charges inductives (comme les bobines de relais, les moteurs à courant continu et pas-à-pas) ainsi que des transistors de commutation d'alimentation, etc. 
Les moteurs à courant continu sont des dispositifs qui transforment l'énergie électrique en énergie mécanique. Ils sont largement utilisés dans les entraînements électriques en raison de leurs excellentes performances de régulation de la vitesse.

Voici l'illustration des broches du L293D. Ce composant dispose de deux broches d'alimentation (Vcc1 et Vcc2). 
Vcc2 est utilisée pour alimenter le moteur, tandis que Vcc1 alimente la puce. Étant donné qu'un moteur à courant continu de petite taille est utilisé ici, il convient de connecter les deux broches à +5V.

.. image:: img/l293d111.png

Voici la structure interne du L293D. 
La broche EN est une broche d'activation qui ne fonctionne qu'en niveau haut ; A représente l'entrée et Y la sortie. 
Vous pouvez voir la relation entre ces broches en bas à droite. 
Lorsque la broche EN est en niveau haut, si A est en niveau haut, Y sort un niveau haut ; si A est en niveau bas, Y sort un niveau bas. Lorsque la broche EN est en niveau bas, le L293D ne fonctionne pas.

.. image:: img/l293d334.png

* `L293D Datasheet <https://www.ti.com/lit/ds/symlink/l293d.pdf?ts=1627004062301&ref_url=https%253A%252F%252Fwww.ti.com%252Fproduct%252FL293D>`_

**Exemple**


* :ref:`ar_motor` (Arduino Project)
* :ref:`rotating_fan` (Scratch Project)