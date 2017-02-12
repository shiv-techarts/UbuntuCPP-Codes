#include <iostream>
#include <SDL2/SDL.h>
#include <GL/glew.h>

using namespace std;

int main() {

    if( SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        cout << "SDL Initialization Failed.." << endl;
    }

    SDL_Window* window;

    window = SDL_CreateWindow("My First Windows", 100, 100, 600, 400, SDL_WINDOW_OPENGL);

    if(!window) {
        cout << "Window Unable to open." << endl;
        SDL_Quit();
    }

    SDL_Delay(5000);

    SDL_DestroyWindow(window);

    SDL_Quit();

    cout << "Hurray...." << endl;

    return 0;
}
