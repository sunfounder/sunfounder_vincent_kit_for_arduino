.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_sound:

Módulo Sensor de Sonido
==============================

.. image:: img/image222.png
    :width: 500
    :align: center 

Un sensor de sonido se define como un módulo que detecta ondas sonoras a través de su intensidad y las convierte en señales eléctricas.

Este módulo se puede utilizar en aplicaciones de seguridad, interruptores y monitoreo. Su precisión se puede ajustar fácilmente para mayor comodidad en el uso.

Utiliza un micrófono que suministra la entrada a un amplificador, detector de picos y buffer. Cuando el sensor detecta un sonido, procesa una señal de voltaje de salida que se envía a un microcontrolador para realizar el procesamiento necesario.

Este módulo tiene dos salidas:

* **AO**: salida analógica, señal de voltaje de salida en tiempo real del micrófono.
* **DO**: cuando la intensidad del sonido alcanza un cierto umbral, la salida es una señal de nivel alto o bajo. La sensibilidad del umbral se puede ajustar girando el potenciómetro.

**Ejemplo**

* :ref:`ar_sound` (Proyecto Arduino)
* :ref:`blow_ball` (Proyecto Scratch)
