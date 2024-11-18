.. note:: 

    Hola, ¡bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook! Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte de expertos**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y Comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_rfid:

Módulo MFRC522
=====================

**RFID**

La identificación por radiofrecuencia (RFID, por sus siglas en inglés) se 
refiere a tecnologías que utilizan comunicación inalámbrica entre un objeto 
(o etiqueta) y un dispositivo interrogador (o lector) para rastrear e identificar 
automáticamente dichos objetos. El rango de transmisión de la etiqueta está 
limitado a varios metros desde el lector. No necesariamente se requiere una 
línea de visión clara entre el lector y la etiqueta.

La mayoría de las etiquetas contienen al menos un circuito integrado (IC) y una 
antena. El microchip almacena información y es responsable de gestionar la 
comunicación por radiofrecuencia (RF) con el lector. Las etiquetas pasivas no 
tienen una fuente de energía independiente y dependen de una señal 
electromagnética externa, proporcionada por el lector, para alimentar sus 
operaciones. Las etiquetas activas contienen una fuente de energía independiente, 
como una batería. Por lo tanto, pueden tener mayores capacidades de procesamiento, 
transmisión y rango.

.. image:: img/image230.png
    :align: center


**MFRC522**

El MFRC522 es un chip integrado de lectura y escritura de tarjetas. Se utiliza 
comúnmente en radios de 13.56MHz. Lanzado por la compañía NXP, es un chip de 
tarjeta sin contacto de bajo voltaje, bajo costo y tamaño reducido, siendo una 
excelente opción para instrumentos inteligentes y dispositivos portátiles.

El MF RC522 utiliza un concepto avanzado de modulación y demodulación 
completamente compatible con todos los métodos y protocolos de comunicación 
sin contacto pasivos de 13.56MHz. Además, soporta el algoritmo de encriptación 
rápida CRYPTO1 para verificar productos MIFARE. El MFRC522 también es compatible 
con la comunicación de alta velocidad sin contacto de la serie MIFARE, con una 
tasa de transmisión de datos bidireccional de hasta 424kbit/s. Como un nuevo 
miembro de la serie de lectores altamente integrados de 13.56MHz, el MF RC522 
es muy similar a los existentes MF RC500 y MF RC530, pero también presenta grandes 
diferencias. Se comunica con la máquina anfitriona a través de una forma serial 
que requiere menos cableado. Puedes elegir entre los modos SPI, I2C y UART serial 
(similar a RS232), lo que ayuda a reducir las conexiones, ahorrar espacio en la 
PCB (tamaño más pequeño) y reducir costos.

**Ejemplo**

* :ref:`ar_rfid` (Proyecto con Arduino)
