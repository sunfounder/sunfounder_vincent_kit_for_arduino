.. note:: 

    Hola, ¡bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook! Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte de expertos**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y Comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_i2c_lcd1602:

I2C LCD1602
==============

.. image:: img/i2c_lcd1602.png
    :width: 800

* **GND**: Tierra.
* **VCC**: Suministro de voltaje, 5V.
* **SDA**: Línea de datos en serie. Conectar a VCC a través de una resistencia pullup.
* **SCL**: Línea de reloj en serie. Conectar a VCC a través de una resistencia pullup.

Como sabemos, aunque las pantallas LCD y otras similares mejoran considerablemente la interacción hombre-máquina, tienen una desventaja común. Al conectarse a un controlador, ocupan múltiples IOs del controlador, lo cual limita el uso de otros puertos y funciones del dispositivo.

Para resolver este problema, se desarrolló la pantalla LCD1602 con un módulo I2C. Este módulo I2C tiene integrado un chip PCF8574, que convierte datos en serie I2C a datos en paralelo para la pantalla LCD.

* `Ficha técnica del PCF8574 <https://www.ti.com/lit/ds/symlink/pcf8574.pdf?ts=1627006546204&ref_url=https%253A%252F%252Fwww.google.com%252F>`_

**Dirección I2C**

La dirección predeterminada es generalmente 0x27, aunque en algunos casos puede ser 0x3F.

Tomando como ejemplo la dirección por defecto 0x27, la dirección del dispositivo puede modificarse acortando las almohadillas A0/A1/A2; en el estado predeterminado, A0/A1/A2 es 1, y si se cortocircuita la almohadilla, A0/A1/A2 pasa a ser 0.

.. image:: img/i2c_address.jpg
    :width: 600

**Retroiluminación/Contraste**

La retroiluminación se puede habilitar mediante el jumper; al quitar el jumper se desactiva la retroiluminación. El potenciómetro azul en la parte posterior permite ajustar el contraste.

.. image:: img/back_lcd1602.jpg

* **Jumper de Cortocircuito**: La retroiluminación puede habilitarse con este jumper; al retirarlo, se desactiva la retroiluminación.
* **Potenciómetro**: Se usa para ajustar el contraste (la claridad del texto mostrado), aumentando en sentido horario y disminuyendo en sentido antihorario.



**Ejemplo**

* :ref:`ar_lcd1602` (Proyecto Arduino)
* :ref:`ar_access_system` (Proyecto Arduino)
* :ref:`ar_guess_number` (Proyecto Arduino)
* :ref:`ar_overheat_monitor` (Proyecto Arduino)
* :ref:`lcd1602` (Proyecto Scratch)
