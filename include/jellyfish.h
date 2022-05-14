#ifndef JELLYFISH_H
#define JELLYFISH_H


#include "utils.h"
#include "image.h"


typedef struct Animation Animation;
typedef struct Spongebob Spongebob ;

struct Jellyfish
{
    // Spongebob
    Image image;



    // Direction
    Direction direction;


    // Speed in pixel/second
    int speed;

    // Margin
    int margin;
    int level;
};
typedef struct Jellyfish Jellyfish;


bool Jellyfish_load(SDL_Renderer *renderer, Jellyfish *jellyfish , const char *image);
void Jellyfish_destroy(Jellyfish *jellyfish);

void Jellyfish_setX(Jellyfish *jellyfish, int x);
void Jellyfish_setY(Jellyfish *jellyfish, int y);
void Jellyfish_setCoordinates(Jellyfish *jellyfish, int x, int y);
void Jellyfish_moveX(Jellyfish *jellyfish, int x);
void Jellyfish_moveY(Jellyfish *jellyfish, int y);
void Jellyfish_move(Jellyfish *jellyfish,Animation *animation,Spongebob *spongebob, int screenWidth, int framerate);
//void Anchor_setDirection(Anchor *anchor, SDL_Keycode keycode);
//void Anchor_unsetDirection(Anchor *anchor, SDL_Keycode keycode);
void Jellyfish_render(SDL_Renderer *renderer,Jellyfish *jellyfish);










#endif // JELLYFISH_H
