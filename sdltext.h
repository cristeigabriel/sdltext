#pragma once

#ifndef number
#error "(SDLText) No number type"
#endif

// TODO: maybe go over the naming of everything again

static int _sdltext_gw = 0;

/// Stores application width for raster text compiler to
/// do text wrapping.
static void sdltext_initialize(int w) { _sdltext_gw = w; }

// TODO: address these differently once a proper font system
// 			is implemented

#define SDLTEXT_FONT_SIZE 5
#define SDLTEXT_FONT_SPACING 2

/// TODO: support more than ascii
static const int _sdltext_raster[256][SDLTEXT_FONT_SIZE][SDLTEXT_FONT_SIZE] =
    {['1'] = {{0, 0, 1, 0, 0},
              {0, 1, 1, 0, 0},
              {0, 0, 1, 0, 0},
              {0, 0, 1, 0, 0},
              {0, 1, 1, 1, 0}},
     ['2'] = {{1, 1, 1, 1, 0},
              {0, 0, 0, 0, 1},
              {0, 1, 1, 1, 0},
              {1, 0, 0, 0, 0},
              {1, 1, 1, 1, 1}},
     ['3'] = {{1, 1, 1, 1, 0},
              {0, 0, 0, 0, 1},
              {1, 1, 1, 1, 0},
              {0, 0, 0, 0, 1},
              {1, 1, 1, 1, 0}},
     ['4'] = {{1, 0, 0, 0, 1},
              {1, 0, 0, 0, 1},
              {1, 1, 1, 1, 1},
              {0, 0, 0, 0, 1},
              {0, 0, 0, 0, 1}},
     ['5'] = {{1, 1, 1, 1, 1},
              {1, 0, 0, 0, 0},
              {1, 1, 1, 1, 0},
              {0, 0, 0, 0, 1},
              {1, 1, 1, 1, 0}},
     ['6'] =
         {

             {0, 1, 1, 1, 0},
             {1, 0, 0, 0, 0},
             {1, 1, 1, 1, 0},
             {1, 0, 0, 0, 1},
             {0, 1, 1, 1, 0}},
     ['7'] = {{1, 1, 1, 1, 0},
              {0, 0, 0, 1, 0},
              {0, 0, 1, 1, 1},
              {0, 0, 0, 1, 0},
              {0, 0, 0, 1, 0}},
     ['8'] = {{0, 1, 1, 1, 0},
              {1, 0, 0, 0, 1},
              {0, 1, 1, 1, 0},
              {1, 0, 0, 0, 1},
              {0, 1, 1, 1, 0}},
     ['9'] = {{0, 1, 1, 1, 0},
              {1, 0, 0, 0, 1},
              {0, 1, 1, 1, 1},
              {0, 0, 0, 0, 1},
              {0, 1, 1, 1, 0}},
     ['0'] = {{0, 1, 1, 1, 0},
              {1, 1, 0, 0, 1},
              {1, 0, 1, 0, 1},
              {1, 0, 0, 1, 1},
              {0, 1, 1, 1, 0}},
     ['a'] = {{0, 1, 1, 1, 0},
              {1, 0, 0, 0, 1},
              {1, 1, 1, 1, 1},
              {1, 0, 0, 0, 1},
              {1, 0, 0, 0, 1}},
     ['b'] = {{1, 1, 1, 1, 0},
              {1, 0, 0, 0, 1},
              {1, 1, 1, 1, 0},
              {1, 0, 0, 0, 1},
              {1, 1, 1, 1, 0}},
     ['c'] = {{0, 1, 1, 1, 1},
              {1, 0, 0, 0, 0},
              {1, 0, 0, 0, 0},
              {1, 0, 0, 0, 0},
              {0, 1, 1, 1, 1}},
     ['d'] = {{1, 1, 1, 1, 0},
              {1, 0, 0, 0, 1},
              {1, 0, 0, 0, 1},
              {1, 0, 0, 0, 1},
              {1, 1, 1, 1, 0}},
     ['e'] = {{0, 1, 1, 1, 1},
              {1, 0, 0, 0, 0},
              {1, 1, 1, 1, 1},
              {1, 0, 0, 0, 0},
              {0, 1, 1, 1, 1}},
     ['f'] = {{0, 1, 1, 1, 1},
              {1, 0, 0, 0, 0},
              {1, 1, 1, 1, 1},
              {1, 0, 0, 0, 0},
              {1, 0, 0, 0, 0}},
     ['g'] = {{0, 1, 1, 1, 1},
              {1, 0, 0, 0, 0},
              {1, 0, 1, 1, 1},
              {1, 0, 0, 0, 1},
              {0, 1, 1, 1, 0}},
     ['h'] = {{1, 0, 0, 0, 1},
              {1, 0, 0, 0, 1},
              {1, 1, 1, 1, 1},
              {1, 0, 0, 0, 1},
              {1, 0, 0, 0, 1}},
     ['i'] = {{1, 1, 1, 1, 1},
              {0, 0, 1, 0, 0},
              {0, 0, 1, 0, 0},
              {0, 0, 1, 0, 0},
              {1, 1, 1, 1, 1}},
     ['j'] = {{0, 1, 1, 1, 1},
              {0, 0, 0, 1, 0},
              {0, 0, 0, 1, 0},
              {1, 0, 0, 1, 0},
              {0, 1, 1, 0, 0}},
     ['k'] = {{1, 0, 0, 0, 1},
              {1, 0, 0, 1, 0},
              {1, 1, 1, 0, 0},
              {1, 0, 0, 1, 0},
              {1, 0, 0, 0, 1}},
     ['l'] = {{1, 0, 0, 0, 0},
              {1, 0, 0, 0, 0},
              {1, 0, 0, 0, 0},
              {1, 0, 0, 0, 0},
              {0, 1, 1, 1, 1}},
     ['m'] = {{0, 1, 0, 1, 0},
              {1, 0, 1, 0, 1},
              {1, 0, 1, 0, 1},
              {1, 0, 1, 0, 1},
              {1, 0, 1, 0, 1}},
     ['n'] = {{1, 0, 0, 0, 1},
              {1, 1, 0, 0, 1},
              {1, 0, 1, 0, 1},
              {1, 0, 0, 1, 1},
              {1, 0, 0, 0, 1}},
     ['o'] = {{0, 1, 1, 1, 0},
              {1, 0, 0, 0, 1},
              {1, 0, 0, 0, 1},
              {1, 0, 0, 0, 1},
              {0, 1, 1, 1, 0}},
     ['p'] = {{0, 1, 1, 1, 0},
              {1, 0, 0, 0, 1},
              {1, 1, 1, 1, 0},
              {1, 0, 0, 0, 0},
              {1, 0, 0, 0, 0}},
     ['q'] = {{0, 1, 1, 1, 0},
              {1, 0, 0, 0, 1},
              {1, 0, 0, 0, 1},
              {0, 1, 1, 1, 0},
              {0, 0, 0, 1, 1}},
     ['r'] =
         {
             {0, 1, 1, 1, 0},
             {1, 0, 0, 0, 1},
             {1, 1, 1, 1, 0},
             {1, 0, 0, 0, 1},
             {1, 0, 0, 0, 1},
         },
     ['s'] =
         {
             {0, 1, 1, 1, 1},
             {1, 0, 0, 0, 0},
             {0, 1, 1, 1, 0},
             {0, 0, 0, 0, 1},
             {1, 1, 1, 1, 0},
         },
     ['t'] = {{1, 1, 1, 1, 1},
              {0, 0, 1, 0, 0},
              {0, 0, 1, 0, 0},
              {0, 0, 1, 0, 0},
              {0, 0, 1, 0, 0}},
     ['u'] = {{1, 0, 0, 0, 1},
              {1, 0, 0, 0, 1},
              {1, 0, 0, 0, 1},
              {1, 0, 0, 0, 1},
              {0, 1, 1, 1, 0}},
     ['v'] = {{1, 0, 0, 0, 1},
              {1, 0, 0, 0, 1},
              {0, 1, 0, 1, 0},
              {0, 1, 0, 1, 0},
              {0, 0, 1, 0, 0}},
     ['w'] = {{1, 0, 0, 0, 1},
              {1, 0, 0, 0, 1},
              {1, 0, 1, 0, 1},
              {1, 1, 0, 1, 1},
              {1, 0, 0, 0, 1}},
     ['x'] = {{1, 0, 0, 0, 1},
              {0, 1, 0, 1, 0},
              {0, 0, 1, 0, 0},
              {0, 1, 0, 1, 0},
              {1, 0, 0, 0, 1}},
     ['y'] = {{1, 0, 0, 0, 1},
              {1, 0, 0, 0, 1},
              {0, 1, 0, 1, 0},
              {0, 0, 1, 0, 0},
              {0, 0, 1, 0, 0}},
     ['z'] =
         {

             {1, 1, 1, 1, 1},
             {0, 0, 0, 1, 0},
             {0, 0, 1, 0, 0},
             {0, 1, 0, 0, 0},
             {1, 1, 1, 1, 1},
         },
     ['.'] = {{0, 0, 0, 0, 0},
              {0, 0, 0, 0, 0},
              {0, 0, 0, 0, 0},
              {0, 0, 0, 0, 0},
              {0, 1, 0, 0, 0}},
     [','] = {{0, 0, 0, 0, 0},
              {0, 0, 0, 0, 0},
              {0, 0, 0, 0, 0},
              {1, 0, 0, 0, 0},
              {0, 1, 0, 0, 0}},
     ['!'] = {{0, 1, 0, 0, 0},
              {0, 1, 0, 0, 0},
              {0, 1, 0, 0, 0},
              {0, 0, 0, 0, 0},
              {0, 1, 0, 0, 0}},
     ['@'] = {{0, 1, 1, 1, 0},
              {1, 0, 0, 0, 1},
              {1, 0, 0, 1, 1},
              {1, 0, 0, 0, 0},
              {0, 1, 1, 1, 0}},
     ['#'] = {{0, 1, 0, 1, 0},
              {1, 1, 1, 1, 1},
              {0, 1, 0, 1, 0},
              {1, 1, 1, 1, 1},
              {0, 1, 0, 1, 0}},
     ['$'] =
         {
             {0, 1, 1, 1, 1},
             {1, 0, 1, 0, 0},
             {0, 1, 1, 1, 0},
             {0, 0, 1, 0, 1},
             {1, 1, 1, 1, 0},

         },
     ['%'] = {{1, 0, 0, 0, 1},
              {0, 0, 0, 1, 0},
              {0, 0, 1, 0, 0},
              {0, 1, 0, 0, 0},
              {1, 0, 0, 0, 1}},
     ['^'] = {{0, 0, 1, 0, 0},
              {0, 1, 0, 1, 0},
              {0, 0, 0, 0, 0},
              {0, 0, 0, 0, 0},
              {0, 0, 0, 0, 0}},
     ['&'] = {{0, 1, 0, 0, 1},
              {1, 0, 0, 1, 0},
              {0, 1, 1, 0, 0},
              {1, 0, 0, 1, 0},
              {0, 1, 1, 0, 1}},
     ['*'] = {{0, 0, 1, 0, 0},
              {0, 1, 1, 1, 0},
              {0, 0, 1, 0, 0},
              {0, 0, 0, 0, 0},
              {0, 0, 0, 0, 0}},
     ['-'] = {{0, 0, 0, 0, 0},
              {0, 0, 0, 0, 0},
              {1, 1, 1, 1, 1},
              {0, 0, 0, 0, 0},
              {0, 0, 0, 0, 0}},
     ['~'] = {{0, 0, 0, 0, 0},
              {0, 1, 0, 0, 0},
              {1, 0, 1, 0, 1},
              {0, 0, 0, 1, 0},
              {0, 0, 0, 0, 0}},
     ['='] = {{0, 0, 0, 0, 0},
              {1, 1, 1, 1, 1},
              {0, 0, 0, 0, 0},
              {1, 1, 1, 1, 1},
              {0, 0, 0, 0, 0}},
     ['+'] = {{0, 0, 1, 0, 0},
              {0, 0, 1, 0, 0},
              {1, 1, 1, 1, 1},
              {0, 0, 1, 0, 0},
              {0, 0, 1, 0, 0}},
     ['_'] = {{0, 0, 0, 0, 0},
              {0, 0, 0, 0, 0},
              {0, 0, 0, 0, 0},
              {0, 0, 0, 0, 0},
              {1, 1, 1, 1, 1}},
     ['/'] = {{0, 0, 0, 0, 1},
              {0, 0, 0, 1, 0},
              {0, 0, 1, 0, 0},
              {0, 1, 0, 0, 0},
              {1, 0, 0, 0, 0}},
     ['|'] = {{0, 0, 1, 0, 0},
              {0, 0, 1, 0, 0},
              {0, 0, 1, 0, 0},
              {0, 0, 1, 0, 0},
              {0, 0, 1, 0, 0}},
     ['\\'] = {{1, 0, 0, 0, 0},
               {0, 1, 0, 0, 0},
               {0, 0, 1, 0, 0},
               {0, 0, 0, 1, 0},
               {0, 0, 0, 0, 1}},
     ['<'] = {{0, 0, 0, 1, 0},
              {0, 0, 1, 0, 0},
              {0, 1, 0, 0, 0},
              {0, 0, 1, 0, 0},
              {0, 0, 0, 1, 0}},
     ['>'] =
         {

             {0, 1, 0, 0, 0},
             {0, 0, 1, 0, 0},
             {0, 0, 0, 1, 0},
             {0, 0, 1, 0, 0},
             {0, 1, 0, 0, 0}},
     ['('] = {{0, 0, 1, 0, 0},
              {0, 1, 0, 0, 0},
              {0, 1, 0, 0, 0},
              {0, 1, 0, 0, 0},
              {0, 0, 1, 0, 0}},
     [')'] = {{0, 0, 1, 0, 0},
              {0, 0, 0, 1, 0},
              {0, 0, 0, 1, 0},
              {0, 0, 0, 1, 0},
              {0, 0, 1, 0, 0}},
     ['['] = {{0, 1, 1, 0, 0},
              {0, 1, 0, 0, 0},
              {0, 1, 0, 0, 0},
              {0, 1, 0, 0, 0},
              {0, 1, 1, 0, 0}},
     [']'] = {{0, 0, 1, 1, 0},
              {0, 0, 0, 1, 0},
              {0, 0, 0, 1, 0},
              {0, 0, 0, 1, 0},
              {0, 0, 1, 1, 0}},
     ['{'] = {{0, 0, 1, 0, 0},
              {0, 0, 1, 0, 0},
              {0, 1, 0, 0, 0},
              {0, 0, 1, 0, 0},
              {0, 0, 1, 0, 0}},
     ['}'] = {{0, 0, 1, 0, 0},
              {0, 0, 1, 0, 0},
              {0, 0, 0, 1, 0},
              {0, 0, 1, 0, 0},
              {0, 0, 1, 0, 0}},
     ['\''] = {{0, 0, 1, 0, 0},
               {0, 0, 1, 0, 0},
               {0, 0, 0, 0, 0},
               {0, 0, 0, 0, 0},
               {0, 0, 0, 0, 0}},
     ['"'] = {{0, 1, 0, 1, 0},
              {0, 1, 0, 1, 0},
              {0, 0, 0, 0, 0},
              {0, 0, 0, 0, 0},
              {0, 0, 0, 0, 0}},
     ['`'] = {{0, 1, 0, 0, 0},
              {0, 0, 1, 0, 0},
              {0, 0, 0, 0, 0},
              {0, 0, 0, 0, 0},
              {0, 0, 0, 0, 0}},
     [':'] = {{0, 0, 0, 0, 0},
              {0, 0, 1, 0, 0},
              {0, 0, 0, 0, 0},
              {0, 0, 1, 0, 0},
              {0, 0, 0, 0, 0}},
     [';'] = {{0, 0, 0, 0, 0},
              {0, 0, 1, 0, 0},
              {0, 0, 0, 0, 0},
              {0, 0, 1, 0, 0},
              {0, 0, 0, 1, 0}},
     ['?'] = {{0, 1, 1, 1, 0},
              {1, 0, 0, 0, 1},
              {0, 0, 1, 1, 0},
              {0, 0, 0, 0, 0},
              {0, 0, 1, 0, 0}}};

