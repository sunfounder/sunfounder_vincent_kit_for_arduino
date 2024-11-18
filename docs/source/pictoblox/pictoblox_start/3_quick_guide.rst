.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

1.3 Guía Rápida sobre PictoBlox
====================================

Ahora aprendamos a usar PictoBlox en dos modos.

Además, hay un LED integrado conectado al Pin 13 en el Arduino Uno/Mega2560. Aprenderemos a hacer que este LED parpadee en 2 modos diferentes.

.. image:: img/1_led.jpg
    :width: 500
    :align: center


Modo Escenario
-----------------

**1. Conectar a la Placa Arduino**

Conecta tu placa Arduino a la computadora con un cable USB; usualmente, la computadora reconocerá automáticamente tu placa y asignará un puerto COM.

Abre PictoBlox; la interfaz de programación en Python se abrirá por defecto. Debemos cambiar a la interfaz de Bloques.

.. image:: img/0_choose_blocks.png

Luego, verás la esquina superior derecha para cambiar de modo. El modo predeterminado es el Modo Escenario, donde Tobi está en el escenario.

.. image:: img/1_stage_upload.png

Haz clic en **Board** en la barra de navegación superior para seleccionar la placa.

.. image:: img/1_board.png

Por ejemplo, selecciona **Arduino Mega**.

.. image:: img/1_choose_mega.png

Aparecerá una ventana de conexión para que selecciones el puerto y, una vez completada la conexión, regresarás a la página de inicio. Si pierdes la conexión durante el uso, también puedes hacer clic en **Connect** para reconectar.

.. image:: img/1_connect.png

Al mismo tiempo, aparecerán paletas relacionadas con Arduino Mega, como Arduino Mega, Actuators, etc., en la **Paleta de Bloques**.

.. image:: img/1_arduino_mega.png

**2. Subir Firmware**

Como vamos a trabajar en el Modo Escenario, debemos cargar el firmware en la placa. Esto garantizará la comunicación en tiempo real entre la placa y la computadora. Cargar el firmware es un proceso único. Para hacerlo, haz clic en el botón Upload Firmware.

Después de esperar un momento, aparecerá el mensaje de éxito de la carga.

.. note::

    Si estás utilizando esta placa Arduino en PictoBlox por primera vez o si previamente cargaste código con Arduino IDE, entonces necesitas hacer clic en **Upload Firmware** antes de poder usarla.

.. image:: img/1_firmware.png


**3. Programación**

* Abre y ejecuta el script directamente

Puedes abrir los scripts directamente para ejecutarlos, pero primero descárgalos desde `github <https://github.com/sunfounder/sunfounder_vincent_kit_for_arduino/archive/refs/heads/master.zip>`_.

Haz clic en **File** en la esquina superior derecha y selecciona **Open**.

.. image:: img/0_open.png

Selecciona **Open from Computer**.

.. image:: img/0_dic.png

Luego, navega a la ruta ``sunfounder_vincent_kit_for_arduino\scratch\code`` y abre **1. Modo Escenario.sb3**. Asegúrate de haber descargado el código requerido desde `github <https://github.com/sunfounder/sunfounder_vincent_kit_for_arduino/archive/refs/heads/master.zip>`_.

.. image:: img/0_stage.png

Haz clic directamente en el script para ejecutarlo. Algunos proyectos requieren hacer clic en la bandera verde o en el sprite.

.. image:: img/1_more.png

* Programa paso a paso

También puedes escribir el script paso a paso siguiendo estos pasos.

Haz clic en la paleta **Arduino Mega**.

.. image:: img/1_arduino_mega.png

El LED en la placa Arduino se controla mediante el pin digital 13 (solo 2 estados, HIGH o LOW). Arrastra el bloque [set digital pin out as] al área de script.

Dado que el estado predeterminado del LED está encendido, ahora configura el pin 13 en LOW y haz clic en este bloque. Verás que el LED se apaga.

