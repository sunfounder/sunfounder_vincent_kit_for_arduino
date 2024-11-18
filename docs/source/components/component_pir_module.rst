
.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_pir:

Módulo Sensor de Movimiento PIR
===================================

.. image:: img/pir_pic.png
    :width: 300
    :align: center

El sensor PIR detecta la radiación infrarroja de calor que puede utilizarse para identificar la presencia de organismos que emiten este tipo de radiación.

El sensor PIR está dividido en dos ranuras conectadas a un amplificador diferencial. Cuando un objeto estacionario está frente al sensor, ambas ranuras reciben la misma cantidad de radiación y la salida es cero. Cuando un objeto en movimiento se encuentra frente al sensor, una de las ranuras recibe más radiación que la otra, lo que hace que la salida fluctúe hacia niveles altos o bajos. Este cambio en el voltaje de salida resulta de la detección de movimiento.

.. image:: img/PIR_working_principle.jpg
    :width: 800

Después de cablear el módulo de detección, hay un tiempo de inicialización de un minuto. Durante esta inicialización, el módulo puede emitir entre 0 y 3 señales a intervalos. Luego, el módulo entrará en modo de espera. Es importante mantener alejadas fuentes de luz y otras interferencias de la superficie del módulo para evitar errores de operación causados por señales de interferencia. Incluso es preferible usar el módulo en un ambiente sin demasiado viento, ya que este también puede interferir con el sensor.

.. image:: img/pir_back.png
    :width: 600
    :align: center

**Ajuste de Distancia**

Girando el potenciómetro de ajuste de distancia en el sentido de las agujas del reloj, el rango de detección aumenta, alcanzando un máximo de aproximadamente 0-7 metros. Si se gira en sentido contrario a las agujas del reloj, el rango de detección se reduce, con un mínimo de aproximadamente 0-3 metros.

**Ajuste de Retardo**

Girando el potenciómetro de ajuste de retardo en el sentido de las agujas del reloj, se puede aumentar el tiempo de retardo de detección, con un máximo de hasta 300s. Por el contrario, al girarlo en sentido contrario, se puede acortar el retardo a un mínimo de 5s.

**Dos Modos de Activación**

Selecciona diferentes modos usando el puente de configuración:

* **H**: Modo de activación repetitiva. Después de detectar un cuerpo humano, el módulo emite un nivel alto. Durante el período de retardo, si alguien entra en el rango de detección, la salida permanecerá en nivel alto.

* **L**: Modo de activación no repetitiva. El módulo emite un nivel alto cuando detecta un cuerpo humano. Después del retardo, la salida cambia automáticamente de nivel alto a nivel bajo.

**Ejemplo**

* :ref:`ar_pir` (Proyecto Arduino)
