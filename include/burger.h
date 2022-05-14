#ifndef BURGER_H
#define BURGER_H


#include "utils.h"
#include "image.h"

typedef struct Animation Animation;
typedef struct Spongebob Spongebob ;


struct Burger
{
    // Yellow

    Image image;

    // Margin
    int margin;


   // bool shown;

};
typedef struct Burger Burger;

bool Burger_load(SDL_Renderer *renderer, Burger *burger, const char* image);
void Burger_destroy(Burger *burger);
void Burger_setX(Burger *burger, int x);
void Burger_setY(Burger *burger, int y);
void Burger_setCoordinates(Burger *burger, int x, int y);
void Burger_render(SDL_Renderer *renderer, Burger *burger);
void Burger_move(Burger *burger,Animation *animation,Spongebob *spongebob, int screenWidth, int framerate);


struct Burger1
{
    // Yellow

    Image image;

    // Margin
    int margin;


   // bool shown;

};
typedef struct Burger1 Burger1;

bool Burger1_load(SDL_Renderer *renderer, Burger1 *burger1, const char* image);
void Burger1_destroy(Burger1 *burger1);
void Burger1_setX(Burger1 *burger1, int x);
void Burger1_setY(Burger1 *burger1, int y);
void Burger1_setCoordinates(Burger1 *burger1, int x, int y);
void Burger1_render(SDL_Renderer *renderer, Burger1 *burger1);

#endif // BURGER_H
