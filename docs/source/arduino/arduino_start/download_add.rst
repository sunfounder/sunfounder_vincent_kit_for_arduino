Download Code and Add Libraries
================================

Download the Code
-----------------------

Download the relevant code from the link below.

* :download:`SunFounder Vincent Kit for Arduino <https://github.com/sunfounder/sunfounder_vincent_kit_for_arduino/archive/refs/heads/master.zip>`

* Or check out the code at `Vincent Kit for Arduino - GitHub <https://github.com/sunfounder/sunfounder_vincent_kit_for_arduino>`_

.. _add_libraries_ar:

Add Libraries
------------------

**What is Library?**

A library, gathering some function definitions and header files, usually
contains two files: .h (header file, including function statement, Macro
definition, constructor definition, etc.) and .cpp (execution file, with
function implementation, variable definition, and so on). When you need
to use a function in some library, you just need to add a header file
(e.g. #include <dht.h>), and then call that function. This can make your
code more concise. If you don't want to use the library, you can also
write that function definition directly. Though as a result, the code
will be long and inconvenient to read.

**Add libraries**


Some libraries are already built in the Arduino IDE, when some others
may need to be added. So now let's see how to add one. There are 2
methods for that.

**Method 1 Add .ZIP Library**

Directly import the library in Arduino IDE (take Dht as an example
below). The advantage of this method is easy to understand and operate,
but on the other hand, only one library can be imported at a time. So it
is inconvenient when you need to add quite a lot of libraries.

**Step 1**: Select **Sketch** -> **Include Library** -> **Add ZIP
Library**.

.. image:: img/image291.png
   :align: center

**Step 2**: Find ``Library`` folder, Click **Open**.

.. image:: img/image292.png
   :align: center

**Step 3**: When you see **Library added to your libraries. Check
"Include library" menu**, it means you have added the library
successfully. Please use the same method to add other libraries then.

.. image:: img/image293.png
   :align: center

**Method 2 Manually Add**

Directly copy the library to ``libraries/Arduino`` path. This method can
copy all libraries and add them at a time, but the drawback is that it
is difficult to find ``libraries/Arduino``.

**Step 1**: Click **File** -> **Preferences** and on the pop-up window
you can see the path of the libraries folder in the text box as shown
below.

.. image:: img/image294.png
   :align: center

**Step 2**: Copy all Libraries in the *library* folder.

.. image:: img/image295.png
   :align: center

**Step 3**: Go to the path above and you will see there is a *libraries*
folder, click to open it.

.. image:: img/image296.png
   :align: center

**Step 4**: Paste all the libraries copied before to the folder. Then
you can see them in libraries folder.

.. image:: img/image297.png
   :align: center

There is also a way to use the **Library Manager**, but the libraries added using this method are not necessarily compatible with the code we provide, so it is not recommended.