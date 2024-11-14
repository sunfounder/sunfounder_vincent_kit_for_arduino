.. note:: 

    Bonjour et bienvenue dans la communauté des passionnés de SunFounder Raspberry Pi, Arduino et ESP32 sur Facebook ! Rejoignez d'autres passionnés pour explorer en profondeur les plateformes Raspberry Pi, Arduino et ESP32.

    **Pourquoi nous rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et vos défis techniques avec l'aide de notre communauté et de notre équipe.
    - **Apprenez et partagez** : Échangez des astuces et des tutoriels pour perfectionner vos compétences.
    - **Aperçus exclusifs** : Accédez en avant-première aux annonces de nouveaux produits et aux exclusivités.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos derniers produits.
    - **Promotions et concours festifs** : Participez à des concours et des promotions spéciales.

    👉 Prêt à explorer et à créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _pendulum:

2.11 Pendule
=====================

Dans ce projet, nous allons réaliser un pendule en forme de flèche, avec le servo-moteur qui suivra la rotation.

.. image:: img/12_pun.png

Vous Apprendrez
---------------------

- Comment fonctionne le servo et sa plage d’angle
- Dessiner un sprite et placer le point de pivot sur la queue.


Construire le Circuit
-----------------------

Un servo est un moteur avec un réducteur qui ne peut tourner que sur un angle 
de 180 degrés. Il est contrôlé en envoyant des impulsions électriques depuis 
votre carte de circuit, qui indiquent au servo la position à atteindre.

Le servo possède trois fils : le fil marron pour la masse (GND), le fil rouge 
pour le VCC (connecté à 3,3V), et le fil orange pour le signal. La plage de 
l'angle est de 0 à 180 degrés.

Construisez le circuit en suivant le schéma ci-dessous.

.. image:: img/circuit/servo_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_servo` 

Programmation
------------------

**1. Dessiner un sprite**

Supprimez le sprite par défaut, sélectionnez le bouton Sprite et cliquez sur **Peindre**, un sprite vierge **Sprite1** apparaîtra.

.. image:: img/12_paint1.png

Sur la page **Costumes** ouverte, utilisez l'outil **Ligne** pour dessiner une flèche.

.. note::

    * Assurez-vous de commencer à dessiner la flèche depuis le centre de la toile vers l’extérieur, pour que la flèche tourne autour du point central.
    * Maintenez la touche Maj enfoncée pour garder l'angle de la ligne droit ou à 45 degrés.

.. image:: img/12_paint2.png

Une fois le dessin terminé, le sprite **flèche** s'affichera sur la scène. Renommez-le **flèche**. Cliquez ensuite sur le numéro après **Direction** pour faire apparaître un cadran circulaire. Faites glisser cette flèche et vérifiez si le sprite **flèche** sur la scène pivote autour de la queue comme origine.

.. image:: img/12_paint3.png

Pour faire balancer le sprite **flèche** de gauche à droite, la plage d’angle doit être de -90 à -180, 180 à 90.

.. image:: img/12_paint4.png

.. image:: img/12_paint5.png

**2. Créer une variable**

Créez une variable appelée **servo**, qui stockera la valeur de l’angle et définissez sa valeur initiale à 270.

.. image:: img/12_servo.png

**3. Balancer de gauche à droite**

Maintenant, faites pivoter le sprite **flèche** de la position -90 degrés à gauche à 90 degrés à droite.

Avec le bloc [répéter], ajoutez -10 à la variable à chaque fois, et vous atteindrez 90 degrés en 18 répétitions. Ensuite, utilisez [orienter vers] pour faire pivoter le sprite flèche aux angles définis.

Étant donné que l'angle de rotation du sprite est de -180 à 180, les angles en dehors de cette plage sont convertis par la condition suivante.

* Si l'angle > 180, alors angle - 360.

.. image:: img/12_servo1.png

**4. Faire tourner le Servo**

Lorsque vous cliquez sur le drapeau vert, vous verrez la flèche se tourner rapidement vers la droite puis revenir à gauche. Utilisez le bloc [attendre secondes] pour ralentir la rotation. Utilisez également le bloc [mettre le servo à l’angle] pour orienter le servo connecté à la carte Arduino vers un angle spécifique.

.. image:: img/12_servo2.png

**5. Balancer de droite à gauche**

Utilisez la même méthode pour faire tourner lentement le servo et le sprite **flèche** de droite à gauche.

* Si l'angle > 180, alors angle - 360.

.. image:: img/12_servo3.png


