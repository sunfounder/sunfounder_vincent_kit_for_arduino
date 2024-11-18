.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _moving_mouse:

2.5 Ratón en Movimiento
===========================

Hoy vamos a crear un juguete de ratón controlado por un potenciómetro.

Cuando se hace clic en la bandera verde, el ratón en el escenario avanza, y al girar el potenciómetro, el ratón cambiará la dirección de su movimiento.

.. image:: img/6_mouse.png

Lo que aprenderás
---------------------

- Principio de funcionamiento del potenciómetro.
- Leer el pin analógico y sus rangos.
- Mapear un rango a otro.
- Mover y cambiar la dirección de un sprite.

Construir el circuito
------------------------

El potenciómetro es un elemento resistivo con 3 terminales: los 2 pines laterales están conectados a 5V y GND, y el pin central está conectado a A0. Después de la conversión por el convertidor ADC de la placa Arduino, el rango de valores es 0-1023.

.. image:: img/circuit/potentiometer_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_potentiometer`


Programación
------------

**1. Elegir un sprite**

Elimina el sprite predeterminado, haz clic en el botón **Elegir un Sprite** en la esquina inferior derecha del área de sprites, escribe **mouse** en el cuadro de búsqueda y luego haz clic para añadirlo.

.. image:: img/6_sprite.png

**2. Crear una variable**

Crea una variable llamada **value** para almacenar el valor leído del potenciómetro.

Una vez creada, verás que **value** aparece dentro de la paleta **Variables** y está en estado marcado, lo que significa que esta variable aparecerá en el escenario.

.. image:: img/6_value.png

**3. Leer el valor de A0**

Almacena el valor leído de A0 en la variable **value**.

* [set my variable to 0]: Establece el valor de la variable.
* [read analog pin A0]: Lee el valor de A0~A5 en el rango de 0-1023.

.. image:: img/6_read_a0.png

Para poder leer continuamente, necesitas usar el bloque [forever]. Haz clic en este script para ejecutarlo, gira el potenciómetro en ambas direcciones y verás que el rango de valores es de 0-1023.

.. image:: img/6_1023.png

**4. Mover el sprite**

Usa el bloque [move steps] para mover el sprite, ejecuta el script y verás cómo el sprite se mueve del centro hacia la derecha.

.. image:: img/6_move.png

**5. Cambiar la dirección del sprite**

Ahora cambia la dirección del movimiento del sprite según el valor de A0. Dado que el rango de A0 es de 0-1023, pero la dirección de rotación del sprite es de -180~180, necesitas usar un bloque [map].

Además, añade [when green flag clicked] al principio para iniciar el script.

* [`point in direction <https://en.scratch-wiki.info/wiki/Point_in_Direction_()_(block)>`_]: Establece el ángulo de dirección del sprite, desde la paleta **Movimiento**.
* [map from to]: Mapea un rango a otro rango.

.. image:: img/6_direction.png
