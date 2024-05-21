.. note::

    Hello, welcome to the SunFounder Raspberry Pi & Arduino & ESP32 Enthusiasts Community on Facebook! Dive deeper into Raspberry Pi, Arduino, and ESP32 with fellow enthusiasts.

    **Why Join?**

    - **Expert Support**: Solve post-sale issues and technical challenges with help from our community and team.
    - **Learn & Share**: Exchange tips and tutorials to enhance your skills.
    - **Exclusive Previews**: Get early access to new product announcements and sneak peeks.
    - **Special Discounts**: Enjoy exclusive discounts on our newest products.
    - **Festive Promotions and Giveaways**: Take part in giveaways and holiday promotions.

    👉 Ready to explore and create with us? Click [|link_sf_facebook|] and join today!

.. _moving_mouse:

2.5 Moving Mouse
===================

Today we are going to make a mouse toy controlled by a potentiometer.

When the green flag is clicked, the mouse on the stage moves forward, and when you rotate the potentiometer, the mouse will change the direction of movement.

.. image:: img/6_mouse.png

You Will Learn
---------------------

- Potentiometer principle
- Read analog pin and ranges
- Mapping one range to another
- Moving and changing the direction of sprite

Build the Circuit
-----------------------

The potentiometer is a resistive element with 3 terminals, the 2 side pins are connected to 5V and GND, and the middle pin is connected to A0. After conversion by the ADC converter of the Arduino board, the value range is 0-1023.

.. image:: img/circuit/potentiometer_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_potentiometer`


Programming
------------------

**1. Choose a sprite**

Delete the default sprite, click the **Choose a Sprite** button in the lower right corner of the sprite area, enter **mouse** in the search box, and then click to add it.

.. image:: img/6_sprite.png

**2. Creating a variable**.

Create a variable called **value** to store the value of the potentiometer read.

Once created, you will see **value** appear inside the **Variables** palette and in the checked state, which means this variable will appear on the stage.

.. image:: img/6_value.png

**3. Read the value of A0**

Store the value of A0 read into the variable **value**.

* [set my variable to 0]: Set the value of the variable.
* [read analog pin A0]: Read the value of A0~A5 in the range of 0-1023.

.. image:: img/6_read_a0.png

To be able to read all the way through, you need to use the [forever] block. Click on this script to run it, rotate the potentiometer in both directions, and you will see that the value range is 0-1023.

.. image:: img/6_1023.png

**4. Move the sprite**

Use the [move steps] block to move the sprite, run the script and you will see the sprite move from the middle to the right.

.. image:: img/6_move.png

**5. Changing the sprite's direction**

Now change the direction of the sprite's movement by the value of A0. Since the value of A0 ranges from 0-1023, but the sprite's rotation direction is -180~180, a [map] block needs to be used.

Also add [when green flag clicked] at the beginning to start the script.

* [`point in direction <https://en.scratch-wiki.info/wiki/Point_in_Direction_()_(block)>`_]: Set the steering angle of the sprite, from **Motion** palette.
* [map from to]: Map a range to another range.

.. image:: img/6_direction.png





