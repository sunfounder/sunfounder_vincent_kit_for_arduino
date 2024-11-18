.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_thermistor:

Termistor
===============

.. image:: img/thermistor.png
    :width: 150
    :align: center

Un termistor es un tipo de resistor cuya resistencia depende fuertemente de la temperatura, mucho más que en los resistores estándar. La palabra es una combinación de "térmico" y "resistor". Los termistores se utilizan ampliamente como limitadores de corriente de irrupción, sensores de temperatura (generalmente del tipo de coeficiente de temperatura negativo o NTC), protectores contra sobrecorriente autorecuperables y elementos calefactores autorregulables (generalmente del tipo de coeficiente de temperatura positivo o PTC).

* `Thermistor - Wikipedia <https://en.wikipedia.org/wiki/Thermistor>`_

A continuación, se muestra el símbolo electrónico de un termistor.

.. image:: img/thermistor_symbol.png
    :width: 300
    :align: center

Existen dos tipos fundamentales de termistores:

* En los termistores NTC, la resistencia disminuye a medida que aumenta la temperatura, generalmente debido a un aumento en los electrones de conducción promovidos por la agitación térmica desde la banda de valencia. Un NTC se utiliza comúnmente como sensor de temperatura o en serie con un circuito como limitador de corriente de irrupción.
* En los termistores PTC, la resistencia aumenta a medida que aumenta la temperatura, generalmente debido a mayores agitaciones térmicas en la red, particularmente de impurezas e imperfecciones. Los termistores PTC se instalan comúnmente en serie con un circuito y se utilizan para proteger contra condiciones de sobrecorriente, como fusibles autorecuperables.

En este kit utilizamos un termistor NTC. Cada termistor tiene una resistencia normal. En este caso, es de 10k ohmios, medida a 25 grados Celsius.

Esta es la relación entre la resistencia y la temperatura:

    RT = RN * expB(1/TK – 1/TN)   

* **RT** es la resistencia del termistor NTC a una temperatura TK. 
* **RN** es la resistencia del termistor NTC a la temperatura nominal TN. Aquí, el valor numérico de RN es 10k.
* **TK** es una temperatura en Kelvin y la unidad es K. Aquí, el valor numérico de TK es 273.15 + grados Celsius.
* **TN** es una temperatura nominal en Kelvin; la unidad también es K. Aquí, el valor numérico de TN es 273.15 + 25.
* **B(beta)** es la constante del material del termistor NTC, también llamada índice de sensibilidad térmica, con un valor numérico de 3950.      
* **exp** es la abreviatura de exponencial, y el número base e es un número natural aproximadamente igual a 2.7.  

Convierte esta fórmula: TK=1/(ln(RT/RN)/B+1/TN) para obtener la temperatura en Kelvin, y luego resta 273.15 para obtener el valor en grados Celsius.

Esta relación es una fórmula empírica. Es precisa solo cuando la temperatura y la resistencia están dentro del rango efectivo.

**Ejemplo**

* :ref:`ar_thermistor` (Proyecto Arduino)
* :ref:`low_temperature` (Proyecto Scratch)
