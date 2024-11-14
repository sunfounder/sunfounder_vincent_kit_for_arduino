.. note::

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook, animée par SunFounder ! Explorez plus en profondeur l'univers du Raspberry Pi, Arduino et ESP32 avec d'autres passionnés.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et défis techniques grâce à l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez des astuces et des tutoriels pour développer vos compétences.
    - **Aperçus exclusifs** : Bénéficiez d'un accès anticipé aux annonces de nouveaux produits et aperçus exclusifs.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos produits les plus récents.
    - **Promotions festives et concours** : Participez à des concours et promotions pendant les fêtes.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _cpn_stepper_motor:

Moteur pas à pas
========================

.. image:: img/stepper129.png
    :align: center

Les moteurs pas à pas, grâce à leur conception unique, peuvent être contrôlés 
avec une grande précision sans nécessiter de mécanismes de rétroaction. L'arbre 
du moteur, équipé d'une série d'aimants, est contrôlé par une série de bobines 
électromagnétiques qui sont alimentées positivement et négativement dans une 
séquence précise, déplaçant l'arbre en avant ou en arrière par petits "pas".

**Principe**

Il existe deux types de moteurs pas à pas : unipolaires et bipolaires. Il est 
très important de savoir avec quel type de moteur vous travaillez. Dans cette 
expérience, nous utiliserons un moteur pas à pas unipolaire.

Le moteur pas à pas utilisé ici est un modèle à quatre phases, qui fonctionne 
avec une alimentation en courant continu unipolaire. En alimentant toutes les 
enroulements de phase du moteur avec une séquence de timing appropriée, vous 
pouvez le faire tourner pas à pas. Voici le **schéma** d'un moteur pas à pas 
réactif à quatre phases :

**Voici comment fonctionne un moteur pas à pas à 4 phases :**

.. image:: img/stepper130.png
   :align: center

Dans la figure, au centre du moteur se trouve un rotor – un aimant permanent 
en forme d'engrenage. Autour du rotor, les dents numérotées de 0 à 5 sont 
visibles. Plus loin, on trouve huit pôles magnétiques, chaque paire de pôles 
opposés étant reliée par une bobine. Ces pôles forment ainsi quatre paires, 
de A à D, appelées phases. Le moteur dispose de quatre fils de connexion à 
raccorder aux interrupteurs SA, SB, SC et SD. Par conséquent, les quatre phases 
sont connectées en parallèle dans le circuit, et les deux pôles magnétiques 
d'une phase sont en série.


Au départ, l'interrupteur SB est alimenté, tandis que SA, SC et SD ne le sont 
pas, et les pôles magnétiques de la phase B s'alignent avec les dents 0 et 3 
du rotor. Simultanément, les dents 1 et 4 génèrent des dents décalées avec les 
pôles des phases C et D. Les dents 2 et 5 génèrent des dents décalées avec les 
pôles des phases D et A. Lorsque l'interrupteur SC est alimenté, tandis que SB, 
SA et SD sont éteints, le rotor tourne sous l'effet du champ magnétique de la 
bobine de la phase C, entre les dents 1 et 4. Ensuite, les dents 1 et 4 s'alignent 
avec les pôles magnétiques de la phase C. Pendant ce temps, les dents 0 et 3 
génèrent des dents décalées avec les pôles des phases A et B, et les dents 2 et 
5 génèrent des dents décalées avec les pôles des phases A et D. Ce processus se 
répète indéfiniment. En alimentant successivement les phases A, B, C et D, le 
rotor tournera dans cet ordre.


Le moteur pas à pas à quatre phases dispose de trois modes de fonctionnement : à 
quatre pas simples, à quatre pas doubles et à huit pas. L'angle de pas dans les 
modes à quatre pas simples et doubles est identique, mais le couple de commande 
est plus faible dans le mode à quatre pas simple. L'angle de pas du mode à huit 
pas est la moitié de celui des modes à quatre pas simples et doubles. Ainsi, le 
mode à huit pas permet de maintenir un couple élevé et d'améliorer la précision 
du contrôle. Dans cette expérience, nous utiliserons le mode à huit pas pour 
faire fonctionner le moteur pas à pas.

**Module ULN2003**

.. image:: img/uln2003.png
    :align: center

.. image:: img/uln338.png

Pour utiliser le moteur dans le circuit, une carte driver est nécessaire. Le 
driver de moteur pas à pas ULN2003 est un circuit inverseur à 7 canaux. Cela 
signifie que lorsque l'entrée est au niveau haut, la sortie du ULN2003 est au 
niveau bas, et vice versa. Si nous appliquons un niveau haut à IN1 et un niveau 
bas à IN2, IN3 et IN4, alors la sortie OUT1 sera au niveau bas, et toutes les 
autres sorties seront au niveau haut. Ainsi, D1 s'allume, l'interrupteur SA est 
alimenté, et le moteur pas à pas effectue un pas. Ce processus se répète continuellement. 
Il suffit de fournir au moteur pas à pas une séquence de timing spécifique pour 
qu'il effectue un mouvement pas à pas. Le module ULN2003 est utilisé ici pour 
fournir des séquences de timing spécifiques au moteur pas à pas.


**Exemple**

* :ref:`ar_stepper_motor` (Arduino Project)
* :ref:`ar_access_system` (Arduino Project)