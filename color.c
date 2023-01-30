#include "color.h"

// TODO
// ref: https://arxiv.org/pdf/2202.02864.pdf 
rgba_t rgba_over_blend(rgba_t over, rgba_t under) {
    return 0x0;
}

// Uses luma calculated from nonlinear gamma-corrected red, green, and blue values
rgba_t rgba_to_greyscale(rgba_t color) {
    unsigned char grey = 0.299 * rgba_r(color) + 0.587 * rgba_g(color) + 0.114 * rgba_b(color);
    return rgba(grey, grey, grey, rgba_a(color));
}