/// TODO: this should probably have some sort of
/// aided aligning/packing rules, or somehow be
/// replaced, realistically however it's probably
/// going to be fine in most cases.
typedef struct {
  number x;
  number y;
} SDLText_Point;

/// This is a null transformation which doesn't affect the text
static SDLText_Point sdltext_transform_id(const unsigned char *cursor, unsigned in_len, unsigned i) {
	(void)cursor;
	(void)in_len;
	(void)i;
	
  return (SDLText_Point){0, 0};
}

/// The type of any given transform for points
typedef SDLText_Point (*SDLText_Transform)(const unsigned char *, unsigned, unsigned);

/// TODO: implement text size multipliers
/// TODO: implement support for alternative fonts
/// 			(won't break API since it'll just be handled
/// 			 as a global state - the current font - like with
/// 			 other APIs)
/// TODO: add character transforms and replace the tolower call
/// 			with a transform, OR, change default raster to remove
/// 			the need
static void _sdltext_compile_text_impl(SDLText_Point xy,
                                       const unsigned char *text,
                                       unsigned text_len, SDLText_Point *p,
                                       unsigned *n,
																			 SDLText_Transform f) {
  unsigned i, j, k, l;
  number wy;

  i = 0;
  wy = 0;
  for (l = 0; l < text_len; l++) {
    unsigned char c;
    number px;
    SDLText_Point oxy;

    c = tolower(text[l]);

    // Calculate letter spacing
    px = (SDLTEXT_FONT_SIZE * i) + (SDLTEXT_FONT_SPACING * i);

    // Calculate transform offset
    oxy = f(&text[l], text_len, l);

    // Check if we need to wrap line
    // (be that due to width or newline)
    if (c == '\n' || (xy.x + oxy.x + px + SDLTEXT_FONT_SIZE) > _sdltext_gw) {
      wy += (SDLTEXT_FONT_SIZE + SDLTEXT_FONT_SPACING);
      i = 0;
      px = 0;
      if (c == '\n')
        continue;
    }

    // Tab is larger than whitespace with same width
    // assumed
    if (c == '\t') {
      i++;
      goto blank;
    }
    if (isspace(c))
      goto blank;

    for (j = 0; j < SDLTEXT_FONT_SIZE; j++) {
      for (k = 0; k < SDLTEXT_FONT_SIZE; k++) {
        if (_sdltext_raster[(unsigned)c][j][k] != 0) {
          SDLText_Point txy;

          txy = (SDLText_Point){.x = (xy.x + px + k), .y = (xy.y + j + wy)};

          txy.x += oxy.x;
          txy.y += oxy.y;

          p[*n] = txy;
          *n += 1;
        }
      }
    }

  blank:
    i++;
  }
}

