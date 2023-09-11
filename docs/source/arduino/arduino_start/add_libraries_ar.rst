
.. _add_libraries_ar:

Install libraries (Important)
======================================

A library is a collection of pre-written code or functions that extend the capabilities of the Arduino IDE. Libraries provide ready-to-use code for various functionalities, allowing you to save time and effort in coding complex features.

There are two main ways to install libraries:

Install from Library Manager
------------------------------------

Many libraries are available directly through the Arduino Library Manager. You can access the Library Manager by following these steps:

#. In the **Library Manager**, you can search for the desired library by name or browse through different categories.

   .. note::

      In projects where library installation is required, there will be prompts indicating which libraries to install. Follow the instructions provided, such as "The DHT sensor library library is used here, you can install it from the Library Manager." Simply install the recommended libraries as prompted.

   .. image:: img/install_lib3.png

#. Once you find the library you want to install, click on it and then click the **Install** button.

   .. image:: img/install_lib2.png

#. The Arduino IDE will automatically download and install the library for you.

.. _install_lib_man:

Manual Installation
--------------------------

Some libraries are not available through the **Library Manager** and need to be manually installed. To install these libraries, follow these steps:


#. Open the Arduino IDE and go to **Sketch** -> **Include Library** -> **Add .ZIP Library**.

   .. image:: img/a2dp_add_zip.png

#. Navigate to the directory where the library files are located, such as the ``sunfounder_vincent_kit_for_arduino/library/`` folder, and select the library file and click **Open**.

   .. image:: img/rfid_choose.png

#. After a short while, you will receive a notification indicating a successful installation.

   .. image:: img/rfid_success.png

#. Repeat the same process to add other libraries.


.. note::

   The libraries installed using either of the above methods can be found in the default library directory of the Arduino IDE, which is usually located at ``C:\Users\xxx\Documents\Arduino\libraries``.

   If your library directory is different, you can check it by going to **File** -> **Preferences**.

      .. image:: img/install_lib1.png
