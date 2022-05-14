/*
 * Copyright (c) 2018 Amine Ben Hassouna <amine.benhassouna@gmail.com>
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any
 * person obtaining a copy of this software and associated
 * documentation files (the "Software"), to deal in the
 * Software without restriction, including without
 * limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software
 * is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice
 * shall be included in all copies or substantial portions
 * of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF
 * ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
 * TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
 * PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT
 * SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR
 * IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */

#ifndef ANIMATION_H
#define ANIMATION_H


#include "utils.h"
#include "plane.h"
#include "yellow.h"
#include "background.h"
#include "burger.h"
#include "anchor.h"
#include "jellyfish.h"


#define FONT_PATH       "assets/Spongebob.ttf"
#define SPONGEBOB_SOUND "assets/waves-at-baltic-sea-shore.wav"

#define SPONGEBOB0_IMG       "assets/plane.png"
#define SPONGEBOB0_SPEED     300
#define SPONGEBOB0_MARGIN    20

#define SPONGEBOB1_IMG       "assets/plane0.png"
#define SPONGEBOB1_SPEED     300
#define SPONGEBOB1_MARGIN    20





#define PLANKTON_IMG       "assets/plane1.png"
#define PLANKTON_SPEED     250
#define PLANKTON_MARGIN    20

#define YELLOW_IMG       "assets/yellow.png"
//#define YELLOW_SPEED     250
#define YELLOW_MARGIN    20


#define BURGER_IMG       "assets/burger.png"
//#define YELLOW_SPEED     250
#define BURGER_MARGIN    20

#define BURGER1_IMG       "assets/burger1.png"
//#define YELLOW_SPEED     250
#define BURGER1_MARGIN    20


#define ANCHOR_IMG       "assets/anchor1.png"
#define ANCHOR_SPEED     70
#define ANCHOR_MARGIN    20


#define ANCHOR1_IMG       "assets/anchor1.png"
#define ANCHOR1_SPEED     250
#define ANCHOR1_MARGIN    20

#define JELLYFISH_IMG       "assets/jellyfish.png"
#define JELLYFISH_SPEED     70
#define JELLYFISH_MARGIN    20




#define OCEAN_IMG       "assets/ocean.jpg"
#define OCEAN_SPEED     200

struct Animation
{
    // Animation screen dimensions
    int width;
    int height;
    bool gameover;
    bool youwin;
    bool shown;
    // Animation renderer
    SDL_Renderer *renderer;

    // Background ,Spongebob and Yellow
    Background background;
    Spongebob spongebob;
    Plankton plankton;
    Yellow yellow;
    Burger burger;
    Burger1 burger1;
    Anchor anchor;
    Anchor1 anchor1;
    Jellyfish jellyfish;



    TTF_Font *font;
    SDL_Texture *text;
    SDL_Rect textRect;
    Mix_Chunk *song;
};
typedef struct Animation Animation;


bool Animation_start(SDL_Renderer *renderer, int width, int height);
void Animation_text(Animation *animation);

bool Animation_load(Animation *animation);
void Animation_destroy(Animation *animation);

bool Animation_handleEvent(Animation *animation, SDL_Event *e);
void Animation_update(Animation *animation, int framerate);
void Animation_render(Animation *animation);

#endif // ANIMATION_H
