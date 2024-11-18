.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _breathing_led:

2.2 LED Respirante
======================

Ahora usaremos otro método para controlar el brillo del LED. A diferencia del proyecto anterior, aquí el brillo del LED se reduce lentamente hasta desaparecer.

Cuando se hace clic en el sprite en el escenario, el brillo del LED aumenta lentamente y luego se apaga de manera instantánea.

.. image:: img/3_ap.png

Lo que aprenderás
--------------------

- Configurar el valor de salida del pin PWM.
- Crear variables.
- Cambiar el brillo del sprite.

Construir el circuito
-----------------------

Este proyecto utiliza el mismo circuito que el proyecto anterior :ref:`table_lamp`, pero en lugar de usar HIGH/LOW para encender o apagar los LEDs, este proyecto utiliza la señal `PWM - Wikipedia <https://en.wikipedia.org/wiki/Pulse-width_modulation>`_ para encender o atenuar gradualmente el LED.

El rango de la señal PWM es 0-255. En la placa Arduino Uno, los pines 3, 5, 6, 9, 10, y 11 pueden emitir señales PWM; en la Mega2560, los pines 2 - 13 y 44 - 46 pueden emitir señales PWM.

.. image:: img/circuit/led_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_led`
* :ref:`cpn_resistor`

Programación
------------

**1. Seleccionar un sprite**

Elimina el sprite predeterminado, haz clic en el botón **Elegir un Sprite** en la esquina inferior derecha del área de sprites, ingresa **button3** en el cuadro de búsqueda y haz clic para agregarlo.

.. image:: img/3_sprite.png

**2. Crear una variable**

Crea una variable llamada **pwm** para almacenar el valor del cambio de pwm.

Haz clic en la paleta **Variables** y selecciona **Crear una Variable**.

.. image:: img/3_ap_va.png

Introduce el nombre de la variable, puede ser cualquier nombre, pero se recomienda describir su función. El tipo de datos es número y para todos los sprites.

.. image:: img/3_ap_pwm.png

Una vez creada, verás **pwm** dentro de la paleta **Variables** y en estado marcado, lo que significa que esta variable aparecerá en el escenario. Puedes intentar desmarcarla para ver si pwm sigue presente en el escenario.

.. image:: img/3_ap_0.png

**3. Configurar el estado inicial**

Cuando se haga clic en el sprite **button3**, cambia el disfraz a **button-b** (estado presionado) y establece el valor inicial de la variable **pwm** en 0.

* [set pwm to 0]: desde la paleta **Variables**, se usa para configurar el valor de la variable.

.. image:: img/3_ap_brightness.png

**4. Hacer que el LED sea cada vez más brillante**

Dado que el rango de pwm es 255, utiliza el bloque [repeat] para que la variable **pwm** se acumule hasta 255 en incrementos de 5, y luego colócala en el bloque [set PWM pin], para que puedas ver cómo el LED se enciende lentamente.

* [change pwm by 5]: desde la paleta **Variables**, permite que la variable cambie un número específico cada vez. Puede ser un número positivo o negativo; positivo aumenta cada vez, negativo disminuye cada vez. Por ejemplo, aquí la variable pwm aumenta en 5 cada vez.
* [set PWM pin]: desde la paleta **Arduino Uno**, se usa para configurar el valor de salida del pin pwm.

.. image:: img/3_ap_1.png

Finalmente, cambia el disfraz de **button3** de nuevo a **button-a** y establece el valor del pin PWM en 0, para que el LED se encienda lentamente y luego se apague nuevamente.

.. image:: img/3_ap_2.png
