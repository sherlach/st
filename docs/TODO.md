# TODO

vt emulation
------------

* double-height support

code & interface
----------------

* add a simple way to do multiplexing

drawing
-------
* make the font cache simpler
* add better support for brightening of the upper colors

bugs
----

* neovim reports unknown string ESC]11 (see issue 10476 in neovim)
  despite OSC11 patch being applied...
  "reporting their configured colors back to the application"
  doesn't happen yet
* fix shift up/down (shift selection in emacs)
* remove DEC test sequence when appropriate

misc
----

* all kinds of weird errors with neovim
* grep all files for XXX|TODO
```
    $ grep -rnE 'XXX|TODO'
```
