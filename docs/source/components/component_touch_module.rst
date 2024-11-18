.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_touch:

Módulo de Interruptor Táctil
==================================

.. image:: img/touch168.png
    :width: 300
    :align: center

* **IO**: Pin de señal, normalmente de nivel bajo, emitirá nivel alto después del toque.
* **VCC**: Alimentación, 3.3 ~ 5V DC.
* **GND**: Tierra.

Este módulo es un interruptor táctil capacitivo basado en un sensor táctil IC (TTP223B). En estado normal, el módulo emite un nivel bajo con bajo consumo de energía; cuando un dedo toca la posición correspondiente, el módulo emite un nivel alto y vuelve a nivel bajo después de que el dedo se retira.

Así es como funciona el interruptor táctil capacitivo:

Un interruptor táctil capacitivo tiene diferentes capas: una placa aislante superior seguida de una placa táctil, otra capa aislante y finalmente una placa de tierra.

.. image:: img/touch169.jpeg

En la práctica, un sensor capacitivo puede fabricarse en un PCB de doble cara considerando un lado como el sensor táctil y el lado opuesto como la placa de tierra del condensador. Cuando se aplica energía entre estas placas, ambas se cargan. En estado de equilibrio, las placas tienen el mismo voltaje que la fuente de alimentación.

El circuito detector táctil tiene un oscilador cuya frecuencia depende de la capacitancia de la placa táctil. Cuando un dedo se acerca a la placa táctil, la capacitancia adicional hace que la frecuencia del oscilador interno cambie. El circuito detector rastrea la frecuencia del oscilador a intervalos programados, y cuando el cambio cruza el umbral establecido, el circuito desencadena un evento de pulsación.


**Ejemplo**


* :ref:`ar_touch` (Proyecto Arduino)
* :ref:`balloon` (Proyecto Scratch)
