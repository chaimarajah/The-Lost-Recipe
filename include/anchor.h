#ifndef ANCHOR_H
#define ANCHOR_H

#include "utils.h"
#include "image.h"


typedef struct Animation Animation;


struct Anchor
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
typedef struct Anchor Anchor;


bool Anchor_load(SDL_Renderer *renderer, Anchor *anchor , const char *image);
void Anchor_destroy(Anchor *anchor);

void Anchor_setX(Anchor *anchor, int x);
void Anchor_setY(Anchor *anchor, int y);
void Anchor_setCoordinates(Anchor *anchor, int x, int y);
void Anchor_moveX(Anchor *anchor, int x);
void Anchor_moveY(Anchor *anchor, int y);
void Anchor_move(Anchor *anchor, int screenHeight, int framerate);
//void Anchor_setDirection(Anchor *anchor, SDL_Keycode keycode);
//void Anchor_unsetDirection(Anchor *anchor, SDL_Keycode keycode);
void Anchor_render(SDL_Renderer *renderer, Anchor *anchor);







struct Anchor1
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
typedef struct Anchor1 Anchor1;


bool Anchor1_load(SDL_Renderer *renderer, Anchor1 *anchor1 , const char *image);
void Anchor1_destroy(Anchor1 *anchor1);

void Anchor1_setX(Anchor1 *anchor1, int x);
void Anchor1_setY(Anchor1 *anchor1, int y);
void Anchor1_setCoordinates(Anchor1 *anchor1, int x, int y);
void Anchor1_moveX(Anchor1 *anchor1, int x);
void Anchor1_moveY(Anchor1 *anchor1, int y);
void Anchor1_move(Anchor1 *anchor1, int screenHeight, int framerate);
//void Anchor_setDirection(Anchor *anchor, SDL_Keycode keycode);
//void Anchor_unsetDirection(Anchor *anchor, SDL_Keycode keycode);
void Anchor1_render(SDL_Renderer *renderer, Anchor1 *anchor1);



#endif // ANCHOR_H
