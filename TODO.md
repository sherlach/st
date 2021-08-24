# TODO

vt emulation
------------

* double-height support

code & interface
----------------

* add a simple way to do multiplexing

drawing
-------
* add diacritics support to xdraws()
	* switch to a suckless font drawing library
* make the font cache simpler
* add better support for brightening of the upper colors

bugs
----

* neovim reports unknown string ESC]11 (see issue 10476)
  desipte OSC11 patch being applied...
  "reporting their configured colors back to the application"
  doesn't happen yet
* fix shift up/down (shift selection in emacs)
* remove DEC test sequence when appropriate

misc
----

* all kinds of weird errors with neovim
* honestly, grep all files for XXX|TODO
```
    $ grep -nE 'XXX|TODO' st.c
```
