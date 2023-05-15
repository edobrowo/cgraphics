#include "bitmap.h"

bitmap_t* bitmap_create(unsigned int width, unsigned int height) {
    assert(width > 0);
    assert(height > 0);

    bitmap_t* bitmap = malloc(sizeof(bitmap_t));
    if (!bitmap) {
        return NULL;
    }

    bitmap->pixels = malloc(width * height * sizeof(rgba_t));
    if (!bitmap) {
        free(bitmap);
        return NULL;
    }

    bitmap->width = width;
    bitmap->height = height;

    return bitmap;
}

void bitmap_destroy(bitmap_t* bitmap) {
    assert(bitmap);

    free(bitmap->pixels);
    free(bitmap);
}

rgba_t bitmap_get(bitmap_t* bitmap, unsigned int x, unsigned int y) {
    assert(bitmap);
    assert(x < bitmap->width);
    assert(y < bitmap->height);

    return bitmap->pixels[y * bitmap->width + x];
}

void bitmap_set(bitmap_t* bitmap, unsigned int x, unsigned int y, rgba_t color) {
    assert(bitmap);
    assert(x < bitmap->width);
    assert(y < bitmap->height);

    bitmap->pixels[y * bitmap->width + x] = color;
}

void bitmap_fill(bitmap_t* bitmap, rgba_t color) {
    assert(bitmap);

    for (int i = 0; i < bitmap->width * bitmap->height; ++i) {
        bitmap->pixels[i] = color;
    }
}
