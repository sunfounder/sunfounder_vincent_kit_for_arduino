.. note:: 

    Hola, ¡bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook! Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte de expertos**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_mpr121:

MPR121
===========================

.. image:: img/mpr121.png

* **3.3V**: Suministro de energía
* **IRQ**: Pin de salida de interrupción con colector abierto, activo en nivel bajo
* **SCL**: Reloj I2C
* **SDA**: Datos I2C
* **ADD**: Pin de selección de dirección I2C. Conecta el pin ADDR a las líneas VSS, VDD, SDA o SCL para obtener las direcciones I2C resultantes: 0x5A, 0x5B, 0x5C y 0x5D respectivamente.
* **GND**: Tierra
* **0~11**: Electrodos 0~11. Los electrodos son sensores táctiles. Normalmente, los electrodos pueden ser simplemente un pedazo de metal o un cable. Sin embargo, a veces, dependiendo de la longitud del cable o del material en el que se encuentre el electrodo, puede resultar difícil activar el sensor. Por esta razón, el MPR121 permite configurar lo necesario para activar o desactivar un electrodo.

**VISIÓN GENERAL DEL MPR121**

El MPR121 es la segunda generación de controladores de sensores táctiles 
capacitivos tras el lanzamiento inicial de la serie MPR03x. Este dispositivo 
cuenta con inteligencia interna mejorada, con características destacadas como 
un mayor número de electrodos, una dirección I2C configurable por hardware, 
un sistema de filtrado expandido con anti-rebote y electrodos completamente 
independientes con auto-configuración incorporada. Además, el dispositivo 
incluye un decimotercer canal simulado dedicado a la detección de proximidad 
cercana utilizando entradas sensoriales multiplexadas.

* `MPR121 Datasheet <https://cdn-shop.adafruit.com/datasheets/MPR121.pdf>`_

**Características**

* Operación de bajo consumo:
    • Operación de suministro entre 1.71 V y 3.6 V
    • Corriente de suministro de 29 μA a un intervalo de muestreo de 16 ms
    • Corriente en modo Stop de 3 μA
* 12 entradas de detección capacitiva:
    • 8 entradas son multifuncionales para control de LED y GPIO
* Detección táctil completa:
    • Auto-configuración para cada entrada sensorial
    • Auto-calibración para cada entrada sensorial
    • Umbrales de toque/liberación y anti-rebote para detección táctil
* Interfaz I2C con salida de interrupción
* Paquete QFN de 20 pines, dimensiones 3 mm x 3 mm x 0.65 mm
* Rango de temperatura de operación: -40°C a +85°C

**Ejemplo**

* :ref:`ar_mpr121` (Proyecto Arduino)
