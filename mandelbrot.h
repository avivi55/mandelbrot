#ifndef MANDELBROT_MANDELBROT_H
#define MANDELBROT_MANDELBROT_H
#include "complex.h"
#include "image_handler.h"

int getIterationCount(ComplexNumber c, int maxIteration, double maxDivergence);
void mandelbrot();
#endif //MANDELBROT_MANDELBROT_H
