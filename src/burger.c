#include "burger.h"

bool Burger_load(SDL_Renderer *renderer, Burger *burger, const char* image)
{
    // Load plane image
    if(!Image_load(renderer, &burger->image, image))
    {
        return false;
    }
    return true;
}


void Burger_destroy(Burger *burger)
{
    Image_destroy(&burger->image);

}

void Burger_setX(Burger *burger, int x)
{

    burger->image.rect.x = x;
}

void Burger_setY(Burger *burger, int y)
{
    // Spongebob y coordinate
    burger->image.rect.y = y;


}

void Burger_setCoordinates(Burger *burger, int x, int y)
{
    Burger_setX(burger, x);
    Burger_setY(burger, y);
}


void Burger_render(SDL_Renderer *renderer, Burger *burger)
{


    // Render plane
    Image_render(renderer, &burger->image);
}






bool Burger1_load(SDL_Renderer *renderer, Burger1 *burger1, const char* image)
{
    // Load plane image
    if(!Image_load(renderer, &burger1->image, image))
    {
        return false;
    }
    return true;
}


void Burger1_destroy(Burger1 *burger1)
{
    Image_destroy(&burger1->image);

}

void Burger1_setX(Burger1 *burger1, int x)
{

    burger1->image.rect.x = x;
}

void Burger1_setY(Burger1 *burger1, int y)
{
    // Spongebob y coordinate
    burger1->image.rect.y = y;


}

void Burger1_setCoordinates(Burger1 *burger1, int x, int y)
{
    Burger1_setX(burger1, x);
    Burger1_setY(burger1, y);
}


void Burger1_render(SDL_Renderer *renderer, Burger1 *burger1)
{


    // Render plane
    Image_render(renderer, &burger1->image);
}

void Burger_move(Burger *burger,Animation *animation,Spongebob *spongebob,int screenWidth, int framerate)
{
   //
 /*   jellyfish->image5.rect.x += jellyfish->speed / framerate;
     if(jellyfish->image5.rect.x >= jellyfish->image5.rect.w)
        jellyfish->image5.rect.x = jellyfish->image5.rect.w - jellyfish->image5.rect.w;

*/



  /* if(jellyfish->direction & DIRECTION_RIGHT)
    {
        if (! jellyfish->image5.rect.x + jellyfish->image5.rect.w + planeStep - jellyfish->image5.rect.w <= screenWidth - jellyfish->margin) {
            Jellyfish_moveX(jellyfish, planeStep);
        }if (jellyfish->image5.rect.x + jellyfish->image5.rect.w + planeStep - jellyfish->image5.rect.w >= screenWidth - jellyfish->margin){
            Jellyfish_setX(jellyfish, - jellyfish->image5.rect.w);
        }
          if (plane->image.rect.x + plane->image.rect.w >animation->jellyfish.image5.rect.x
                    &&animation->jellyfish.image5.rect.x>jellyfish->image5.rect.x
                    &&plane->image.rect.y + plane->image.rect.h >animation->jellyfish.image5.rect.y)
            {

               //Jellyfish_setY(jellyfish, -jellyfish->image5.rect.h);
//Jellyfish_setY(jellyfish,rand());
               animation->gameover= true;
            }

    }
    else if( (jellyfish->direction & DIRECTION_LEFT)
             && jellyfish->image5.rect.x - planeStep >= jellyfish->margin)
    {
        Jellyfish_moveX(jellyfish, -planeStep);
     }
*/
}




