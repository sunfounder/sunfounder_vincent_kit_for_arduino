.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_receive:

Módulo Receptor de Infrarrojos
=================================

**Módulo Receptor de IR**

.. image:: img/image185.png

* S: Salida de señal
* +：VCC
* -: GND

Un receptor de infrarrojos es un componente que recibe señales infrarrojas y puede recibir rayos infrarrojos de forma independiente y emitir señales compatibles con el nivel TTL. Es similar en tamaño a un transistor empaquetado en plástico normal y es adecuado para todo tipo de control remoto por infrarrojos y transmisión infrarroja.

La comunicación por infrarrojos, o IR, es una tecnología de comunicación inalámbrica popular, de bajo costo y fácil de usar. La luz infrarroja tiene una longitud de onda ligeramente mayor que la luz visible, por lo que es imperceptible al ojo humano, lo que la hace ideal para la comunicación inalámbrica. Un esquema de modulación común para la comunicación por infrarrojos es la modulación de 38KHz.

* Adopta el sensor receptor de IR HX1838, alta sensibilidad
* Se puede usar para control remoto
* Fuente de alimentación: 5V
* Interfaz: Digital
* Frecuencia de modulación: 38Khz
* Definición de pines: (1) Salida (2) Vcc (3) GND
* Tamaño: 23.5mm x 21.5mm

**Control Remoto**

.. image:: img/image186.jpeg
    :width: 400

Este es un control remoto inalámbrico por infrarrojos delgado y mini con 21 botones funcionales y una distancia de transmisión de hasta 8 metros, adecuado para operar una amplia gama de dispositivos en la habitación de un niño.

* Tamaño: 85x39x6mm
* Rango del control remoto: 8-10m
* Batería: Batería de litio-manganeso tipo botón de 3V
* Frecuencia portadora de infrarrojos: 38KHz
* Material de la superficie: PET de 0.125mm
* Vida útil efectiva: más de 20,000 usos

**Ejemplo**

* :ref:`ar_receive` (Proyecto Arduino)
* :ref:`ar_guess_number` (Proyecto Arduino)
