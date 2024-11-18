.. note:: 

    ¡Hola, bienvenido a la Comunidad de Entusiastas de Raspberry Pi, Arduino y ESP32 en Facebook! Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas postventa y desafíos técnicos con la ayuda de nuestra comunidad y equipo.
    - **Aprender y compartir**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Vistas previas exclusivas**: Obtén acceso anticipado a nuevos anuncios de productos y avances.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más nuevos.
    - **Promociones festivas y sorteos**: Participa en sorteos y promociones especiales de temporada.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _install_arduino:

Instalar el IDE de Arduino (Importante)
==========================================

El IDE de Arduino, conocido como Entorno de Desarrollo Integrado de Arduino, proporciona todo el soporte de software necesario para completar un proyecto con Arduino. Es un software de programación específicamente diseñado para Arduino, proporcionado por el equipo de Arduino, que nos permite escribir programas y cargarlos en la placa Arduino.

El Arduino IDE 2.0 es un proyecto de código abierto. Representa un gran avance respecto a su robusto predecesor, el Arduino IDE 1.x, y viene con una interfaz de usuario renovada, un mejorado gestor de placas y bibliotecas, un depurador, función de autocompletado y mucho más.

En este tutorial, mostraremos cómo descargar e instalar el Arduino IDE 2.0 en tu computadora con Windows, Mac o Linux.

Requisitos
-------------------

* Windows - Win 10 y versiones posteriores, 64 bits
* Linux - 64 bits
* Mac OS X - Versión 10.14: "Mojave" o superior, 64 bits

Descargar el Arduino IDE 2.0
-------------------------------

#. Visita |link_download_arduino|.

#. Descarga el IDE para tu versión del sistema operativo.

    .. image:: img/sp_001.png

Instalación
------------------------------

Windows
^^^^^^^^^^^^^

#. Haz doble clic en el archivo ``arduino-ide_xxxx.exe`` para ejecutar el archivo descargado.

#. Lee el Acuerdo de Licencia y acepta los términos.

    .. image:: img/sp_002.png

#. Elige las opciones de instalación.

    .. image:: img/sp_003.png

#. Elige la ubicación de la instalación. Se recomienda que el software se instale en una unidad distinta a la unidad del sistema.

    .. image:: img/sp_004.png

#. Luego haz clic en Finalizar.

    .. image:: img/sp_005.png

macOS
^^^^^^^^^^^^^^^^

Haz doble clic en el archivo descargado ``arduino_ide_xxxx.dmg`` y sigue las instrucciones para copiar el **Arduino IDE.app** a la carpeta **Aplicaciones**. Verás que el IDE de Arduino se instala correctamente en pocos segundos.

.. image:: img/macos_install_ide.png
    :width: 800

Linux
^^^^^^^^^^^^

Para el tutorial sobre cómo instalar el IDE de Arduino 2.0 en un sistema Linux, 
consulta: https://docs.arduino.cc/software/ide-v2/tutorials/getting-started/ide-v2-downloading-and-installing#linux

Abrir el IDE
--------------

#. Cuando abras por primera vez el Arduino IDE 2.0, este instalará automáticamente las placas AVR de Arduino, las bibliotecas integradas y otros archivos necesarios.

    .. image:: img/sp_901.png

#. Además, tu firewall o centro de seguridad puede mostrarte algunas ventanas preguntándote si deseas instalar algunos controladores de dispositivo. Instala todos los que te pida.

    .. image:: img/sp_104.png

#. ¡Ahora tu IDE de Arduino está listo!

    .. note::
        En caso de que algunas instalaciones no se hayan realizado correctamente debido a problemas de red u otras razones, puedes volver a abrir el IDE de Arduino y este terminará el resto de la instalación. La ventana de salida no se abrirá automáticamente una vez completadas todas las instalaciones, a menos que hagas clic en Verificar o Subir.