* [set digital pin out as]: Configura los pines digitales (2~13) a nivel (HIGH/LOW).

.. image:: img/1_digital.png

Para ver el efecto del parpadeo continuo del LED, necesitas usar los bloques [Wait 1 seconds] y [forever] en la paleta **Control**. Haz clic en estos bloques después de escribir; un halo amarillo indica que se están ejecutando.

* [Wait 1 seconds]: de la paleta **Control**, usado para establecer el intervalo de tiempo entre 2 bloques.
* [forever]: de la paleta **Control**, permite que el script siga ejecutándose a menos que se detenga manualmente.

.. image:: img/1_more.png

Modo Carga
--------------

**1. Conectar a la Placa Arduino**

Conecta tu placa Arduino a la computadora con un cable USB; usualmente, la computadora reconocerá automáticamente tu placa y asignará un puerto COM.

Abre PictoBlox y haz clic en **Board** en la barra de navegación superior para seleccionar la placa.

.. image:: img/1_board.png

Por ejemplo, selecciona **Arduino Mega**.

.. image:: img/1_choose_mega.png

Aparecerá una ventana de conexión para que selecciones el puerto y, una vez completada la conexión, regresarás a la página de inicio. Si pierdes la conexión durante el uso, también puedes hacer clic en **Connect** para reconectar.

.. image:: img/1_connect.png

Al mismo tiempo, aparecerán paletas relacionadas con Arduino Mega, como Arduino Mega, Actuators, etc., en la **Paleta de Bloques**.

.. image:: img/1_upload_mega.png

Después de seleccionar el Modo Carga, el escenario cambiará al área de código original de Arduino.

.. image:: img/1_upload.png

**2. Programación**

* Abre y ejecuta el script directamente

Haz clic en **File** en la esquina superior derecha.

.. image:: img/0_open.png

Selecciona **Open from Computer**.

.. image:: img/0_dic.png

Luego, navega a la ruta ``sunfounder_vincent_kit_for_arduino\scratch\code`` y abre **1. Upload Mode.sb3**. Asegúrate de haber descargado el código requerido desde `github <https://github.com/sunfounder/sunfounder_vincent_kit_for_arduino/archive/refs/heads/master.zip>`_.

.. image:: img/0_upload.png

Finalmente, haz clic en el botón **Upload Code**.

.. image:: img/1_upload_code.png


* Programa paso a paso

También puedes escribir el script paso a paso siguiendo estos pasos.

Haz clic en la paleta **Arduino Mega**.

.. image:: img/1_upload_mega.png

Arrastra [when Arduino Mega starts up] al área de script, lo cual es necesario para cada script.

.. image:: img/1_mega_starts.png

El LED en la placa Arduino se controla mediante el pin digital 13 (solo 2 estados HIGH o LOW). Arrastra el bloque [set digital pin out as] al área de script.

Dado que el estado predeterminado del LED está encendido, ahora configura el pin 13 en LOW y haz clic en este bloque. Verás que el LED se apaga.

* [set digital pin out as]: Configura el pin digital (2~13) a nivel (HIGH/LOW).

.. image:: img/1_upload_digital.png

En este punto, verás el código de Arduino aparecer en el lado derecho. Si deseas editar este código, puedes activar el modo de edición.

.. image:: img/1_upload1.png

Para ver el efecto del parpadeo continuo del LED, necesitas usar los bloques [Wait 1 seconds] y [forever] en la paleta **Control**. Haz clic en estos bloques después de escribir; un halo amarillo indica que se están ejecutando.

* [Wait 1 seconds]: de la paleta **Control**, usado para establecer el intervalo de tiempo entre 2 bloques.
* [forever]: de la paleta **Control**, permite que el script siga ejecutándose a menos que se apague la energía.

.. image:: img/1_upload_more.png

Finalmente, haz clic en el botón **Upload Code**.

.. image:: img/1_upload_code.png