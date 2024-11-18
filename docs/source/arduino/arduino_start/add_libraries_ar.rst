.. note::

    ¡Hola, bienvenido a la Comunidad de Entusiastas de Raspberry Pi, Arduino y ESP32 en Facebook! Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas postventa y desafíos técnicos con la ayuda de nuestra comunidad y equipo.
    - **Aprender y compartir**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Vistas previas exclusivas**: Obtén acceso anticipado a nuevos anuncios de productos y avances.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más nuevos.
    - **Promociones festivas y sorteos**: Participa en sorteos y promociones especiales de temporada.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _add_libraries_ar:

Instalar bibliotecas (Importante)
=====================================

Una biblioteca es una colección de código o funciones preescritas que amplían las capacidades del entorno de desarrollo de Arduino (IDE). Las bibliotecas proporcionan código listo para usar para diversas funcionalidades, lo que te permite ahorrar tiempo y esfuerzo al programar características complejas.

Existen dos formas principales de instalar bibliotecas:

Instalar desde el Administrador de Bibliotecas
--------------------------------------------------

Muchas bibliotecas están disponibles directamente a través del Administrador de Bibliotecas de Arduino. Puedes acceder al Administrador de Bibliotecas siguiendo estos pasos:

#. En el **Administrador de Bibliotecas**, puedes buscar la biblioteca deseada por nombre o explorar diferentes categorías.

   .. note::

      En los proyectos donde se requiera instalar bibliotecas, aparecerán indicaciones sobre qué bibliotecas instalar. Sigue las instrucciones proporcionadas, como por ejemplo: "Aquí se utiliza la biblioteca del sensor DHT, puedes instalarla desde el Administrador de Bibliotecas". Simplemente instala las bibliotecas recomendadas según las indicaciones.

   .. image:: img/install_lib3.png

#. Una vez que encuentres la biblioteca que deseas instalar, haz clic sobre ella y luego haz clic en el botón **Instalar**.

   .. image:: img/install_lib2.png

#. El IDE de Arduino descargará e instalará automáticamente la biblioteca por ti.

.. _install_lib_man:

Instalación Manual
-----------------------

Algunas bibliotecas no están disponibles a través del **Administrador de Bibliotecas** y deben instalarse manualmente. Para instalar estas bibliotecas, sigue estos pasos:

#. Abre el IDE de Arduino y ve a **Esquema** -> **Incluir Biblioteca** -> **Añadir Biblioteca .ZIP**.

   .. image:: img/a2dp_add_zip.png

#. Navega hasta el directorio donde se encuentran los archivos de la biblioteca, como la carpeta ``sunfounder_vincent_kit_for_arduino/library/``, selecciona el archivo de la biblioteca y haz clic en **Abrir**.

   .. image:: img/rfid_choose.png

#. Después de un breve momento, recibirás una notificación indicando que la instalación fue exitosa.

   .. image:: img/rfid_success.png

#. Repite el mismo proceso para agregar otras bibliotecas.

.. note::

   Las bibliotecas instaladas por cualquiera de los métodos anteriores se encuentran en el directorio predeterminado de bibliotecas del IDE de Arduino, que generalmente está ubicado en ``C:\Users\xxx\Documents\Arduino\libraries``.

   Si tu directorio de bibliotecas es diferente, puedes verificarlo yendo a **Archivo** -> **Preferencias**.

      .. image:: img/install_lib1.png
