.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_potentiometer:

Potenciómetro
=============

.. image:: img/potentiometer.png
    :align: center
    :width: 150

El potenciómetro es un componente resistivo con tres terminales, cuyo valor de resistencia puede ajustarse según una variación predefinida.

Los potenciómetros vienen en diferentes formas, tamaños y valores, pero todos tienen las siguientes características en común:

* Tienen tres terminales (o puntos de conexión).
* Disponen de una perilla, tornillo o deslizador que puede moverse para variar la resistencia entre el terminal medio y cualquiera de los terminales externos.
* La resistencia entre el terminal medio y cualquiera de los terminales externos varía de 0 Ω al máximo valor de resistencia del potenciómetro al mover la perilla, tornillo o deslizador.

Aquí se muestra el símbolo de circuito del potenciómetro.

.. image:: img/potentiometer_symbol.png
    :align: center
    :width: 400

Las funciones del potenciómetro en el circuito son las siguientes:

#. Funcionando como divisor de voltaje

    El potenciómetro es un resistor ajustable de forma continua. Cuando ajustas el eje o el mango deslizante del potenciómetro, el contacto móvil se desliza sobre el resistor. En este punto, se puede generar un voltaje dependiendo del voltaje aplicado al potenciómetro y el ángulo de rotación del brazo móvil o el recorrido realizado.

#. Funcionando como reóstato

    Cuando el potenciómetro se utiliza como reóstato, conecta el pin medio y uno de los otros dos pines en el circuito. De esta manera, se puede obtener un valor de resistencia suavemente y continuamente variable dentro del recorrido del contacto móvil.

#. Funcionando como controlador de corriente

    Cuando el potenciómetro actúa como un controlador de corriente, el terminal de contacto deslizante debe estar conectado como uno de los terminales de salida.

Si deseas más información sobre los potenciómetros, consulta: `Potenciómetro - Wikipedia <https://es.wikipedia.org/wiki/Potenciómetro>`_

**Ejemplo**

* :ref:`ar_potentiometer` (Proyecto Arduino)
* :ref:`moving_mouse` (Proyecto Scratch)
* :ref:`breakout_clone` (Proyecto Scratch)
