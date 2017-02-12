#include "SDL/SDL.h"

SDL_Surface* surface = 0;

int main() {

    int x, y;
    SDL_Event event;
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER);
    atexit(SDL_Quit);
    surface = SDL_SetVideoMode(600,400,0,SDL_ANYFORMAT);
    SDL_WM_SetCaption("SDL Frame", 0);

    while(1) {/*
        if(SDL_PollEvent(&event)) {
            if(event.type == SDL_QUIT)
                break;
            if(event.type == SDL_MOUSEBUTTONDOWN) {
                SDL_GetMouseState(&x,&y);
            }
            if(event.type == SDL_MOUSEBUTTONUP) {
                SDL_GetMouseState(&x,&y);
            }
            if(event.type == SDL_KEYDOWN) {
                if(event.key.keysym.sym == SDLK_ESCAPE) {
                    SDL_Event quit;
                    quit.type = SDL_QUIT;
                    SDL_PushEvent(&quit);
                }
            }
        }*/
        SDL_UpdateRect(surface,0,0,0,0);
    }


    return 0;

}
