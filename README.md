# sherlach's st build

st - simple terminal
--------------------
st is a simple terminal emulator for X which sucks because you have
to do a lot of manual patching before you have an actually usable 
product. This repo should contain a copy with my preferred patches
already loaded. See the `patches` directory for more detail.

I am considering maintaining this myself over time so the code may
eventually divert from its original.

Requirements
------------
In order to build st you need the Xlib and Harfbuzz header files.
You should use the xft-bgra patch if you require emoji (available
in the AUR prebuilt or as a manual patch elsewhere. Gentoo users
could find [this patch](https://github.com/sherlach/configs/blob/master/gentooing/patches/x11-libs/libXft/2.patch) very useful).


Installation
------------
Edit config.mk to match your local setup.
st is installed into the /usr namespace by default and 
**you might want to change this to /usr/local.**

Afterwards enter the following command to build and install st (if
necessary, as root):

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
Based on Suckless' original ST and patches available via [their website.](https://st.suckless.org)

Some ideas taken from [Luke Smith's fork](https://github.com/LukeSmithxyz/st)
