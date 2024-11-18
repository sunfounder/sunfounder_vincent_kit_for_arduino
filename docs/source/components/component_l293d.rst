.. note:: 

    Hola, ¡bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook! Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte de expertos**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y Comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_l293d:

L293D
=================

El L293D es un controlador de motor de 4 canales integrado en un chip de alta tensión y alta corriente. 
Está diseñado para conectarse a niveles lógicos estándar DTL, TTL y para manejar cargas inductivas (como bobinas de relé, motores de corriente continua y motores paso a paso) y transistores de conmutación de potencia, entre otros. 
Los motores de corriente continua (DC) son dispositivos que convierten la energía eléctrica de corriente continua en energía mecánica. Son ampliamente utilizados en sistemas de accionamiento eléctrico debido a su excelente rendimiento en regulación de velocidad.

A continuación, se muestra la figura de los pines del L293D. Este chip tiene dos pines de alimentación (Vcc1 y Vcc2). 
El pin Vcc2 se utiliza para suministrar energía al motor, mientras que el pin Vcc1 suministra energía al chip. Dado que aquí se utiliza un motor de corriente continua de tamaño pequeño, conecta ambos pines a +5V.

.. image:: img/l293d111.png

La siguiente es la estructura interna del L293D. 
El pin EN es un pin de habilitación que solo funciona en nivel alto; "A" representa la entrada y "Y" la salida. 
Puedes ver la relación entre ellos en la esquina inferior derecha. 
Cuando el pin EN está en nivel alto, si "A" está en alto, "Y" emite nivel alto; si "A" está en bajo, "Y" emite nivel bajo. Cuando el pin EN está en nivel bajo, el L293D no funciona.

.. image:: img/l293d334.png

* `Ficha técnica del L293D <https://www.ti.com/lit/ds/symlink/l293d.pdf?ts=1627004062301&ref_url=https%253A%252F%252Fwww.ti.com%252Fproduct%252FL293D>`_

**Ejemplo**

* :ref:`ar_motor` (Proyecto Arduino)
* :ref:`rotating_fan` (Proyecto Scratch)
