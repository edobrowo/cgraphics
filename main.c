#include <stdio.h>
#include "png.h"

int main() {
    bitmap_t* bitmap = bitmap_create(10, 10);
    bitmap_fill(bitmap, BLACK);
    bitmap_set(bitmap, 3, 3, WHITE);
    bitmap_set(bitmap, 6, 3, WHITE);
    bitmap_set(bitmap, 2, 5, WHITE);
    bitmap_set(bitmap, 3, 6, WHITE);
    bitmap_set(bitmap, 4, 6, WHITE);
    bitmap_set(bitmap, 5, 6, WHITE);
    bitmap_set(bitmap, 6, 6, WHITE);
    bitmap_set(bitmap, 7, 5, WHITE);
    png_file(bitmap, "images/smile.png");
    bitmap_destroy(bitmap);
}