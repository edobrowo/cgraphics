#ifndef BITMAP
#define BITMAP

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "color.h"

typedef struct {
    rgba_t* pixels;
    unsigned int width;
    unsigned int height;
} bitmap_t;

// bitmap_t is 2D array
// (0,0) - - - - x
//   |           |
//   |           |
//   |           |
//   |           |
//   y - - - - - *

// Create a new bitmap
bitmap_t* bitmap_create(unsigned int width, unsigned int height);

// Destroy a bitmap
void bitmap_destroy(bitmap_t* bitmap);

// Get a color value at position (x,y)
rgba_t bitmap_get(bitmap_t* bitmap, unsigned int x, unsigned int y);

// Set a color value at position (x,y)
void bitmap_set(bitmap_t* bitmap, unsigned int x, unsigned int y, rgba_t color);

// Fill a bitmap with one color
void bitmap_fill(bitmap_t* bitmap, rgba_t color);

#endif // BITMAP
