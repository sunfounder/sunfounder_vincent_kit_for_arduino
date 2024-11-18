.. note:: 

    Hola, bienvenido a la comunidad de entusiastas de SunFounder Raspberry Pi, Arduino y ESP32 en Facebook. Profundiza en Raspberry Pi, Arduino y ESP32 junto a otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas posventa y desafíos técnicos con ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Avances exclusivos**: Accede anticipadamente a anuncios de nuevos productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones especiales por festividades.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_transistor:

Transistor
============

.. image:: img/npn_pnp.png
    :width: 300

Un transistor es un dispositivo semiconductor que controla la corriente mediante corriente. Funciona amplificando una señal débil a una señal de mayor amplitud y también se utiliza como interruptor sin contacto. 

Un transistor es una estructura de tres capas compuesta por semiconductores de tipo P y tipo N. Estas forman tres regiones internamente. La más delgada en el medio es la región base; las otras dos son de tipo N o tipo P: la región más pequeña con una alta densidad de portadores mayoritarios es la región del emisor, mientras que la otra es la región del colector. Esta composición permite que el transistor actúe como amplificador. 
A partir de estas tres regiones se generan tres terminales: base (b), emisor (e) y colector (c). Estas forman dos uniones P-N, denominadas unión del emisor y unión del colector. La dirección de la flecha en el símbolo del circuito del transistor indica la dirección de la unión del emisor. 

* `P–N junction - Wikipedia <https://en.wikipedia.org/wiki/P-n_junction>`_

Según el tipo de semiconductor, los transistores se pueden dividir en dos grupos: NPN y PNP. Por las siglas, podemos deducir que el primero está compuesto por dos semiconductores de tipo N y uno de tipo P, y que el segundo es lo opuesto. Ver la figura a continuación.

.. note::
    El s8550 es un transistor PNP y el s8050 es un transistor NPN. Son muy similares en apariencia, por lo que debemos revisarlos cuidadosamente para identificar sus etiquetas.

.. image:: img/transistor_symbol.png
    :width: 600

Cuando una señal de nivel alto pasa por un transistor NPN, se energiza. Pero un transistor PNP necesita una señal de nivel bajo para activarse. Ambos tipos de transistores se utilizan frecuentemente como interruptores sin contacto, tal como en este experimento.

Coloca el lado de la etiqueta mirando hacia nosotros y los pines apuntando hacia abajo. Los pines de izquierda a derecha son emisor (e), base (b) y colector (c).

.. image:: img/ebc.png
    :width: 150


* `S8050 Transistor Datasheet <https://datasheet4u.com/datasheet-pdf/WeitronTechnology/S8050/pdf.php?id=576670>`_
* `S8550 Transistor Datasheet <https://www.mouser.com/datasheet/2/149/SS8550-118608.pdf>`_


