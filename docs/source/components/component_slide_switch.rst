.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_slide:

Interruptor Deslizante
===========================

.. image:: img/slide_switch.png
    :width: 150
    :align: center

Un interruptor deslizante, como su nombre lo indica, consiste en deslizar la barra del interruptor para conectar o interrumpir el circuito, y además cambiar entre circuitos. Los tipos más comunes son SPDT, SPTT, DPDT, DPTT, etc. El interruptor deslizante se utiliza comúnmente en circuitos de bajo voltaje. Tiene características de flexibilidad y estabilidad, y se aplica ampliamente en instrumentos eléctricos y juguetes eléctricos.

**Cómo funciona:** Configure el pin central como el fijo. Cuando deslizas la barra hacia la izquierda, los dos pines de la izquierda se conectan; cuando la deslizas hacia la derecha, los dos pines de la derecha se conectan. Así, funciona como un interruptor que conecta o desconecta circuitos. Vea la figura a continuación:

.. image:: img/slide_principle.png
    :width: 400
    :align: center

El símbolo de circuito del interruptor deslizante se muestra a continuación. El pin 2 en la figura se refiere al pin central.

.. image:: img/slide_symbol.png
    :width: 200
    :align: center

**Ejemplo**

* :ref:`ar_slide` (Proyecto Arduino)
