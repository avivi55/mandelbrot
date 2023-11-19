#include "image_handler.h"

char* outputFileName = "output.png";

FIBITMAP* bitmap;


void imageInit(int w, int h){
    FreeImage_Initialise(0);

    bitmap = FreeImage_Allocate(w, h, BPP, 0, 0, 0);
    if(!bitmap)
        exit(1);
}

void savePixel(int x, int y, RGBQUAD color){
    FreeImage_SetPixelColor(bitmap, x, y, &color);
}


void imageSave(char* fileName){
    FreeImage_Save(FIF_PNG, bitmap, fileName, 0);
    FreeImage_DeInitialise();
}