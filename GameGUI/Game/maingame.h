#ifndef MAINGAME_H
#define MAINGAME_H

#include <iostream>
#include <string>
#include <exception>
#include <SDL2/SDL.h>
#include <GL/glew.h>
#include <GL/gl.h>

enum class GameState {PLAY, EXIT};

class MainGame {

    std::string nameOfWindow;
    int windowWidth;
    int windowHeight;

    GameState currentGameState;

    SDL_Window* window;

    void initGame();
    void processInput();
    void gameLoop();
    void drawGame();

public:
    MainGame(std::string p_nameOfWindow, int width, int height);
    ~MainGame();

    void run();

};

#endif // MAINGAME_H
