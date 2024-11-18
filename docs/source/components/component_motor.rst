.. note:: 

    Hola, ¡bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook! Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte de expertos**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_motor:

Motor DC
===================

.. image:: img/image114.jpeg
    :align: center

Este es un motor de corriente continua (DC) de 3V. Cuando aplicas un nivel alto y un nivel bajo en cada uno de los dos terminales, comenzará a girar.

* **Tamaño**: 25*20*15MM
* **Voltaje de operación**: 1-6V
* **Corriente sin carga** (3V): 70mA
* **Velocidad sin carga** (3V): 13000RPM
* **Corriente en bloqueo** (3V): 800mA
* **Diámetro del eje**: 2mm

El motor de corriente continua (DC) es un actuador continuo que convierte energía eléctrica en energía mecánica. Los motores DC hacen funcionar bombas rotativas, ventiladores, compresores, impulsores y otros dispositivos al producir una rotación angular continua.

Un motor DC consta de dos partes: la parte fija del motor llamada **estator** y la parte interna del motor llamada **rotor** (o **armadura** en un motor DC), que gira para producir movimiento. 
La clave para generar movimiento es posicionar la armadura dentro del campo magnético del imán permanente (cuyo campo se extiende desde el polo norte hasta el polo sur). La interacción del campo magnético y las partículas cargadas en movimiento (el cable que transporta corriente genera el campo magnético) produce el torque que hace girar la armadura.

.. image:: img/motor_sche.png
    :align: center

La corriente fluye desde el terminal positivo de la batería a través del circuito, pasando por los cepillos de cobre hacia el conmutador, y luego hacia la armadura.
Pero debido a las dos brechas en el conmutador, este flujo se invierte a mitad de cada rotación completa.
Esta inversión continua convierte esencialmente la corriente continua (DC) de la batería en corriente alterna (AC), permitiendo que la armadura experimente torque en la dirección correcta en el momento adecuado para mantener la rotación.

* `Motor DC - MagLab <https://nationalmaglab.org/education/magnet-academy/watch-play/interactive/dc-motor>`_

**Ejemplo**

* :ref:`ar_motor` (Proyecto Arduino)
* :ref:`rotating_fan` (Proyecto Scratch)
