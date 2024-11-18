.. note::

    Hola, ¡bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi & Arduino & ESP32 en Facebook! Sumérgete en el mundo de Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirte?**

    - **Soporte experto**: Resuelve problemas postventa y desafíos técnicos con la ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Preestrenos exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones festivas y sorteos**: Participa en sorteos y promociones especiales de temporada.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy.

.. _dragon:

2.21 JUEGO - Matar al Dragón
===============================

Aquí usaremos el joystick para jugar a un juego de matar al dragón.

Al hacer clic en el verde, el dragón flotará arriba y abajo en el lado derecho y lanzará fuego intermitentemente. Necesitas usar el joystick para controlar el movimiento de la varita mágica y lanzar ataques estelares contra el dragón, mientras evitas las llamas que dispara, y finalmente derrotarlo.

.. image:: img/19_dragon.png

Construye el Circuito
-------------------------

Un joystick es un dispositivo de entrada compuesto por un palo que pivota sobre una base y reporta su ángulo o dirección al dispositivo que está controlando. Los joysticks suelen utilizarse para controlar videojuegos y robots.

Para comunicar un rango completo de movimiento a la computadora, un joystick necesita medir la posición del palo en dos ejes: el eje X (izquierda a derecha) y el eje Y (arriba a abajo).

Las coordenadas del movimiento del joystick se muestran en la siguiente figura.

.. note::

    * La coordenada x va de izquierda a derecha, y el rango es 0-1023.
    * La coordenada y va de arriba a abajo, y el rango es 0-1023.

.. image:: img/16_joystick.png

Ahora construye el circuito según el siguiente diagrama.

.. image:: img/circuit/joystick_circuit.png


* :ref:`cpn_breadboard`
* :ref:`cpn_joystick`

Programación
------------------

**1. Dragón**

Agrega el fondo **Woods** mediante el botón **Choose a Backdrop**.

.. image:: img/19_dragon01.png

* Elimina el sprite predeterminado y agrega el sprite **Dragon**.

.. image:: img/19_dragon0.png

* Ve a la página **Costumes** y voltea horizontalmente los disfraces dragon-b y dragon-c.

.. image:: img/19_dragon1.png

* Ajusta el tamaño al 50%.

.. image:: img/19_dragon3.png

* Crea una variable llamada **dragon** para registrar los puntos de vida del dragón y establece el valor inicial en 50.

.. image:: img/19_dragon2.png

* Cambia el disfraz del sprite al **dragon-b** y haz que el sprite **Dragon** se mueva arriba y abajo en un rango.

.. image:: img/19_dragon4.png

* Agrega un sprite **Lightning** como el fuego que lanza el sprite **Dragon**. Necesitas rotarlo 90° en el sentido de las agujas del reloj en la página Costumes, para que el sprite **Lightning** se mueva en la dirección correcta.

.. note::
    Al ajustar el disfraz del sprite **Lightning**, puede que lo desplaces fuera del centro. ¡Esto debe evitarse! El punto central debe estar justo en el medio del sprite.

.. image:: img/19_lightning1.png

* Ajusta el disfraz **dragon-c** del sprite **Dragon** para que su punto central esté en la cola del fuego. Esto hará que las posiciones del sprite **Dragon** y el sprite **Lightning** sean correctas, evitando que **Lightning** salga de los pies del dragón.

.. image:: img/19_dragon5.png

* De manera correspondiente, **dragon-b** debe hacer que la cabeza del dragón coincida con el punto central.

.. image:: img/19_dragon5.png

* Ajusta el tamaño y la orientación del sprite **Lightning** para que la imagen sea más armoniosa.

.. image:: img/19_lightning3.png

* Ahora programa el sprite **Lightning** para que siga al sprite **Dragon** todo el tiempo. Haz clic en la bandera verde y verás al **Dragon** moverse con el rayo en su boca.

.. image:: img/19_lightning4.png

* Vuelve al sprite **Dragon** y programa que expulse fuego. Crea un clon del sprite **Lightning** para simular el fuego.

.. image:: img/19_dragon6.png

* Haz que el clon de **Lightning** dispare en un ángulo aleatorio, rebote en las paredes y desaparezca tras un tiempo.

.. image:: img/19_lightning5.png

* En el sprite **Lightning**, oculta su cuerpo y muestra el clon.

.. image:: img/19_lightning6.png

Ahora el dragón puede moverse y lanzar fuego.


**2. Varita**

* Crea un sprite **Wand** y rota su dirección a 180 para que apunte a la derecha.

.. image:: img/19_wand1.png

* Crea una variable **hp** para registrar sus puntos de vida, estableciendo inicialmente 3. Luego lee los valores del joystick para controlar el movimiento de la varita.

.. image:: img/19_wand2.png

* La varita también tiene su "bala mágica": ¡una estrella! Crea un sprite **Star**, ajusta su tamaño y programa que siempre siga al sprite **Wand**, limitando la cantidad de estrellas a tres.

.. image:: img/19_star2.png

* Programa que la varita dispare estrellas automáticamente, creando clones como el dragón hace con el fuego.

.. image:: img/19_wand3.png

* Programa que el clon de **Star** gire y dispare hacia la derecha, desaparezca al salir del escenario y restablezca la cantidad de estrellas.

.. image:: img/19_star3.png

Ahora la varita dispara estrellas mágicas.

**3. ¡Combate!**

El dragón y la varita interactúan con las siguientes reglas:


1. Si la varita toca al dragón, será empujada y perderá puntos de vida.
2. Si el rayo golpea la varita, esta perderá puntos de vida.
3. Si la estrella golpea al dragón, este perderá puntos de vida.


* Programa que la varita pierda puntos de vida al tocar al dragón.

* Si la **Varita** golpea al **Dragón**, será empujada hacia atrás y perderá puntos de vida.

.. image:: img/19_wand4.png

* Programa que el rayo haga un sonido y desaparezca al golpear la varita, haciéndole perder puntos de vida.

.. image:: img/19_lightning7.png

* Programa que la estrella emita un sonido y desaparezca al golpear al dragón, reduciendo sus puntos de vida.

.. image:: img/19_star4.png


**4. Escenario**

El juego termina cuando uno de los personajes pierde.

* Agrega el fondo **Blue Sky** y escribe "¡WIN!" para indicar que el dragón ha sido derrotado.

.. image:: img/19_sky0.png

* Modifica el fondo en blanco para representar el fracaso del juego con un fondo oscuro.

.. image:: img/19_night.png

* Programa los cambios de fondo según el estado del juego. Al hacer clic en la bandera verde, cambia al fondo **Woods**. Si los puntos de vida del dragón son menores a 1, cambia a **Blue Sky**; si los puntos de vida de la varita son menores a 1, cambia a **Night**.

.. image:: img/19_sky1.png
