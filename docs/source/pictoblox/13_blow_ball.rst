.. _blow_ball:

2.13 Blow Ball
==============================

In this project, we use sound sensor to make the ball on the stage fly upwards. Blow into the sound sensor module, the more vibration it feels, the higher the ball can fly. When the ball touches the string, it makes a nice sound as well as a twinkling starlight.

.. image:: img/18_ball.png

You Will Learn
---------------------

- How the Sound module works and the angle range
- Fill the sprite with colors
- Touch between the sprites

Build the Circuit
-----------------------

A sound sensor is defined as a module that detects sound waves through its intensity and converting it to electrical signals.

This module has two outputs:

* **AO**: analog output, real-time output voltage signal of microphone.
* **DO**: when the intensity of the sound reaches a certain threshold, the output is a high or low level signal. The threshold sensitivity can be achieved by adjusting the potentiometer.

Here we have used only the AO pin, now build the circuit according to the following diagram.

.. image:: img/circuit/sound_circuit.png

* :ref:`cpn_breadboard`
* :ref:`cpn_sound` 

Programming
------------------

The effect we want to get is that when you blow into the sound sensor, the ball sprite on the stage keeps going up, and if you stop blowing, it will fall on the bowl sprite. If it touches the Line sprite while walking up or falling down, it will make a musical sound and emit star sprites in all directions.


**1. Select sprite and backdrop**

Delete the default sprite, select the **Ball**, **Bowl** and **Star** sprite.

.. image:: img/18_ball1.png


Move the **Bowl** sprite to the bottom center of the stage and enlarge its size.

.. image:: img/18_ball3.png

Because we need to move it upwards, so set direction of **Ball** sprite to 0.

.. image:: img/18_ball4.png

Set the size and direction of the **Star** sprite to 180 because we need it to fall down, or you can change it to another angle.

.. image:: img/18_ball12.png

Now add the **Stars** backdrop.

.. image:: img/18_ball2.png

**2. Draw a Line sprite**

Add a Line sprite.

.. image:: img/18_ball7.png

Go to the **Costumes** page of the **Line** sprite, reduce the width of the red line on the canvas slightly, then copy it 5 times and align the lines.

.. image:: img/18_ball8.png

Now fill the lines with different colors. First choose a color you like, then click on the **Fill** tool and move the mouse over the line to fill it with color.

.. image:: img/18_ball9.png

Follow the same method to change the color of the other lines.

.. image:: img/18_ball10.png


**3. Scripting the Ball sprite**

Set the initial position of the **Ball** sprite, then when the value of the sound sensor is greater than 100 (it can be any other value, depending on your current environment), let the Ball move up.

.. image:: img/18_ball5.png

Otherwise, the **Ball** sprite will fall and limit its Y coordinate to a minimum of -100. This can be modified to make it look like it is falling on the Bowl sprite.

.. image:: img/18_ball6.png

When the **Line** sprite is hit, the current Y coordinate is saved to the variable **ball_coor** and a **Bling** message is broadcast.

.. image:: img/18_ball11.png

**4. Scripting the Star sprite**

When the script starts, first hide the **Star** sprite. When the **Bling** message is received, clone the **Star** sprite.

.. image:: img/18_ball13.png

When the **Star** sprite appears as a clone, play the sound effect and set its coordinates to be in sync with the **Ball** sprite.

.. image:: img/18_ball14.png

Create the effect of the **Star** sprite appearing, and adjust it as needed.

.. image:: img/18_ball15.png