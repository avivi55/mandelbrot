#ifndef MANDELBROT_COMPLEX_H
#define MANDELBROT_COMPLEX_H

#include <printf.h>

typedef struct {
    long double real;
    long double imaginary;
} ComplexNumber;

ComplexNumber complexSquare(ComplexNumber z);

ComplexNumber complexMultiply(ComplexNumber z, ComplexNumber z1);

ComplexNumber complexAdd(ComplexNumber z, ComplexNumber z1);

// square root is expensive
int complexModuloSquared(ComplexNumber z);

void printComplex(ComplexNumber z);

#endif //MANDELBROT_COMPLEX_H
