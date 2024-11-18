.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _fishing:

2.19 JUEGO - Pesca
====================

Aquí jugaremos un juego de pesca con un botón.

Cuando el guion está en ejecución, los peces nadan de izquierda a derecha en el escenario. Debes presionar el botón cuando el pez esté casi cerca del anzuelo (se recomienda mantenerlo presionado por más tiempo) para atraparlo, y el número de peces capturados se registrará automáticamente.

.. image:: img/18_fish.png

Construir el Circuito
------------------------

El botón es un dispositivo de 4 pines, ya que el pin 1 está conectado al pin 2, y el pin 3 al pin 4. Cuando se presiona el botón, los 4 pines están conectados, cerrando así el circuito.

.. image:: img/5_buttonc.png

Construye el circuito según el siguiente diagrama:

* Conecta uno de los pines del lado izquierdo del botón al pin 12, que está conectado a una resistencia pull-down y a un condensador de 0.1uF (104) para eliminar el ruido y garantizar un nivel estable cuando el botón está en funcionamiento.
* Conecta el otro extremo de la resistencia y el condensador a GND, y uno de los pines del lado derecho del botón a 5V.

.. image:: img/circuit/button_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_button`
* :ref:`cpn_resistor`
* :ref:`cpn_capacitor`

Programación
--------------

Primero seleccionaremos un fondo **Underwater**, luego añadiremos un sprite **Fish** y haremos que nade de un lado a otro en el escenario. Después, dibujaremos un sprite **Fishhook** y lo controlaremos mediante un botón para empezar a pescar. Cuando el sprite **Fish** toque el sprite **Fishhook** en estado de pesca (cambia a rojo), será atrapado.

**1. Añadiendo un fondo**

Utiliza el botón **Choose a Backdrop** para añadir un fondo **Underwater**.

.. image:: img/18_under.png

**2. Sprite Fishhook**

El sprite **Fishhook** tiene el efecto de permanecer bajo el agua en estado amarillo; cuando se presiona el botón, cambia al estado de pesca (rojo) y se mueve hacia la parte superior del escenario.

No existe un sprite **Fishhook** en Pictoblox, por lo que podemos modificar el sprite **Glow-J** para que parezca un anzuelo.

* Añade el sprite **Glow-J** a través de **Choose a Sprite**.

.. image:: img/18_hook.png

* Ve a la página **Costumes** del sprite **Glow-J**, selecciona el relleno cian en la pantalla y elimínalo. Luego cambia el color de la **J** a rojo y reduce su ancho. Asegúrate de que la parte superior quede justo en el punto central.

.. image:: img/18_hook1.png

* Usa la herramienta **Line** para dibujar una línea larga desde el punto central hacia arriba (fuera del escenario). Renombra el sprite como **Fishhook** y muévelo a la posición correcta.

.. image:: img/18_hook2.png

* Al hacer clic en la bandera verde, establece el efecto de color del sprite en 30 (amarillo) y configura su posición inicial.

.. image:: img/18_hook3.png

* Si se presiona el botón, establece el efecto de color en 0 (rojo, estado de pesca), espera 0.1 segundos y luego mueve el sprite **Fishhook** a la parte superior del escenario. Al soltar el botón, el **Fishhook** regresa a su posición inicial.

.. image:: img/18_hook4.png

**3. Sprite Fish**

El sprite **Fish** debe moverse de izquierda a derecha en el escenario. Cuando se encuentre con el sprite **Fishhook** en estado de pesca, se encoge, se mueve a una posición específica y luego desaparece. Después, se clona un nuevo sprite **Fish**.

* Añade el sprite **Fish** y ajusta su tamaño y posición.

.. image:: img/18_fish1.png

* Crea una variable **score** para almacenar el número de peces atrapados, oculta este sprite y clónalo.

.. image:: img/18_fish2.png


* Muestra el clon del sprite **Fish**, cambia su disfraz y establece la posición inicial.

.. image:: img/18_fish3.png


* Haz que el clon del sprite **Fish** se mueva de izquierda a derecha y rebote cuando toque el borde.

.. image:: img/18_fish4.png

* El clon del sprite **Fish** no reaccionará al pasar por el sprite **Fishhook**; pero cuando toque el sprite **Fishhook** en estado de pesca (rojo), será atrapado. En ese momento, la puntuación (**score**) aumentará en 1 y se mostrará una animación de puntuación (se encoge al 40%, se mueve rápidamente a la posición del marcador y desaparece). Al mismo tiempo, se crea un nuevo pez (nuevo clon del sprite **Fish**) y el juego continúa.

.. note::
    
    Debes hacer clic en el área de color en el bloque [Touch color] y luego seleccionar la herramienta cuenta gotas para recoger el color rojo del sprite **Fishhook** en el escenario. Si eliges un color arbitrario, este bloque no funcionará.

.. image:: img/18_fish5.png






