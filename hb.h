#include <X11/Xft/Xft.h>
#include <hb.h>
#include <hb-ft.h>

#ifndef HB_H__
#define HB_H__
void hbunloadfonts();
void hbtransform(XftGlyphFontSpec *, const Glyph *, size_t, int, int);
#endif
