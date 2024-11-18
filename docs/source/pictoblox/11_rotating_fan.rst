.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _rotating_fan:

2.11 Ventilador Giratorio
===========================

En este proyecto, haremos que un sprite de estrella gire como un ventilador.

Al hacer clic en las flechas izquierda y derecha en el escenario, se controlará la rotación en sentido horario y antihorario del motor y del sprite de estrella. Al hacer clic en la estrella, se detendrá la rotación.

.. image:: img/13_fan.png

Lo que aprenderás
--------------------

- Principio de funcionamiento del motor.
- Función de transmisión de mensajes (broadcast).
- Bloque para detener otros scripts en un sprite.

Construir el Circuito
-------------------------

En este proyecto, utilizaremos el chip controlador de motor :ref:`cpn_l293d` para hacer que el motor gire.

El L293D es un controlador de motor de 4 canales con alto voltaje y alta corriente integrado en un chip.

Sus pines son los siguientes:

El pin **EN** es un pin habilitador y solo funciona con nivel alto; **A** representa entrada y **Y** salida. Cuando el pin **EN** está en alto, si **A** está en alto, **Y** genera nivel alto; si **A** está en bajo, **Y** genera nivel bajo. Cuando el pin **EN** está en bajo, el L293D no funciona.

.. image:: img/13_l293d.png

Construye el circuito según el siguiente diagrama:

* El pin habilitador 1,2EN del L293D ya está conectado a 3.3V, por lo que el L293D está siempre en estado operativo.
* Conecta el pin 1A y 2A a los pines 9 y 10 de la placa de control, respectivamente.
* Los dos pines del motor están conectados a los pines 1Y y 2Y, respectivamente.
* Cuando el pin 10 está en nivel alto y el pin 9 en bajo, el motor girará en una dirección.
* Cuando el pin 10 está en bajo y el pin 9 en alto, el motor girará en la dirección opuesta.

.. image:: img/circuit/motor_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_motor`
* :ref:`cpn_l293d`

Programación
----------------

El objetivo es usar dos sprites de flechas para controlar la rotación en sentido horario y antihorario del motor y del sprite de estrella, respectivamente. Al hacer clic en el sprite de estrella, el motor se detendrá.

**1. Agregar sprites**

Elimina el sprite predeterminado, luego selecciona el sprite **Star** y el sprite **Arrow1** y duplica **Arrow1**.

.. image:: img/13_star.png

En la opción **Costumes**, cambia el sprite **Arrow1** a un disfraz de dirección diferente.

.. image:: img/13_star1.png

Ajusta el tamaño y la posición de los sprites según sea necesario.

.. image:: img/13_star2.png

**2. Sprite de flecha izquierda**

Cuando se hace clic en este sprite, transmite un mensaje - turn, luego establece el pin digital 9 en bajo y el pin 10 en alto, y configura la variable **flag** en 1. Si haces clic en el sprite de flecha izquierda, notarás que el motor gira en sentido antihorario. Si gira en sentido horario, intercambia las posiciones de los pines 9 y 10.

* `[broadcast <https://en.scratch-wiki.info/wiki/Broadcast>`_]: Desde la paleta **Eventos**, utilizado para transmitir un mensaje a otros sprites. Cuando los otros sprites reciben este mensaje, ejecutarán un evento específico. Por ejemplo, aquí se usa **turn**, cuando el sprite **Star** recibe este mensaje, ejecuta el script de rotación.
* Variable flag: El sentido de rotación del sprite de estrella está determinado por el valor de flag. Así que al crear la variable **flag**, haz que se aplique a todos los sprites.

.. image:: img/13_left.png

**3. Sprite de flecha derecha**

Cuando se hace clic en este sprite, transmite un mensaje - turn, luego establece el pin digital 9 en alto y el pin 10 en bajo para hacer que el motor gire en sentido horario, y establece la variable **flag** en 0.

.. image:: img/13_right.png

**4. Sprite de estrella**

Este sprite incluye dos eventos:

* Cuando el sprite **Star** recibe el mensaje turn, determina el valor de flag; si flag es 1, gira 10 grados hacia la izquierda, de lo contrario gira en sentido contrario. Dado que está en [FOREVER], seguirá girando.
* Cuando se hace clic en este sprite, establece ambos pines del motor en alto para detener la rotación y detener los otros scripts en este sprite.

.. image:: img/13_broadcast.png



