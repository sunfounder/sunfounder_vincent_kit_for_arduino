.. note:: 

    Hola, ¡bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook! Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte de expertos**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y Comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_keypad:

Teclado Matricial
========================

Un teclado matricial es una disposición rectangular de 12 o 16 botones OFF-(ON). 
Sus contactos se acceden a través de un conector adecuado para la conexión con un cable de cinta o para la inserción en una placa de circuito impreso. 
En algunos teclados, cada botón se conecta con un contacto separado en el conector, mientras que todos los botones comparten una tierra común.

.. image:: img/keypad314.png

Con mayor frecuencia, los botones están codificados en una matriz, lo que significa que cada uno de ellos conecta un par único de conductores en la matriz. 
Esta configuración es adecuada para ser sondeada por un microcontrolador, el cual puede programarse para enviar un pulso de salida a cada uno de los cuatro cables horizontales por turno. 
Durante cada pulso, verifica los cuatro cables verticales restantes en secuencia para determinar cuál, si alguno, está llevando una señal. 
Se deben añadir resistencias pullup o pulldown a los cables de entrada para evitar que las entradas del microcontrolador se comporten de manera impredecible cuando no haya señal presente.

**Ejemplo**

* :ref:`ar_keypad` (Proyecto Arduino)
* :ref:`ar_access_system` (Proyecto Arduino)
