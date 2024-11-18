.. note:: 

    Hola, ¡bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook! Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte de expertos**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y Comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_buzzer:

Zumbador
==========

.. image:: img/buzzer.png
    :width: 600

El zumbador, como un tipo de dispositivo electrónico con una estructura integrada, es ampliamente utilizado en computadoras, impresoras, fotocopiadoras, alarmas, juguetes electrónicos, dispositivos electrónicos automotrices, teléfonos, temporizadores y otros productos o dispositivos electrónicos con función de voz. 

Los zumbadores se clasifican en activos y pasivos (ver la imagen a continuación). Si colocas el zumbador con los pines hacia arriba, el que tiene una placa de circuito verde es un zumbador pasivo, mientras que el que está cubierto con cinta negra es un zumbador activo.

Diferencias entre un zumbador activo y un zumbador pasivo: 

Un zumbador activo tiene una fuente oscilante integrada, por lo que emitirá sonidos cuando se electrifica. Por el contrario, un zumbador pasivo no tiene esa fuente, por lo que no emitirá sonidos si se utilizan señales de CC; en cambio, necesitas usar ondas cuadradas con una frecuencia entre 2K y 5K para hacerlo funcionar. El zumbador activo suele ser más caro que el pasivo debido a los múltiples circuitos oscilantes integrados.

A continuación, se muestra el símbolo eléctrico de un zumbador. Tiene dos pines con polos positivo y negativo. El lado con un + en la superficie representa el ánodo, y el otro es el cátodo.

.. image:: img/buzzer_symbol.png
    :width: 150

Puedes identificar los pines del zumbador: el más largo es el ánodo y el más corto es el cátodo. Por favor, no los conectes al revés, de lo contrario, el zumbador no emitirá sonido. 

`Zumbador - Wikipedia <https://en.wikipedia.org/wiki/Buzzer>`_

**Ejemplo**

* :ref:`ar_active_buzzer` (Proyecto Arduino)
* :ref:`ar_passive_buzzer` (Proyecto Arduino)
