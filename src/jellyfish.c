
#include "jellyfish.h"
#include "animation.h"
#include "plane.h"
bool Jellyfish_load(SDL_Renderer *renderer, Jellyfish *jellyfish, const char *image)
{
    // Load car image
    if(!Image_load(renderer, &jellyfish->image, image))
    {
        return false;
    }

    return true;
}

void Jellyfish_destroy(Jellyfish *jellyfish)
{
    Image_destroy(&jellyfish->image);
}

void Jellyfish_setX(Jellyfish *jellyfish, int x)
{
    // Car x coordinate
    jellyfish->image.rect.x = x;
}

void Jellyfish_setY(Jellyfish *jellyfish, int y)
{
    // Car y coordinate
    jellyfish->image.rect.y = y;

}

void Jellyfish_setCoordinates(Jellyfish *jellyfish, int x, int y)
{
    Jellyfish_setX(jellyfish, x);
    Jellyfish_setY(jellyfish, y);
}

void Jellyfish_moveX(Jellyfish *jellyfish, int x)
{
    Jellyfish_setX(jellyfish, jellyfish->image.rect.x + x);
}

void Jellyfish_moveY(Jellyfish *jellyfish, int y)
{
    Jellyfish_setY(jellyfish, jellyfish->image.rect.y + y);
}


void Jellyfish_render(SDL_Renderer *renderer, Jellyfish *jellyfish)
{

    // Render car
    Image_render(renderer, &jellyfish->image);
}

void Jellyfish_move(Jellyfish *jellyfish,Animation *animation,Spongebob *spongebob,int screenWidth, int framerate)
{
    int spongebobStep = jellyfish->speed / framerate;

    jellyfish->image.rect.x += jellyfish->speed / framerate;
     if(jellyfish->image.rect.x >= jellyfish->image.rect.w)
        jellyfish->image.rect.x = jellyfish->image.rect.w - jellyfish->image.rect.w;





   if(jellyfish->direction & DIRECTION_RIGHT)
    {
        if (! jellyfish->image.rect.x + jellyfish->image.rect.w + spongebobStep - jellyfish->image.rect.w <= screenWidth - jellyfish->margin) {
            Jellyfish_moveX(jellyfish, spongebobStep);
        }if (jellyfish->image.rect.x + jellyfish->image.rect.w + spongebobStep - jellyfish->image.rect.w >= screenWidth - jellyfish->margin){
            Jellyfish_setX(jellyfish, - jellyfish->image.rect.w);
        }
          /*if (plane->image.rect.x + plane->image.rect.w >animation->jellyfish.image.rect.x
                    &&animation->jellyfish.image.rect.x>jellyfish->image.rect.x
                    &&plane->image.rect.y + plane->image.rect.h >animation->jellyfish.image.rect.y)
            {

               //Jellyfish_setY(jellyfish, -jellyfish->image.rect.h);
//Jellyfish_setY(jellyfish,rand());
               animation->gameover= true;
            }
*/
    }
    else if( (jellyfish->direction & DIRECTION_LEFT)
             && jellyfish->image.rect.x - spongebobStep >= jellyfish->margin)
    {
        Jellyfish_moveX(jellyfish, -spongebobStep);
     }
}
