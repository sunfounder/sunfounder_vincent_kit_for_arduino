.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _colorful_ball:

2.3 Bolas de Colores
======================

En este proyecto, haremos que los LEDs RGB muestren diferentes colores.

Al hacer clic en las bolas de diferentes colores en el área del escenario, el LED RGB se encenderá con diferentes colores.

.. image:: img/4_color.png

Lo que aprenderás
---------------------

- El principio de funcionamiento del LED RGB.
- Copiar sprites y seleccionar diferentes disfraces.
- Superposición de los tres colores primarios.


Construir el circuito
-----------------------

Un LED RGB integra tres LEDs (rojo, verde y azul) en una carcasa plástica transparente o semitransparente. Puede mostrar varios colores cambiando el voltaje de entrada en los tres pines y superponiéndolos, lo que, según estadísticas, puede crear 16,777,216 colores diferentes.

.. image:: img/4_rgb.png
    :width: 300

.. image:: img/circuit/rgb_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_rgb`
* :ref:`cpn_resistor`


Programación
----------------

**1. Seleccionar sprite**

Elimina el sprite predeterminado y luego elige el sprite **Ball**.

.. image:: img/4_ball.png

Duplica el sprite 5 veces.

.. image:: img/4_duplicate_ball.png

Selecciona diferentes disfraces para estos 5 sprites **Ball** y muévelos a las posiciones correspondientes.

.. note::

    El disfraz del sprite **Ball3** necesita cambiarse manualmente al color rojo.

.. image:: img/4_rgb1.png
    :width: 800

**2. Hacer que los LEDs RGB se iluminen con el color correspondiente**

Antes de comprender el código, debemos entender el `modelo de color RGB <https://es.wikipedia.org/wiki/Modelo_de_color_RGB>`_.

El modelo de color RGB es un modelo aditivo de colores en el que la luz roja, verde y azul se combinan de varias maneras para reproducir una amplia gama de colores.

Mezcla aditiva de colores: al añadir rojo y verde se obtiene amarillo; al añadir verde y azul se obtiene cian; al añadir azul y rojo se obtiene magenta; al añadir los tres colores primarios juntos se obtiene blanco.

.. image:: img/4_rgb_addition.png
  :width: 400

El código para que el LED RGB se encienda en amarillo es el siguiente.

.. image:: img/4_yellow.png


Cuando se hace clic en el sprite Ball (bola amarilla), configuramos el pin 11 en alto (LED rojo encendido), el pin 10 en alto (LED verde encendido) y el pin 9 en bajo (LED azul apagado), de modo que el LED RGB se ilumine en amarillo.

Puedes escribir códigos para otros sprites de la misma manera para que los LEDs RGB se enciendan con los colores correspondientes.

**3. Sprite Ball2 (celeste)**

.. image:: img/4_blue.png

**4. Sprite Ball3 (rojo)**

.. image:: img/4_red.png

**5. Sprite Ball4 (verde)**

.. image:: img/4_green.png

**6. Sprite Ball5 (morado)**

.. image:: img/4_purple.png



