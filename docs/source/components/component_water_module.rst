.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_water:

Módulo Sensor de Nivel de Agua
===================================

.. image:: img/water_sensor.png

* **S**: Pin de señal, a mayor inmersión del sensor en agua, mayor será el valor de salida.
* **+**: Alimentación, 3.3 ~ 5V DC.
* **-**: Tierra.

El módulo Sensor de Nivel de Agua es un sensor compacto, económico y fácil de usar para detectar el nivel de agua o gotas. Mide el nivel del agua a través de una serie de trazas paralelas expuestas que determinan el tamaño de la gota o el volumen de agua.

El sensor de nivel de agua tiene diez trazas de cobre expuestas: cinco para alimentación y cinco para las trazas del sensor, que se cruzan y son conectadas por el agua al inundarse.
La placa del circuito tiene un LED de encendido que se ilumina cuando la placa está energizada.

La combinación de estas trazas actúa como una resistencia variable, cambiando el valor de la resistencia de acuerdo con el nivel de agua.
Específicamente, cuanto más inmerso está el sensor en agua, mejor es la conductividad y menor la resistencia. Por el contrario, cuanto menor es la inmersión, mayor es la resistencia.
A continuación, el sensor procesa el voltaje de la señal de salida, que se envía al microcontrolador, ayudándonos a determinar el nivel de agua.

.. warning:: 
    El sensor no puede sumergirse completamente en agua; solo la parte donde se encuentran las diez trazas debe estar en contacto con el agua. Además, energizar el sensor en un ambiente húmedo acelerará la corrosión de la sonda y reducirá la vida útil del sensor. Recomendamos alimentarlo únicamente al tomar lecturas.

**Ejemplo**

* :ref:`ar_water` (Proyecto Arduino)
* :ref:`starfish` (Proyecto Scratch)
