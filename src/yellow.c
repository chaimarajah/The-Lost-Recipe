#include "yellow.h"

bool Yellow_load(SDL_Renderer *renderer, Yellow *yellow, const char* image)
{
    // Load plane image
    if(!Image_load(renderer, &yellow->image, image))
    {
        return false;
    }
    return true;
}


void Yellow_destroy(Yellow *yellow)
{
    Image_destroy(&yellow->image);

}

void Yellow_setX(Yellow *yellow, int x)
{

    yellow->image.rect.x = x;
}

void Yellow_setY(Yellow *yellow, int y)
{
    //  y coordinate
    yellow->image.rect.y = y;


}

void Yellow_setCoordinates(Yellow *yellow, int x, int y)
{
    Yellow_setX(yellow, x);
    Yellow_setY(yellow, y);
}


void Yellow_render(SDL_Renderer *renderer, Yellow *yellow)
{


     //Render plane
   Image_render(renderer, &yellow->image);

}

