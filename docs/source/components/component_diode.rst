.. note:: 

    Hola, ¡bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook! Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte de expertos**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y Comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_diode:

Diodo
=================


Un diodo es un componente electrónico con dos electrodos. Permite que la corriente fluya en una sola dirección, lo que comúnmente se conoce como función de "rectificación".  
Por lo tanto, un diodo puede considerarse como una versión electrónica de una válvula de retención.

Debido a su conductividad unidireccional, el diodo se utiliza en casi todos los circuitos electrónicos de cierta complejidad. Es uno de los primeros dispositivos semiconductores y tiene una amplia gama de aplicaciones.

Según su clasificación por uso, puede dividirse en diodos detectores, diodos rectificadores, diodos limitadores, diodos reguladores de voltaje, entre otros.

En este kit se incluyen diodos rectificadores y diodos reguladores de voltaje.

**Diodo Rectificador**

.. image:: img/in4007_diode.png
.. image:: img/symbol_rectifier_diode.png
    :width: 200

Un diodo rectificador es un diodo semiconductor utilizado para rectificar corriente alterna (CA) a corriente continua (CC) mediante la aplicación de un puente rectificador. En la electrónica digital, la alternativa al diodo rectificador a través de la barrera Schottky es particularmente valorada. Este diodo es capaz de conducir valores de corriente que van desde mA hasta varios kA, y manejar voltajes de hasta varios kV.

Los diodos rectificadores están diseñados con material de silicio y son capaces de manejar altos valores de corriente eléctrica. Aunque no son tan comunes, también se utilizan diodos semiconductores basados en germanio (Ge) o arseniuro de galio. Los diodos de germanio tienen un voltaje de inversión permisible más bajo y una temperatura de unión permisible menor. Sin embargo, los diodos de Ge tienen una ventaja sobre los de Si: un valor de voltaje umbral más bajo cuando operan en polarización directa.

* `Diodo de uso general 1N400x - Wikipedia <https://en.wikipedia.org/wiki/1N400x_general-purpose_diode>`_

**Diodo Zener**

Un diodo Zener es un tipo especial de diodo diseñado para permitir de manera confiable que la corriente fluya "hacia atrás" cuando se alcanza un voltaje de inversión específico, conocido como voltaje Zener.

Este diodo es un dispositivo semiconductor que tiene una resistencia muy alta hasta alcanzar el voltaje crítico de ruptura inversa. En este punto crítico de ruptura, la resistencia inversa se reduce a un valor muy pequeño, lo que permite que la corriente aumente mientras el voltaje permanece constante en esta región de baja resistencia.

.. image:: img/zener_diode.png
.. image:: img/symbol-zener-diode.jpg

* `Diodo Zener - Wikipedia <https://en.wikipedia.org/wiki/Zener_diode>`_
