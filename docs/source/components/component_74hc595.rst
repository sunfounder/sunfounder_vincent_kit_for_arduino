.. note:: 

    Hola, ¡bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook! Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte de expertos**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y Comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_74hc595:

74HC595
===========

.. image:: img/74HC595.png

El 74HC595 consta de un registro de desplazamiento de 8 bits y un registro de almacenamiento con salidas paralelas de tres estados. Convierte la entrada serie en salida paralela, lo que permite ahorrar puertos IO de una MCU.  
Cuando MR (pin 10) está en nivel alto y OE (pin 13) está en nivel bajo, los datos se ingresan en el flanco ascendente de SHcp y pasan al registro de memoria a través del flanco ascendente de SHcp. Si los dos relojes están conectados juntos, el registro de desplazamiento siempre estará un pulso antes que el registro de memoria. El registro de memoria tiene un pin de entrada de desplazamiento serie (Ds), un pin de salida serie (Q) y un botón de reinicio asíncrono (nivel bajo). El registro de memoria genera un bus paralelo de 8 bits en tres estados. Cuando OE está habilitado (nivel bajo), los datos en el registro de memoria se envían al bus.

* `74HC595 Datasheet <https://www.ti.com/lit/ds/symlink/cd74hc595.pdf?ts=1617341564801>`_

.. image:: img/74hc595_pin.png
    :width: 600

Pines del 74HC595 y sus funciones:

* **Q0-Q7**: Pines de salida de datos paralelos de 8 bits, capaces de controlar directamente 8 LEDs o 8 pines de un display de 7 segmentos.
* **Q7’**: Pin de salida en serie, conectado a DS de otro 74HC595 para conectar varios 74HC595 en serie.
* **MR**: Pin de reinicio, activo en nivel bajo.
* **SHcp**: Entrada de secuencia de tiempo del registro de desplazamiento. En el flanco ascendente, los datos en el registro de desplazamiento se mueven sucesivamente un bit, es decir, los datos en Q1 se mueven a Q2, y así sucesivamente. En el flanco descendente, los datos en el registro de desplazamiento permanecen sin cambios.
* **STcp**: Entrada de secuencia de tiempo del registro de almacenamiento. En el flanco ascendente, los datos del registro de desplazamiento se mueven al registro de memoria.
* **CE**: Pin de habilitación de salida, activo en nivel bajo.
* **DS**: Pin de entrada de datos en serie.
* **VCC**: Voltaje de alimentación positivo.
* **GND**: Tierra.

**Ejemplo**

* :ref:`ar_4_digit` (Proyecto Arduino)
* :ref:`ar_pedestrian` (Proyecto Arduino)
