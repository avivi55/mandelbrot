#include "mandelbrot.h"
#include "image_handler.h"

#define X_MIN (-2.25)
#define Y_MIN (-1.25)

#define Y_MAX 1.25
#define X_MAX 0.75


#define MAX_ITER 100
#define MAX_DIV 6

#define WIDTH 1000
#define HEIGHT 833


int getIterationCount(ComplexNumber c, int maxIteration, double maxDivergence){
    ComplexNumber z = { 0, 0 };
    int n;

    for (n=0; n < maxIteration && complexModuloSquared(z) < maxDivergence; n++)
        z = complexAdd(complexSquare(z), c);

    return n;
}

RGBQUAD getColorWithIteration(int iteration){
    if(iteration == MAX_ITER)
        return (RGBQUAD) {0, 0, 0};

    int color = 255 - (iteration * 255 / MAX_ITER);
    return (RGBQUAD) {color, color, color};
}

void mandelbrot(){
    for (int x_pixel = 0; x_pixel < WIDTH; ++x_pixel) {
        for (int y_pixel = 0; y_pixel < HEIGHT; ++y_pixel) {
            ComplexNumber c = {
                    X_MIN + ((double)x_pixel / WIDTH) * (X_MAX - X_MIN),
                    Y_MIN + ((double)y_pixel / HEIGHT) * (Y_MAX - Y_MIN)
            };

            int numberOfIterations = getIterationCount(c, MAX_ITER, MAX_DIV);

            savePixel(x_pixel, y_pixel, getColorWithIteration(numberOfIterations));
        }
    }
}

int main(int argc, char* argv[]){
    imageInit(WIDTH, HEIGHT);
    mandelbrot();
    imageSave(argv[4]);
}