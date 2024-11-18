.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_resistor:

Resistor
============

.. image:: img/resistor.png
    :width: 300

Un resistor es un elemento electrónico que puede limitar la corriente en una rama de un circuito. 
Un resistor fijo es aquel cuya resistencia no puede cambiarse, mientras que la de un potenciómetro o un resistor variable puede ajustarse. 

Estos son dos símbolos de circuito generalmente utilizados para resistores. Normalmente, el valor de la resistencia está marcado en el resistor. 
Si ves estos símbolos en un circuito, representan un resistor. 

.. image:: img/resistor_symbol.png
    :width: 400

**Ω** es la unidad de resistencia, y las unidades más grandes incluyen KΩ y MΩ. 
Su relación es la siguiente: 1 MΩ = 1000 KΩ, 1 KΩ = 1000 Ω. Normalmente, el valor de resistencia está marcado en el resistor. 

Cuando usas un resistor, primero necesitas conocer su resistencia. Aquí tienes dos métodos: puedes observar las bandas de colores en el resistor, o usar un multímetro para medir la resistencia. 
Se recomienda el primer método, ya que es más conveniente y rápido. 

.. image:: img/resistance_card.jpg

Como se muestra en la tarjeta, cada color representa un número: 

.. list-table::

   * - Negro
     - Marrón
     - Rojo
     - Naranja
     - Amarillo
     - Verde
     - Azul
     - Violeta
     - Gris
     - Blanco
     - Oro
     - Plata
   * - 0
     - 1
     - 2
     - 3
     - 4
     - 5
     - 6
     - 7
     - 8
     - 9
     - 0.1
     - 0.01

Los resistores de 4 y 5 bandas son los más utilizados, y tienen 4 y 5 bandas cromáticas respectivamente. 

Normalmente, cuando obtienes un resistor, puede ser difícil decidir desde qué extremo comenzar a leer los colores. 
La clave es que el espacio entre la 4.ª y la 5.ª banda será relativamente mayor. 

Por lo tanto, observa el espacio entre las bandas cromáticas en un extremo del resistor; 
si es más grande que cualquier otro espacio entre bandas, comienza a leer desde el lado opuesto. 

Veamos cómo leer el valor de resistencia de un resistor de 5 bandas como se muestra a continuación.

.. image:: img/220ohm.jpg
    :width: 500

Para este resistor, el valor debe leerse de izquierda a derecha. 
El formato debe ser el siguiente: 1.ª Banda 2.ª Banda 3.ª Banda x 10^Multiplicador (Ω) y el error permisible es ±Tolerancia%. 
Así, el valor de resistencia de este resistor es 2 (rojo) 2 (rojo) 0 (negro) x 10^0 (negro) Ω = 220 Ω, 
y el error permisible es ± 1% (marrón). 

.. list-table:: Bandas de colores comunes en resistores
    :header-rows: 1

    * - Resistor 
      - Bandas de color  
    * - 10Ω   
      - marrón negro negro plata marrón
    * - 100Ω   
      - marrón negro negro negro marrón
    * - 220Ω 
      - rojo rojo negro negro marrón
    * - 330Ω 
      - naranja naranja negro negro marrón
    * - 1kΩ 
      - marrón negro negro marrón marrón
    * - 2kΩ 
      - rojo negro negro marrón marrón
    * - 5.1kΩ 
      - verde marrón negro marrón marrón
    * - 10kΩ 
      - marrón negro negro rojo marrón 
    * - 100kΩ 
      - marrón negro negro naranja marrón 
    * - 1MΩ 
      - marrón negro negro verde marrón 

Puedes aprender más sobre los resistores en Wiki: `Resistor - Wikipedia <https://en.wikipedia.org/wiki/Resistor>`_.
