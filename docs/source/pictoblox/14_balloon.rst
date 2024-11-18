.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _balloon:

2.14 JUEGO - Inflar el Globo
===============================

Aquí jugaremos un juego de inflar globos.

Después de hacer clic en la bandera verde, el globo se hará cada vez más grande. Si el globo se infla demasiado, explotará; si es muy pequeño, caerá. Debes juzgar cuándo tocar el módulo táctil para que suba.

.. image:: img/13_balloon0.png

Lo que aprenderás
---------------------

- Cómo funciona el módulo táctil y el rango de ángulo.
- Pintar un disfraz para el sprite.


Construir el Circuito
------------------------

Este módulo es un interruptor táctil capacitivo basado en un sensor táctil IC (TTP223B). En estado normal, el módulo emite un nivel bajo con bajo consumo de energía; cuando un dedo toca la posición correspondiente, el módulo emite un nivel alto y vuelve a nivel bajo una vez que el dedo se retira.

Construye el circuito según el diagrama siguiente.

.. image:: img/circuit/touch_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_touch`

Programación
---------------

**1. Agregar un sprite y un fondo**

Elimina el sprite predeterminado, haz clic en el botón **Choose a Sprite** en la esquina inferior derecha del área de sprites y selecciona el sprite **Balloon1**.

.. image:: img/13_balloon1.png

Agrega un fondo **Boardwalk** a través del botón **Choose a backdrop**, o cualquier otro fondo que prefieras.

.. image:: img/13_balloon2.png

**2. Pintar un disfraz para el sprite Balloon1**

Ahora dibujemos un efecto de explosión como disfraz para el sprite del globo.

Ve a la página **Costumes** del sprite **Balloon1**, haz clic en el botón **Choose a Costume** en la esquina inferior izquierda y selecciona **Paint** para abrir un disfraz en blanco.

.. image:: img/13_balloon7.png

Selecciona un color y usa la herramienta **Brush** para dibujar un patrón.

.. image:: img/13_balloon3.png

Vuelve a seleccionar un color, haz clic en la herramienta **Fill** y mueve el mouse dentro del patrón para rellenarlo.

.. image:: img/13_balloon4.png

Finalmente, escribe el texto "BOOM" para completar un disfraz con efecto de explosión.

.. image:: img/13_balloon5.png

**3. Crear el script para el sprite Balloon1**

Establece la posición inicial y el tamaño del sprite **Balloon1**.

.. image:: img/13_balloon6.png

Luego, haz que el sprite **Balloon1** crezca lentamente.

.. image:: img/13_balloon8.png

Cuando se toque el módulo táctil (valor es 1), el tamaño del sprite **Balloon1** dejará de crecer.

* Si el tamaño es menor de 90, caerá (la coordenada Y disminuye).
* Si el tamaño está entre 90 y 120, volará hacia el cielo (la coordenada Y aumenta).

.. image:: img/13_balloon9.png

Si no se toca el módulo táctil, el globo seguirá creciendo lentamente y cuando el tamaño sea mayor de 120, explotará (cambia al disfraz con efecto de explosión).

.. image:: img/13_balloon10.png



