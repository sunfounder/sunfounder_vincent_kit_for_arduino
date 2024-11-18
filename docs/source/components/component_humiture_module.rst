.. note:: 

    Hola, ¡bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook! Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte de expertos**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y Comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_humiture:

Módulo Sensor de Temperatura y Humedad
=========================================

.. image:: img/dht11_pic.png
    :width: 400
    :align: center

El sensor digital de temperatura y humedad DHT11 es un sensor compuesto que contiene una salida de señal digital calibrada para temperatura y humedad. 
Se aplica tecnología de módulos digitales dedicados junto con la tecnología de detección de temperatura y humedad para asegurar que el producto tenga alta fiabilidad y excelente estabilidad a largo plazo.

Este sensor utiliza únicamente tres pines: VCC, GND y DATA. 
El proceso de comunicación comienza cuando la línea DATA envía señales de inicio al DHT11, el cual recibe las señales y devuelve una señal de respuesta. 
Luego, el dispositivo anfitrión recibe esta señal de respuesta y empieza a recibir 40 bits de datos de temperatura y humedad (8 bits de la parte entera de la humedad + 8 bits de la parte decimal de la humedad + 8 bits de la parte entera de la temperatura + 8 bits de la parte decimal de la temperatura + 8 bits de checksum).

.. image:: img/Dht11.png

* `Ficha técnica del DHT11 <https://components101.com/sites/default/files/component_datasheet/DHT11-Temperature-Sensor.pdf>`_

**Ejemplo**


* :ref:`ar_humiture` (Proyecto Arduino)
* :ref:`humiture` (Proyecto Scratch)
