.. note:: 

    Hola, ¡bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook! Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte de expertos**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y Comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_4_digit:

Display de 7 Segmentos de 4 Dígitos
=======================================

El display de 7 segmentos y 4 dígitos consiste en cuatro displays de 
7 segmentos que trabajan juntos.

.. image:: img/4-digit-sche.png

El display de 7 segmentos de 4 dígitos funciona de manera independiente. 
Utiliza el principio de persistencia visual humana para mostrar rápidamente 
los caracteres de cada segmento en un bucle, formando cadenas continuas.

Por ejemplo, cuando se muestra "1234" en el display, primero se muestra "1" 
en el primer segmento de 7, mientras que "234" no se muestra. Después de un 
período breve, el segundo segmento muestra "2", y los segmentos 1, 3 y 4 no 
muestran nada. Este proceso continúa, y los cuatro dígitos se muestran de forma 
alternada. Este proceso es muy corto (generalmente 5ms), y gracias al efecto 
de pospersistencia óptica y al principio de residuo visual, podemos ver los 
cuatro caracteres al mismo tiempo.

.. image:: img/image78.png

**Códigos de Visualización**

Para ayudarte a entender cómo los displays de 7 segmentos (Cátodo Común) 
muestran números, hemos elaborado la siguiente tabla. Los números representan 
los valores del 0 al F que se muestran en el display de 7 segmentos; 
(DP) GFEDCBA se refiere a los LEDs correspondientes configurados en 0 o 1. 
Por ejemplo, 11000000 significa que DP y G están configurados en 1, mientras 
que los demás están configurados en 0. Por lo tanto, el número 0 se muestra 
en el display de 7 segmentos, mientras que el Código HEX corresponde al número 
en formato hexadecimal.

.. image:: img/common_anode.png

**Ejemplo**

* :ref:`ar_4_digit` (Proyecto Arduino)
