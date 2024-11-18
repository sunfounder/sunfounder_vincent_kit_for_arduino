.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_servo:

Servo
===========

.. image:: img/servo.png
    :align: center

Un servo está compuesto generalmente por las siguientes partes: carcasa, eje, sistema de engranajes, potenciómetro, motor de corriente continua (DC) y placa integrada.

Funciona de la siguiente manera: el microcontrolador envía señales PWM al servo, y luego la placa integrada dentro del servo recibe estas señales a través del pin de señal y controla el motor interno para girar. Como resultado, el motor acciona el sistema de engranajes, que a su vez mueve el eje después de la reducción de velocidad. El eje y el potenciómetro del servo están conectados entre sí. Cuando el eje rota, mueve el potenciómetro, el cual emite una señal de voltaje a la placa integrada. La placa determina entonces la dirección y la velocidad de rotación en función de la posición actual, lo que permite que el servo se detenga exactamente en la posición definida y se mantenga allí.

.. image:: img/servo_internal.png
    :align: center

El ángulo está determinado por la duración de un pulso que se aplica al cable de control. Esto se denomina Modulación por Ancho de Pulso (PWM). El servo espera recibir un pulso cada 20 ms. La longitud del pulso determinará cuánto girará el motor. Por ejemplo, un pulso de 1.5 ms hará que el motor gire a la posición de 90 grados (posición neutra).
Cuando se envía un pulso a un servo menor a 1.5 ms, el servo rota a una posición y mantiene su eje de salida a un número determinado de grados en sentido antihorario desde el punto neutro. Cuando el pulso es más amplio que 1.5 ms, ocurre lo contrario. La anchura mínima y máxima del pulso que hará que el servo gire a una posición válida son funciones específicas de cada servo. Generalmente, el pulso mínimo será de aproximadamente 0.5 ms de ancho y el máximo de 2.5 ms.

.. image:: img/servo_duty.png
    :width: 600
    :align: center

**Ejemplo**

* :ref:`ar_servo` (Proyecto Arduino)
* :ref:`pendulum` (Proyecto Scratch)
