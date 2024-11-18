.. note:: 

    Hola, ¡bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook! Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte de expertos**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y Comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_avoid:

Módulo de Evasión de Obstáculos
===========================================

.. image:: img/IR_Obstacle.png
   :width: 400
   :align: center

* **VCC**: Alimentación, 3.3 ~ 5V DC.
* **GND**: Tierra.
* **OUT**: Pin de señal, normalmente en nivel alto, y nivel bajo cuando se detecta un obstáculo.

El módulo de evasión de obstáculos por infrarrojos tiene una fuerte adaptabilidad a la luz ambiental. Cuenta con un par de tubos de transmisión y recepción de infrarrojos.

El tubo transmisor emite una frecuencia infrarroja. Cuando la dirección de detección encuentra un obstáculo, la radiación infrarroja es recibida por el tubo receptor. 
Después del procesamiento por el circuito comparador, el indicador verde se enciende y se genera una señal de nivel bajo.

La distancia de detección se puede ajustar mediante el potenciómetro, con un rango efectivo de 2-30 cm.

.. image:: img/IR_module.png
    :width: 600
    :align: center

**Ejemplo**

* :ref:`ar_avoid` (Proyecto Arduino)
* :ref:`shooting` (Proyecto Scratch)
