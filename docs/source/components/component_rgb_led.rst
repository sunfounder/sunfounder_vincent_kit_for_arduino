.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_rgb:

LED RGB
=================

.. image:: img/rgb_led.png
    :width: 100
    
Los LEDs RGB emiten luz en varios colores. Un LED RGB empaqueta tres LEDs (rojo, verde y azul) en una carcasa de plástico transparente o semitransparente. Puede mostrar diversos colores cambiando el voltaje de entrada de los tres pines y superponiéndolos, lo que, según estadísticas, puede crear hasta 16,777,216 colores diferentes. 

.. image:: img/rgb_light.png
    :width: 600

Los LEDs RGB pueden clasificarse en ánodo común y cátodo común. En este kit se utiliza el segundo. El **cátodo común** (CC) significa que los cátodos de los tres LEDs están conectados. Después de conectarlo a GND y enchufar los tres pines, el LED emitirá el color correspondiente. 

Su símbolo de circuito se muestra en la figura.

.. image:: img/rgb_symbol.png
    :width: 300

Un LED RGB tiene 4 pines: el más largo es GND; los otros son Rojo, Verde y Azul. Si tocas su carcasa de plástico, notarás un corte. El pin más cercano al corte es el primero, marcado como Rojo, luego GND, Verde y Azul, en ese orden. 

.. image:: img/rgb_pin.jpg
    :width: 200

**Ejemplo**

* :ref:`ar_rgb` (Proyecto Arduino)
* :ref:`ar_overheat_monitor` (Proyecto Arduino)
