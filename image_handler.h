#ifndef MANDELBROT_IMAGE_HANDLER_H
#define MANDELBROT_IMAGE_HANDLER_H

#include "FreeImage.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BPP 24
#define SIZE 800

void imageInit(int, int);
void savePixel(int x, int y, RGBQUAD color);
void imageSave(char* fileName);
RGBQUAD simpleColor(int r, int g, int b);

#endif //MANDELBROT_IMAGE_HANDLER_H
