.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _table_lamp:

2.1 Lámpara de Mesa
======================

En esta actividad, conectaremos un LED en la placa de pruebas y usaremos el sprite para controlar el parpadeo del LED.

Cuando se hace clic en el sprite del botón en el escenario, el LED parpadeará 5 veces y luego se detendrá.

.. image:: img/2_button.png

Lo que aprenderás
---------------------

- Placa de pruebas, LEDs y resistencias.
- Construcción de un circuito en una placa de pruebas.
- Eliminar y seleccionar sprites.
- Cambiar disfraces.
- Configurar un número limitado de bucles repetitivos.

Construir el circuito
-----------------------

Sigue el diagrama a continuación para construir el circuito en la placa de pruebas.

Dado que el ánodo del LED (el pin más largo) está conectado al pin 9 a través de una resistencia de 220Ω, y el cátodo del LED está conectado a GND, puedes encender el LED dando un nivel alto al pin 9.

.. image:: img/circuit/led_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_led`
* :ref:`cpn_resistor`

Programación
---------------

La programación completa se divide en 3 partes: la primera es seleccionar el sprite deseado, la segunda es cambiar el disfraz del sprite para que parezca clicable, y la tercera es hacer que el LED parpadee.

**1. Seleccionar el sprite Button3**

Elimina el sprite Tobi existente usando el botón de eliminar en la esquina superior derecha y selecciona un nuevo sprite.

.. image:: img/2_tobi.png

Aquí, seleccionamos el sprite **Button3**.

.. image:: img/2_button3.png

Haz clic en "Costumes" en la esquina superior derecha y verás que el sprite Button3 tiene 2 disfraces. Configuramos **button3-a** como el estado liberado y **button3-b** como el estado presionado.

.. image:: img/2_button3_2.png

**2. Cambiar disfraces**

Cuando se hace clic en el sprite (**paleta Events**), este cambia al disfraz **button3-b** (**paleta Looks**).

.. image:: img/2_switch.png

**3. Hacer que el LED parpadee 5 veces**

Usa el bloque [Repeat] para que el LED parpadee 5 veces (ciclo HIGH -> LOW). Recuerda cambiar el pin 13 al pin 9 y, al final, vuelve a cambiar el disfraz a **button3-a**.

* [Repeat 10]: número limitado de bucles repetitivos, puedes establecer el número de repeticiones, desde la **paleta Control**.

.. image:: img/2_led_on_off.png




