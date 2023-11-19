#include <stdio.h>
#include "complex.h"

ComplexNumber complexSquare(ComplexNumber z) {
    return (ComplexNumber) {
            (z.real * z.real) - (z.imaginary * z.imaginary),
            2 * z.real * z.imaginary
    };
}

ComplexNumber complexMultiply(ComplexNumber z, ComplexNumber z1) {
    return (ComplexNumber) {
            (z.real * z1.real) - (z.imaginary * z1.imaginary),
            (z.real * z1.real) + (z.imaginary * z1.imaginary)
    };
}

ComplexNumber complexAdd(ComplexNumber z, ComplexNumber z1) {
    return (ComplexNumber) {
            z.real + z1.real,
            z.imaginary + z1.imaginary
    };
}

int complexModuloSquared(ComplexNumber z) {
    return (int) (z.real * z.real + z.imaginary * z.imaginary);
}

void printComplex(ComplexNumber z) {
    printf("%Lf + %Lf \bi\n", z.real, z.imaginary);
}
