.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _parrot:

2.17 JUEGO - Loro Saltarín
============================

En este proyecto, utilizaremos el módulo ultrasónico para jugar un juego de "loro saltarín".

Después de ejecutar el guion, el bambú verde se moverá lentamente de derecha a izquierda a una altura aleatoria. Coloca tu mano encima del módulo ultrasónico; si la distancia entre tu mano y el módulo ultrasónico es menor a 10 cm, el loro volará hacia arriba, de lo contrario, caerá hacia abajo. Debes controlar la distancia entre tu mano y el módulo ultrasónico para que el loro evite el bambú verde (**Paddle**). Si lo toca, el juego termina.

.. image:: img/15_parrot.png

Construir el Circuito
------------------------

Un sensor ultrasónico es un instrumento que mide la distancia a un objeto utilizando ondas de sonido ultrasónicas. 
Tiene dos sondas: una para enviar ondas ultrasónicas y otra para recibirlas, transformando el tiempo de envío y recepción en una distancia, detectando así la distancia entre el dispositivo y un obstáculo.

Construye el circuito según el siguiente diagrama.

.. image:: img/circuit/ultrasonic_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_ultrasonic`

Programación
---------------

El objetivo es usar el módulo ultrasónico para controlar la altura de vuelo del sprite **Parrot** mientras evita el sprite **Paddle**.


**1. Agregar un sprite**

Elimina el sprite predeterminado y utiliza el botón **Choose a Sprite** para agregar el sprite **Parrot**. Ajusta su tamaño al 50% y mueve su posición al centro izquierdo.

.. image:: img/15_sprite.png

Agrega el sprite **Paddle**, ajusta su tamaño al 150%, configura su ángulo en 180 y mueve su posición inicial a la esquina superior derecha.

.. image:: img/15_sprite1.png

Ve a la página **Costumes** del sprite **Paddle** y elimina el contorno.

.. image:: img/15_sprite2.png

**2. Guion para el Sprite Parrot**

Escribe el guion para el sprite **Parrot**, que estará en vuelo y cuya altitud será determinada por la distancia detectada por el módulo ultrasónico.

* Cuando se haga clic en la bandera verde, cambia el disfraz cada 0.2 segundos para que esté siempre en vuelo.

.. image:: img/15_parr1.png

* Lee el valor del módulo ultrasónico y guárdalo en la variable **distance** después de redondearlo con el bloque [round].

.. image:: img/15_parr2.png

* Si la distancia detectada es menor a 10 cm, aumenta la coordenada y en 50; el sprite **Parrot** volará hacia arriba. De lo contrario, disminuye la coordenada y en 40; el **Parrot** caerá.

.. image:: img/15_parr3.png

* Si el sprite **Parrot** toca el sprite **Paddle**, el juego termina y el guion se detiene.

.. image:: img/15_parr4.png


**3. Guion para el Sprite Paddle**

Escribe el guion para el sprite **Paddle**, que debe aparecer aleatoriamente en el escenario.

* Oculta el sprite **Paddle** cuando se haga clic en la bandera verde y clónalo al mismo tiempo. El bloque [`create clone of <https://en.scratch-wiki.info/wiki/Create_Clone_of_()_(block)>`_] es un bloque de control que crea un clon del sprite especificado.

.. image:: img/15_padd.png

* Cuando el sprite **Paddle** aparezca como un clon, su posición x será 220 (la más a la derecha) y su coordenada y será un valor aleatorio entre -125 y 125 (altura aleatoria).

.. image:: img/15_padd1.png

* Usa el bloque [repeat] para disminuir lentamente el valor de la coordenada x, haciendo que el clon del sprite **Paddle** se mueva lentamente de derecha a izquierda hasta desaparecer.

.. image:: img/15_padd2.png

* Clona un nuevo sprite **Paddle** y elimina el clon anterior.

.. image:: img/15_padd3.png