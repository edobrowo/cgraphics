#ifndef PNG
#define PNG

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "bitmap.h"
#include "color.h"
#include "error.h"

// PNG encoder - currently its sole purpose is to create unfiltered, uncompressed PNGs of truecolor alpha bitmaps

// Color encoding types
// Only supports TRUECOLOR_ALPHA
typedef enum {
    INDEXED = 0,
    GRAYSCALE = 2,
    GRAYSCALE_ALPHA = 3,
    TRUECOLOR = 4,
    TRUECOLOR_ALPHA = 6,
} colortype_t;

// PNG internal type, used as an intermediary for file creation
typedef struct {

    rgba_t*  image_data;
    uint32_t image_width;
    uint32_t image_height;

    unsigned char bit_depth;
    colortype_t   color_type;
    unsigned char compression_method;
    unsigned char filter_method;
    unsigned char interlace_method;

    unsigned char* data;
    unsigned char* data_ptr;
    size_t         data_size;
    size_t         line_size;
    uint16_t       adler32A;
    uint16_t       adler32B;

    unsigned char* crc_start;

} png_t;

// Encode a PNG from a bitmap
int png_file(bitmap_t* bitmap, const char* path);

#endif // PNG
