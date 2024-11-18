.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _eat_apple:

2.16 JUEGO - Come Manzana
============================

En este proyecto, jugaremos un juego donde utilizaremos un botón para controlar al escarabajo **Beetle** y hacer que coma una manzana.

Cuando se hace clic en la bandera verde, presiona el botón para que **Beetle** gire. Al presionar el botón nuevamente, **Beetle** deja de girar y avanza en ese ángulo. Debes controlar el ángulo del **Beetle** para que avance sin tocar la línea negra en el mapa hasta que coma la manzana. Si toca la línea negra, el juego termina.

.. image:: img/14_apple.png

Construir el Circuito
-------------------------

El botón es un dispositivo de 4 pines, donde el pin 1 está conectado al pin 2, y el pin 3 al pin 4. Cuando se presiona el botón, los 4 pines se conectan, cerrando así el circuito.

.. image:: img/5_buttonc.png

Construye el circuito según el siguiente diagrama.

* Conecta uno de los pines del lado izquierdo del botón al pin 12, que está conectado a una resistencia pull-down y a un condensador de 0.1uF (104) (para eliminar el ruido y proporcionar un nivel estable cuando el botón funciona).
* Conecta el otro extremo de la resistencia y el condensador a GND, y uno de los pines del lado derecho del botón a 5V.

.. image:: img/circuit/button_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_button`
* :ref:`cpn_resistor`
* :ref:`cpn_capacitor`

Programación
-----------------

El objetivo es usar el botón para controlar la dirección del sprite **Beetle**, avanzar y comer la manzana sin tocar la línea negra en el fondo **Maze**. Cuando coma la manzana, se cambiará el fondo.

**1. Agregar fondos y sprites**

Agrega un fondo **Maze** utilizando el botón **Choose a Backdrop**.

.. image:: img/14_backdrop.png

Elimina el sprite predeterminado, luego selecciona el sprite **Beetle**.

.. image:: img/14_sprite.png

Coloca el sprite **Beetle** en la entrada del fondo **Maze**, recuerda las coordenadas x, y en este punto y ajusta el tamaño del sprite al 40%.

.. image:: img/14_sprite1.png

**2. Dibujar un fondo**

Dibuja un fondo simple con el texto "WIN!" para indicar que el jugador ha ganado.

Haz clic en la miniatura del fondo para ir a la página **Backdrops** y selecciona el fondo en blanco **Backdrop1**.

.. image:: img/14_paint_back.png
    :width: 800

Dibuja el fondo siguiendo estos pasos:

* Usa la herramienta **Circle** para dibujar un óvalo en color rojo sin contorno.
* Usa la herramienta **Text** para escribir "WIN!", ajusta el tamaño y el color del texto a negro.
* Nombra el fondo como **Win**.

.. image:: img/14_win.png

**3. Escribir guion para el fondo**

El fondo debe cambiarse a **Maze** cada vez que comience el juego.

.. image:: img/14_switchback.png

**4. Escribir guiones para el sprite Beetle**

Escribe un guion para que el sprite **Beetle** pueda avanzar y cambiar de dirección bajo el control de un botón. El flujo de trabajo es el siguiente:

* Cuando se hace clic en la bandera verde, establece el ángulo de **Beetle** en 90 y la posición en (-134, -134) o las coordenadas específicas que hayas definido. Crea una variable **flag** y establece su valor inicial en -1.

.. image:: img/14_bee1.png

Dentro del bloque [forever], usa cuatro bloques [if] para determinar posibles escenarios:

* Si el botón se presiona (valor 1), utiliza el bloque [`mod <https://en.scratch-wiki.info/wiki/Boolean_Block>`_] para alternar el valor de **flag** entre 0 y 1.

.. image:: img/14_bee2.png

* Si flag=0, el sprite **Beetle** gira en el sentido de las agujas del reloj. Si flag=1, el sprite avanza; de lo contrario, sigue girando.

.. image:: img/14_bee3.png

* Si el sprite **Beetle** toca el color negro (la línea negra del fondo **Maze**), el juego termina y el guion se detiene.

.. note::

    Usa la herramienta cuentagotas para seleccionar el color negro exacto de la línea en el escenario. Si seleccionas un negro genérico, el bloque [Touch color] no funcionará.

.. image:: img/14_bee5.png

* Si **Beetle** toca el color rojo (utilizando la misma herramienta para seleccionar el color de la manzana), el fondo cambia a **Win**, indicando que el jugador ha ganado, y el guion se detiene.

.. image:: img/14_bee4.png




