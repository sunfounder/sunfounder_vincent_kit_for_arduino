.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_relay:

Módulo de Relé
============================

.. image:: img/relay_module.png
    :width: 400
    :align: center

El módulo de relé es un módulo compuesto por un relé y un circuito simple que se puede usar para controlar dispositivos de alto voltaje, como electrodomésticos, emitiendo un voltaje bajo como 3.3V desde la placa de control.

CARACTERÍSTICAS
-----------------------

* Salida: 250VAC-10A, 125VAC-10A, 30VDC-10A, 28VDC-10A.
* Voltaje de operación: 5V, corriente de atracción alrededor de 70mA.
* Con indicador de señal
* Entrada alta y el relé se cierra; entrada baja y el relé se abre.
* Uso de transistor 8050 para accionar la acción del relé.
* Con agujeros para tornillos de montaje.
* Tamaño de PCB: 1.8cm x 4.0cm x 1.9cm, peso 15g.

PINOUT
----------------

.. image:: img/relay_pinout.jpg

**ENTRADA**

Tiene un encabezado de pines de 1×3 (paso de 2.54mm) para conectar la alimentación (5V y 0V), y para controlar el relé. Los pines están marcados en la PCB:

* **-**: GND
* **+**: VCC
* **S**: Pin de señal, usado para controlar este relé. Entrada alta y el relé se cierra; entrada baja y el relé se abre.

**SALIDA**

El módulo de relé de 1 canal podría considerarse como interruptores en serie: 1 normalmente abierto (NO), 1 normalmente cerrado (NC) y 1 pin común (COM).

* **COM** - Pin común.
* **NC** - Normalmente cerrado, en este caso NC está conectado con COM cuando el pin **S** está en bajo y desconectado cuando el pin **S** está en alto.
* **NO** - Normalmente abierto, en este caso NO está desconectado con COM cuando el pin **S** está en bajo y conectado cuando el pin **S** está en alto.

¿CÓMO FUNCIONA EL RELÉ?
-------------------------

Como sabemos, un relé es un dispositivo que se usa para proporcionar conexión 
entre dos o más puntos o dispositivos en respuesta a la señal de entrada 
aplicada. En otras palabras, los relés proporcionan aislamiento entre el 
controlador y el dispositivo, ya que los dispositivos pueden funcionar con 
CA y CC. Sin embargo, reciben señales de un microcontrolador que funciona 
con CC, por lo que se requiere un relé para cerrar esta brecha. Los relés son 
extremadamente útiles cuando necesitas controlar una gran cantidad de corriente 
o voltaje con una pequeña señal eléctrica.

Hay 5 partes en cada relé:

.. image:: img/relay142.jpeg

**Electroimán** - Consiste en un núcleo de hierro envuelto por un bobinado 
de alambre. Cuando pasa electricidad, se vuelve magnético, por lo que se llama 
electroimán.

**Armadura** - La tira magnética móvil se conoce como armadura. Cuando la 
corriente fluye a través del bobinado, este se energiza, produciendo un campo 
magnético que se usa para abrir o cerrar los puntos normalmente abiertos (N/O) 
o cerrados (N/C). La armadura puede moverse con corriente continua (CC) y 
corriente alterna (CA).

**Resorte** - Cuando no fluye corriente a través del bobinado en el electroimán, 
el resorte aleja la armadura para que el circuito no pueda completarse.

**Conjuntos de contactos eléctricos** - Hay dos puntos de contacto:

- Normalmente abierto: conectado cuando el relé está activado, y desconectado 
cuando está inactivo.
- Normalmente cerrado: no conectado cuando el relé está activado, y conectado 
cuando está inactivo.

**Carcasa moldeada** - Los relés están cubiertos con plástico para protección.

El principio de funcionamiento del relé es simple. Cuando se suministra energía 
al relé, la corriente comienza a fluir a través del bobinado de control; como 
resultado, el electroimán comienza a energizarse. Luego, la armadura es atraída 
hacia el bobinado, moviendo el contacto móvil para conectar los contactos 
normalmente abiertos. Así, el circuito con la carga se energiza. Al desconectar 
el circuito ocurre un caso similar, ya que el contacto móvil será empujado hacia 
los contactos normalmente cerrados bajo la fuerza del resorte. De esta forma, el 
encendido y apagado del relé puede controlar el estado de un circuito de carga.

**Ejemplo**

* :ref:`ar_relay` (Proyecto Arduino)
* :ref:`ar_overheat_monitor` (Proyecto Arduino)
