Part 4 Appendix
================

4.1 Add Libraries
------------------

**What is Library?**
^^^^^^^^^^^^^^^^^^^^^^

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
^^^^^^^^^^^^^^^^^^^^^^

Some libraries are already built in the Arduino IDE, when some others
may need to be added. So now let's see how to add one. There are 2
methods for that.

**Method 1**

Directly import the library in Arduino IDE (take Dht as an example
below). The advantage of this method is easy to understand and operate,
but on the other hand, only one library can be imported at a time. So it
is inconvenient when you need to add quite a lot of libraries.

**Step 1**: Select **Sketch** -> **Include Library** -> **Add ZIP
Library**.

.. image:: media/image291.png
   :width: 6.04167in
   :height: 2.46875in
   :align: center

**Step 2**: Find *Library folder*, Click **Open**.

.. image:: media/image292.png
   :width: 4.94792in
   :height: 2.97917in
   :align: center

**Step 3**: When you see **Library added to your libraries. Check
"Include library" menu**, it means you have added the library
successfully. Please use the same method to add other libraries then.

.. image:: media/image293.png
   :width: 5.09167in
   :height: 0.55625in
   :align: center

**Method 2**

Directly copy the library to libraries/Arduino path. This method can
copy all libraries and add them at a time, but the drawback is that it
is difficult to find libraries/Arduino.

**Step 1**: Click **File** -> **Preferences** and on the pop-up window
you can see the path of the libraries folder in the text box as shown
below.

.. image:: media/image294.png
   :width: 6.41667in
   :height: 2.13542in
   :align: center

**Step 2**: Copy all Libraries in the *library* folder.

.. image:: media/image295.png
   :width: 5.52083in
   :height: 2.42708in
   :align: center

**Step 3**: Go to the path above and you will see there is a *libraries*
folder, click to open it.

.. image:: media/image296.png
   :width: 5.01042in
   :height: 1.46875in
   :align: center

**Step 4**: Paste all the libraries copied before to the folder. Then
you can see them in libraries folder.

.. image:: media/image297.png
   :width: 3.8125in
   :height: 1.54167in
   :align: center

**Copyright Notice**
^^^^^^^^^^^^^^^^^^^^^

All contents including but not limited to texts, images, and code in
this manual are owned by the SunFounder Company. You should only use it
for personal study, investigation, enjoyment, or other non-commercial or
nonprofit purposes, under the related regulations and copyrights laws,
without infringing the legal rights of the author and relevant right
holders. For any individual or organization that uses these for
commercial profit without permission, the Company reserves the right to
take legal action.
