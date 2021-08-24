# sherlach's st build

st - simple terminal
--------------------
st is a simple terminal emulator for X which sucks because you have
to do a lot of manual patching before you have an actually usable 
product.


Requirements
------------
In order to build st you need the Xlib and Harfbuzz header files.


Installation
------------
Edit config.mk to match your local setup (st is installed into
the /usr namespace by default and you might want to change this to
/usr/local).

Afterwards enter the following command to build and install st (if
necessary as root):

```
    $ make clean install
```

Running st
----------
If you did not install st with make clean install, you must compile
the st terminfo entry with the following command:

```
    $ tic -sx st.info
```
See the man page for additional details.

Credits
-------
Based on Aurélien APTEL <aurelien dot aptel at gmail dot com> bt source code.
Based on Suckless' original ST and patches. (Website)[st.suckless.org]
