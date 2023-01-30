#ifndef COLOR
#define COLOR

#include <stdint.h>

typedef uint32_t rgba_t;

// RGBA - 0xRRGGBBAA
#define rgba(r, g, b, a) (r << 24 | g << 16 | b << 8 | a)

#define rgba_r(rgba) (rgba >> 24 & 0xFF)
#define rgba_g(rgba) (rgba >> 16 & 0xFF)
#define rgba_b(rgba) (rgba >> 8  & 0xFF)
#define rgba_a(rgba) (rgba       & 0xFF)

// RGB - 0xRRGGBBAA, AA == 0x00
#define rgb(r, g, b) rgba(r, g, b, 0x00)
#define rgb_from_rgba(rgba) (rgba & 0xFFFFFF00)

#define rgb_r(rgb)   rgba_r(rgb)
#define rgb_g(rgb)   rgba_g(rgb)
#define rgb_b(rgb)   rgba_b(rgb)

// HTML 4.01 colors
#define WHITE   0xFFFFFFFF
#define SILVER  0xC0C0C0FF
#define GRAY    0x808080FF
#define BLACK   0x000000FF
#define RED     0xFF0000FF
#define MAROON  0x800000FF
#define YELLOW  0xFFFF00FF
#define OLIVE   0x808000FF
#define LIME    0x00FF00FF
#define GREEN   0x008000FF
#define AQUA    0x00FFFFFF
#define TEAL    0x008080FF
#define BLUE    0x0000FFFF
#define NAVY    0x000080FF
#define FUCHSIA 0xFF00FFFF
#define PURPLE  0x800080FF

// TODO: color functions
// Alpha composite two colors
rgba_t rgba_over_blend(rgba_t over, rgba_t under);

// Convert color to greyscale
rgba_t rgba_to_greyscale(rgba_t color);

#endif // COLOR
