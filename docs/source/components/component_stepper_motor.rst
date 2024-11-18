.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_stepper_motor:

Motor Paso a Paso
=========================

.. image:: img/stepper129.png
    :align: center

Los motores paso a paso, debido a su diseño único, pueden controlarse con 
un alto grado de precisión sin necesidad de mecanismos de retroalimentación. 
El eje de un motor paso a paso, equipado con una serie de imanes, es controlado 
por una serie de bobinas electromagnéticas que se cargan positiva y negativamente 
en una secuencia específica, moviéndolo hacia adelante o hacia atrás en pequeños 
"pasos".

**Principio**

Existen dos tipos de motores paso a paso: unipolares y bipolares, y es muy 
importante saber con cuál estás trabajando. En este experimento, utilizaremos 
un motor paso a paso unipolar.

El motor paso a paso es de cuatro fases y utiliza una fuente de alimentación 
de corriente continua unipolar. Mientras energices todas las bobinas de fase 
del motor en la secuencia adecuada, este girará paso a paso. El **Esquema** 
de un motor paso a paso reactivo de cuatro fases:

**Cómo funciona un motor paso a paso de 4 fases:**

.. image:: img/stepper130.png
   :align: center

En la figura, en el centro del motor hay un rotor, un imán permanente con 
forma de engranaje. Alrededor del rotor, los dientes están numerados del 0 
al 5. Más hacia afuera, hay 8 polos magnéticos, con cada dos polos opuestos 
conectados por bobinas. Así forman cuatro pares de fases de la A a la D. 
Estas fases están conectadas en paralelo en el circuito, y los polos magnéticos 
de cada fase están en serie.

Al principio, el interruptor SB está encendido y los interruptores SA, SC y 
SD están apagados. Los polos magnéticos de la fase B se alinean con los dientes 
0 y 3 del rotor. Cuando el interruptor SC se enciende y los otros están apagados, 
el rotor gira bajo el campo magnético de la fase C y los dientes correspondientes 
se alinean con los polos magnéticos de esa fase. Este ciclo se repite al energizar 
las fases A, B, C y D en secuencia, haciendo que el rotor gire en el orden A, B, C y D.

El motor paso a paso de cuatro fases tiene tres modos de operación: cuatro pasos 
simples, cuatro pasos dobles y ocho pasos. El ángulo de paso en los modos de 
cuatro pasos es el mismo, pero el par de torsión en el modo de cuatro pasos 
simples es menor. El ángulo de paso en el modo de ocho pasos es la mitad del 
de los otros modos, manteniendo un alto par de torsión y mejorando la precisión 
del control. En este experimento, el motor operará en el modo de ocho pasos.

**Módulo ULN2003**

.. image:: img/uln2003.png
    :align: center

.. image:: img/uln338.png

Para usar el motor en el circuito, se necesita una placa controladora. 
El controlador de motor paso a paso ULN2003 es un circuito inversor de 
7 canales. Es decir, cuando la entrada está en alto nivel, la salida 
del ULN2003 está en bajo nivel, y viceversa. Si suministramos un nivel 
alto a IN1 y niveles bajos a IN2, IN3 e IN4, la salida OUT1 estará en 
bajo nivel, encendiendo el D1 y permitiendo que el interruptor SA active 
el motor para que gire un paso. Este proceso se repite siguiendo una 
secuencia específica. El ULN2003 se utiliza aquí para proporcionar esas 
secuencias de temporización para el motor paso a paso.



**Ejemplo**

* :ref:`ar_stepper_motor` (Proyecto Arduino)
* :ref:`ar_access_system` (Proyecto Arduino)
