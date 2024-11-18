.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _light_alarm:

2.9 Reloj Alarma de Luz
=========================

En la vida cotidiana, existen diversos tipos de relojes alarma. Ahora, vamos a crear un reloj alarma controlado por la luz. Cuando llega la mañana, la intensidad de la luz aumenta y este reloj alarma te recordará que es hora de levantarte.

.. image:: img/10_clock.png

Lo que aprenderás
--------------------

- Principio de funcionamiento del fotoresistor.
- Detener la reproducción de sonidos y scripts en ejecución.



Construir el Circuito
-----------------------

Un fotoresistor o célula fotoeléctrica es un resistor variable controlado por la luz. La resistencia de un fotoresistor disminuye con el aumento de la intensidad de la luz incidente.

Construye el circuito según el siguiente diagrama:

Conecta un extremo del fotoresistor a 5V, el otro extremo a A0, y conecta una resistencia de 10K en serie con GND en este extremo.

Así, cuando la intensidad de luz aumenta, la resistencia del fotoresistor disminuye, la división de voltaje de la resistencia de 10K aumenta y el valor obtenido por A0 se hace mayor.

.. image:: img/circuit/photoresistor_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_photoresistor` 
* :ref:`cpn_resistor`

Programación
--------------

**1. Selecciona un sprite**

Elimina el sprite predeterminado, haz clic en el botón **Elegir un Sprite** en la esquina inferior derecha del área de sprites, escribe **campana** en el cuadro de búsqueda y haz clic para añadirlo.

.. image:: img/10_sprite.png

**2. Lee el valor de A0**

Crea dos variables **antes** y **actual**. Al hacer clic en la bandera verde, lee el valor de A0 y guárdalo en la variable **antes** como valor de referencia. En [por siempre], lee nuevamente el valor de A0 y guárdalo en la variable **actual**.

.. image:: img/10_reada0.png

**3. Haz un sonido**

Cuando el valor actual de A0 sea mayor que el valor de referencia por 50, lo que representa que la intensidad de luz actual supera el umbral, haz que el sprite emita un sonido.

.. image:: img/10_sound.png

**4. Gira el sprite**

Usa el bloque [girar] para hacer que el sprite **campana** gire hacia la izquierda y la derecha para lograr el efecto de alarma.

.. image:: img/10_turn.png

**5. Detén todo**

Detén la alarma después de que haya sonado por un tiempo.

.. image:: img/10_stop.png
