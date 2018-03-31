/**
** a 2 by 5 font just for numbers
*/


const uint8_t twobyfiveBitmaps[] PROGMEM = {
  0x00, 0x00,
  0x55, 0x40,
  0xDE, 0xC0,
  0xDD, 0xC0,
  0xAD, 0x40,
  0xED, 0x40,
  0xAB, 0xC0,
  0xD5, 0x40,
  0xF3, 0xC0,
  0xF5, 0x40
};


/* {offset, width, height, advance cursor, x offset, y offset} */
const GFXglyph twobyfiveGlyphs[] PROGMEM = {
   { 0, 2, 5, 2, 0, -5 },   /* 0x30 zero */
   { 2, 2, 5, 2, 0, -5 },   /* 0x31 one */
   { 4, 2, 5, 2, 0, -5 },   /* 0x32 two */
   { 6, 2, 5, 2, 0, -5 },   /* 0x33 three */
   { 8, 2, 5, 2, 0, -5 },   /* 0x34 four */
   { 10, 2, 5, 2, 0, -5 },   /* 0x35 five */
   { 12, 2, 5, 2, 0, -5 },   /* 0x36 six */
   { 14, 2, 5, 2, 0, -5 },   /* 0x37 seven */
   { 16, 2, 5, 2, 0, -5 },   /* 0x38 eight */
   { 18, 2, 5, 2, 0, -5 },  /* 0x39 nine */
};

const GFXfont twobyfive PROGMEM = {
  (uint8_t  *)twobyfiveBitmaps,
  (GFXglyph *)twobyfiveGlyphs,
  0x30, 0x39, 5};
