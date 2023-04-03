.. _eat_apple:

2.16 GAME - Eat Apple
==============================

In this project, we play a game that uses button to control Beetle to eat apple.

When the green flag is clicked, press the button and Beetle will rotate, press the button again and Beetle stops running and goes forward at that angle. You need to control the angle of Beetle so that it moves forward without touching the black line on the map until it eats the apple. If it touches the black line, the game is over.

.. image:: img/14_apple.png

Build the Circuit
-----------------------

The button is a 4-pin device, since the pin 1 is connected to pin 2, and pin 3 to pin 4, when the button is pressed, the 4 pins are connected, thus closing the circuit.

.. image:: img/5_buttonc.png

Build the circuit according to the following diagram.

* Connect one of the pins on the left side of the button to pin 12, which is connected to a pull-down resistor and a 0.1uF (104) capacitor (to eliminate jitter and output a stable level when the button is working).
* Connect the other end of the resistor and capacitor to GND, and one of the pins on the right side of the button to 5V.

.. image:: img/circuit/button_circuit.png


* :ref:`cpn_breadboard`
* :ref:`cpn_button`
* :ref:`cpn_resistor`
* :ref:`cpn_capacitor`

Programming
------------------
The effect we want to achieve is to use the button to control the direction of the **Beetle** sprite to move forward and eat the apple without touching the black line on the **Maze** backdrop, which will switch the backdrop when eaten.

Now add the relevant backdrops and sprites.

**1. Adding backdrops and sprites**

Add a **Maze** backdrop via the **Choose a backdrop** button.

.. image:: img/14_backdrop.png

Delete the default sprite, then select the **Beetle** sprite.

.. image:: img/14_sprite.png

Place the **Beetle** sprite at the entrance of the **Maze** backdrop, remembering the x,y coordinate values at this point, and resize the sprite to 40%.

.. image:: img/14_sprite1.png

**2. Draw a backdrop**

Now it's time to simply draw a backdrop with the WIN! character appearing on it.

First click on the backdrop thumbnail to go to the **Backdrops** page and click on the blank backdrop1.

.. image:: img/14_paint_back.png
    :width: 800

Now start drawing, you can refer to the picture below to draw, or you can draw a backdrop on your own, as long as the expression is winning.

* Using the **Circle** tool, draw an ellipse with the color set to red and no outline.
* Then use the **Text** tool, write the character \"WIN!\", set the character color to black, and adjust the size and position of the character.
* Name the backdrop as **Win**.

.. image:: img/14_win.png

**3. Scripting for the backdrop**

The backdrop needs to be switched to **Maze** every time the game starts.

.. image:: img/14_switchback.png

**4. Writing scripts for the sprite Beetle**

Now write a script for the sprite **Beetle** to be able to move forward and turn direction under the control of a button. The workflow is as follows.

* When the green flag is clicked, set the **Beetle** angle to 90, and the position to (-134, -134), or replace it with the coordinate value of your own placed position. Create the variable **flag** and set the initial value to -1.

.. image:: img/14_bee1.png

Next, in the [forever] block, four [if] blocks are used to determine various possible scenarios.

* If the key is 1 (pressed), use the [`mod <https://en.scratch-wiki.info/wiki/Boolean_Block>`_] block to toggle the value of the variable **flag** between 0 and 1 (alternating between 0 for this press and 1 for the next press).

.. image:: img/14_bee2.png

* If flag=0 (this key press), let the **Beetle** sprite turn clockwise. Then determine if flag is equal to 1 (key pressed again), the **Beetle** sprite moves forward. Otherwise, it keeps turning clockwise.

.. image:: img/14_bee3.png

* If the Beetle sprite touches black (the black line on the **Maze** backdrop), the game ends and the script stops running.

.. note::
    
    You need to click on the color area in the [Touch color] block, and then select the eyedropper tool to pick up the color of the black line on the stage. If you choose a black arbitrarily, this [Touch color] block will not work.


.. image:: img/14_bee5.png

* If Beetle touches red (Also use the straw tool to pick up the red color of the apple), the backdrop will be switched to **Win**, which means the game succeeds and stops the script from running.


.. image:: img/14_bee4.png




