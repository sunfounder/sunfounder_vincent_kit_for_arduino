.. _cpn_touch:

Touch Switch Module
==================================

.. image:: img/touch168.png
    :width: 300
    :align: center

* **IO**: Signal pin, usually low level, will output high level after touch.
* **VCC**: Power supply, 3.3 ~ 5V DC.
* **GND**: Ground.

This module is a capacitive touch switch module based on a touch sensor IC (TTP223B). In the normal state, the module outputs a low level with low power consumption; when a finger touches the corresponding position, the module outputs a high level and becomes low level again after the finger is released.

Here is how the capacitive touch switch works:

A capacitive touch switch has different layers—top insulating face plate followed by touch plate, another insulating layer and then ground plate.

.. image:: img/touch169.jpeg

In practice, a capacitive sensor can be made on a double-sided PCB by regarding one side as the touch sensor and the opposite side as ground plate of the capacitor. When power is applied across these plates, the two plates get charged. In equilibrium state, the plates have the same voltage as the power source.

The touch detector circuit has an oscillator whose frequency is dependent on capacitance of the touchpad. When a finger is moved close to the touchpad, additional capacitance causes frequency of this internal oscillator to change. The detector circuit tracks oscillator frequency at timed intervals, and when the shift crosses the threshold change, the circuit triggers a key-press event.

**Example**

* :ref:`ar_touch` (Arduino Project)
* :ref:`balloon` (Scratch Project)