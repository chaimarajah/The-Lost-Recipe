#ifndef YELLOW_H
#define YELLOW_H

typedef struct Animation Animation;
#include "utils.h"
#include "image.h"

struct Yellow
{
    // Yellow

    Image image;

    // Margin
    int margin;


   bool shown;

};
typedef struct Yellow Yellow;


bool Yellow_load(SDL_Renderer *renderer, Yellow *yellow, const char* image);
void Yellow_destroy(Yellow *yellow);
void Yellow_setX(Yellow*yellow, int x);
void Yellow_setY(Yellow *yellow, int y);
void Yellow_setCoordinates(Yellow *yellow, int x, int y);
void Yellow_render(SDL_Renderer *renderer, Yellow *yellow);

#endif // Yellow_H
