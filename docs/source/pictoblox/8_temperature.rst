.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _low_temperature:

2.8 Alarma de Baja Temperatura
=================================

En este proyecto, crearemos un sistema de alarma de baja temperatura. Cuando la temperatura esté por debajo del umbral, el sprite **Copo de Nieve** aparecerá en el escenario.

.. image:: img/9_tem.png

Lo que aprenderás
---------------------

- Principio de funcionamiento del termistor.
- Operaciones multivariables y sustractivas.

Construir el Circuito
-----------------------

Un termistor es un tipo de resistor cuya resistencia depende fuertemente de la temperatura, más que en los resistores estándar. Hay dos tipos de termistores: PTC (resistencia aumenta con la temperatura) y NTC (resistencia disminuye con la temperatura).

Construye el circuito de acuerdo con el siguiente diagrama:

Un extremo del termistor se conecta a GND, el otro extremo se conecta a A0, y una resistencia de 10K se conecta en serie a 5V.

Aquí usamos un termistor NTC, por lo que cuando la temperatura aumenta, la resistencia del termistor disminuye, la división de voltaje de A0 disminuye, y el valor obtenido de A0 disminuye, y viceversa.

.. image:: img/circuit/thermistor_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_thermistor` 
* :ref:`cpn_resistor`

Programación
---------------

**1. Selecciona un sprite**

Elimina el sprite predeterminado, haz clic en el botón **Elegir un Sprite** en la esquina inferior derecha del área de sprites, escribe **Copo de Nieve** en el cuadro de búsqueda y haz clic para añadirlo.

.. image:: img/9_snow.png

**2. Crea 2 variables**

Crea dos variables, **antes** y **actual**, para almacenar el valor de A0 en diferentes casos.

.. image:: img/9_va.png

**3. Lee el valor de A0**

Cuando se haga clic en la bandera verde, lee el valor de A0 y guárdalo en la variable **antes**.

.. image:: img/9_before.png

**4. Lee nuevamente el valor de A0**

En [por siempre], lee nuevamente el valor de A0 y guárdalo en la variable **actual**.

.. image:: img/9_current.png

**5. Determina los cambios de temperatura**

Usando el bloque [si entonces si no], determina si el valor actual de A0 es 50 mayor que el anterior, lo que representa una disminución de temperatura. En este caso, muestra el sprite **Copo de Nieve**, de lo contrario, ocúltalo.

* [-] y [>]: operadores de sustracción y comparación de la paleta **Operadores**.

.. image:: img/9_show.png