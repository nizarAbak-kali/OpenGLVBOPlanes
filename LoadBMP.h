#ifndef BMP
#define BMP
#include "main.h"
#include <stdlib.h>
#include <string.h>

struct Image {
    int sizeX;
    int  sizeY;
    GLubyte *data;
};
typedef struct Image Image;
typedef unsigned short utab [3][3][3];
Image *texture;
#endif
