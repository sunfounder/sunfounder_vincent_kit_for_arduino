.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_rotary:

Módulo de Codificador Rotativo
===================================

.. image:: img/rotary_encoder_pic.png
    :width: 300
    :align: center

El módulo de codificador rotativo cuenta la cantidad de pulsos de salida en las direcciones hacia adelante y hacia atrás durante la rotación. A diferencia de un potenciómetro, este cuenta con rotación ilimitada y el número de pulsos por ciclo es de 20. Al presionar la tecla (SW) en el codificador rotativo, se inicia el conteo desde cero.

Existen principalmente dos tipos de codificadores rotativos: absolutos e incrementales (relativos). En este kit se utiliza un codificador incremental.

Los codificadores incrementales generan ondas cuadradas de dos fases con una diferencia de fase de 90°, comúnmente denominadas canal A y canal B.

Como se muestra a la derecha, cuando el canal A cambia de nivel alto a nivel bajo, 
si el canal B está en nivel alto, indica que el codificador rotativo gira en el sentido de las agujas del reloj 
(CW). Si en ese momento el canal B está en nivel bajo, significa que gira en sentido contrario a las agujas del 
reloj (CCW). Por lo tanto, si leemos el valor del canal B cuando el canal A está en nivel bajo, podemos determinar 
en qué dirección gira el codificador rotativo.

.. image:: img/image206.png
    :width: 600
    :align: center

**Ejemplo**


* :ref:`ar_rotary_encoder` (Proyecto Arduino)
