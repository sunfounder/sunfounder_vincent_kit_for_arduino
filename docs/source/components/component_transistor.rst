.. note:: 

    Bonjour et bienvenue dans la communauté des passionnés de Raspberry Pi, Arduino et ESP32 sur Facebook ! Explorez plus en profondeur l'univers du Raspberry Pi, de l'Arduino et de l'ESP32 avec d'autres passionnés.

    **Pourquoi rejoindre ?**

    - **Support d'experts** : Résolvez vos problèmes après-vente et défis techniques avec l'aide de notre communauté et de notre équipe.
    - **Apprendre et partager** : Échangez des astuces et des tutoriels pour développer vos compétences.
    - **Aperçus exclusifs** : Accédez en avant-première aux annonces de nouveaux produits et à des aperçus exclusifs.
    - **Réductions spéciales** : Profitez de réductions exclusives sur nos produits les plus récents.
    - **Promotions festives et jeux concours** : Participez à nos jeux concours et promotions spéciales pour les fêtes.

    👉 Prêt à explorer et créer avec nous ? Cliquez sur [|link_sf_facebook|] et rejoignez-nous dès aujourd'hui !

.. _cpn_transistor:

Transistor
============

.. image:: img/npn_pnp.png
    :width: 300

Un transistor est un dispositif à semi-conducteurs qui contrôle le courant. Il fonctionne en amplifiant un signal faible pour produire un signal à plus grande amplitude et est également utilisé comme interrupteur sans contact. 

Un transistor est une structure à trois couches composée de semi-conducteurs de type P et N. Ces couches forment trois régions internes. La région la plus fine au centre est la base ; les autres sont soit de type N, soit de type P – la région la plus petite, contenant une forte concentration de porteurs majoritaires, est l’émetteur, tandis que l’autre est la région collecteur. Cette composition permet au transistor de jouer le rôle d'amplificateur. 

De ces trois régions, trois bornes sont générées : la base (b), l’émetteur (e) et le collecteur (c). Elles forment deux jonctions P-N, à savoir la jonction émetteur et la jonction collecteur. La direction de la flèche dans le symbole du circuit du transistor indique la direction de la jonction émetteur. 

* `P–N junction - Wikipedia <https://en.wikipedia.org/wiki/P-n_junction>`_

En fonction du type de semi-conducteur, les transistors se divisent en deux groupes : NPN et PNP. D'après l'abréviation, on peut savoir que le transistor NPN est composé de deux semi-conducteurs de type N et d’un de type P, tandis que le PNP est l'inverse. Voir l'image ci-dessous. 

.. note::
    Le transistor s8550 est un PNP, tandis que le s8050 est un NPN. Ils se ressemblent beaucoup, il est donc nécessaire de vérifier attentivement leurs étiquettes. 

.. image:: img/transistor_symbol.png
    :width: 600

Lorsqu'un signal de niveau haut traverse un transistor NPN, celui-ci est activé. En revanche, un transistor PNP nécessite un signal de niveau bas pour être activé. Les deux types de transistors sont couramment utilisés pour des interrupteurs sans contact, comme dans cette expérience.

Placez l'étiquette face à vous, les broches orientées vers le bas. De gauche à droite, les broches sont l'émetteur (e), la base (b) et le collecteur (c).

.. image:: img/ebc.png
    :width: 150


* `S8050 Transistor Datasheet <https://datasheet4u.com/datasheet-pdf/WeitronTechnology/S8050/pdf.php?id=576670>`_
* `S8550 Transistor Datasheet <https://www.mouser.com/datasheet/2/149/SS8550-118608.pdf>`_


