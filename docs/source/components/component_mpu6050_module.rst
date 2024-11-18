.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_mpu6050:

Módulo MPU6050
===================

.. image:: img/mpu6050_pic.png
    :width: 300
    :align: center

El MPU-6050 es un dispositivo de seguimiento de movimiento de 6 ejes que 
combina un giroscopio de 3 ejes y un acelerómetro de 3 ejes.

Sus tres sistemas de coordenadas se definen de la siguiente manera:

Coloca el MPU6050 sobre la mesa con la etiqueta hacia arriba y un punto en la 
esquina superior izquierda de esta cara. La dirección vertical hacia arriba 
corresponde al eje z del chip. La dirección de izquierda a derecha es el eje X, 
y la dirección de atrás hacia adelante es el eje Y.

.. image:: img/mpu223.png

**Acelerómetro de 3 ejes**

El acelerómetro funciona mediante el efecto piezoeléctrico, que es la capacidad 
de ciertos materiales de generar una carga eléctrica en respuesta a una presión 
mecánica aplicada.

Imagina una caja en forma de cuboide con una pequeña bola en su interior, como 
en la imagen de arriba. Las paredes de esta caja están hechas de cristales 
piezoeléctricos. Cada vez que inclinas la caja, la bola se mueve en la dirección 
de la inclinación debido a la gravedad. La pared con la que colisiona la bola 
genera pequeñas corrientes piezoeléctricas. Hay tres pares de paredes opuestas 
en el cuboide, cada par corresponde a un eje en el espacio 3D: X, Y y Z. Según 
la corriente generada en las paredes piezoeléctricas, se puede determinar la 
dirección y la magnitud de la inclinación.

.. image:: img/mpu224.png

Podemos usar el MPU6050 para detectar la aceleración en cada eje de coordenadas 
(en estado de reposo sobre el escritorio, la aceleración en el eje Z es de 1 
unidad de gravedad, y en los ejes X e Y es de 0). Si está inclinado o en una 
condición de ingravidez o sobrepeso, la lectura correspondiente cambiará.

Existen cuatro rangos de medición que se pueden seleccionar programáticamente: 
+/-2g, +/-4g, +/-8g y +/-16g (2g por defecto) para cada precisión. Los valores 
varían de -32768 a 32767.

La lectura del acelerómetro se convierte en un valor de aceleración mapeando la 
lectura desde el rango de lectura al rango de medición.

Aceleración = (Datos brutos del eje del acelerómetro / 65536 \* rango total de 
aceleración) g

Tomando el eje X como ejemplo, cuando el dato bruto del eje X del acelerómetro 
es 16384 y el rango es +/-2g:

**Aceleración en el eje X = (16384 / 65536 \* 4) g** **=1g**

**Giroscopio de 3 ejes**

Los giroscopios funcionan mediante el principio de la aceleración de Coriolis. 
Imagina una estructura similar a un tenedor en constante movimiento de un lado 
a otro, sostenida en su lugar mediante cristales piezoeléctricos. Cuando intentas 
inclinar esta disposición, los cristales experimentan una fuerza en la dirección 
de la inclinación debido a la inercia del tenedor en movimiento. Los cristales 
producen una corriente en consenso con el efecto piezoeléctrico, y esta corriente 
se amplifica.

.. image:: img/mpu225.png

El giroscopio también tiene cuatro rangos de medición: +/- 250, +/- 500, 
+/- 1000 y +/- 2000. El método de cálculo y la aceleración son básicamente 
consistentes.

La fórmula para convertir la lectura en velocidad angular es la siguiente:

Velocidad angular = (Datos brutos del eje del giroscopio / 65536 \* rango 
total del giroscopio) °/s

Por ejemplo, en el eje X, cuando el dato bruto del eje X del giroscopio es 
16384 y el rango es +/- 250°/s:

**Velocidad angular en el eje X = (16384 / 65536 \* 500)°/s** **=125°/s**

**Ejemplo**

* :ref:`ar_mpu6050` (Proyecto Arduino)
