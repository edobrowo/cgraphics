# C Graphics Library
This project is intended as a practical exploration of 2D graphics, with the end goal of building a library for creating 2D generative art.
## Milestones
* Color: truecolor type, implemented as a uint32 and helper macros
* Bitmaps: generalized 2D array raster image representation
* PNG encoder: a bare-bones PNG encoder that takes as input a bitmap, and produces a truecolor, uncompressed, unfiltered PNG file
### 000
To test the completed PNG encoder, I generated two PNGs, one consisting of a single pixel, and another of a tiny smile :)
### 001
I experimented with applying compositions of trigonometric functions to sums/products of pixel positions, then using the integer address-casted value as the color code.
## ToDo
* Primitives: lines, triangles, circles, etc.
* Curves: beziers, splines
* Noise: Perlin, simplex, fractal brownian