static SDLText_Point *
sdltext_compile_text_ex_u8(SDLText_Point xy, const unsigned char *text,
                           unsigned text_len, unsigned *n,
                           SDLText_Transform f) {
  if (_sdltext_gw <= 0)
    return NULL;

  if (0 == *text)
    return NULL;

  *n = 0;

  SDLText_Point *p;

  // Preallocates maximium capacity
  p = malloc((text_len * (SDLTEXT_FONT_SIZE * SDLTEXT_FONT_SIZE)) *
             (sizeof *p));
  if (NULL == p)
    return NULL;

  // Compile points into one single array of points
  _sdltext_compile_text_impl(xy, text, text_len, p, n, f);

  return p;
}

static SDLText_Point *sdltext_compile_text_u8(SDLText_Point xy,
                                              const unsigned char *text,
                                              unsigned text_len, unsigned *n) {
  return sdltext_compile_text_ex_u8(xy, text, text_len, n,
                                    sdltext_transform_id);
}

/// Expects sentinel character '\0' at the end of the string, as it is passed
/// on to the ex method as any other byte array.
static SDLText_Point *
sdltext_compile_text_ex(SDLText_Point xy, const char *text, unsigned *n,
                        SDLText_Transform f) {
  return sdltext_compile_text_ex_u8(xy, (const unsigned char *)text,
                                    strlen(text), n, f);
}

/// Expects sentinel character '\0' at the end of the string, as it is passed
/// on to the method that treats it as any other byte array.
static SDLText_Point *sdltext_compile_text(SDLText_Point xy, const char *text,
                                           unsigned *n) {
  return sdltext_compile_text_ex(xy, text, n, sdltext_transform_id);
}
