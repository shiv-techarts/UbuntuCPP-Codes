#include "maingame.h"

using namespace std;

MainGame::MainGame(string p_nameOfWindow, int width, int height) :
    nameOfWindow(p_nameOfWindow), windowWidth(width), windowHeight(height) {
    currentGameState = GameState::PLAY;
    window = nullptr;
}

MainGame::~MainGame() {
    SDL_Quit();

    if(window) {
        SDL_DestroyWindow(window);
        //delete window;
    }

    window = nullptr;
}

void MainGame::run() {

    initGame();
    gameLoop();
    drawGame();
    //SDL_Delay(5000);

}

void MainGame::initGame() {
    if(SDL_Init(SDL_INIT_EVERYTHING)) {
        std::cout << "SDL Initialization failed =>" << SDL_GetError();
        exit(-1);
    }

    window = SDL_CreateWindow(nameOfWindow.c_str(),
                              SDL_WINDOWPOS_CENTERED,
                              SDL_WINDOWPOS_CENTERED,
                              windowWidth,
                              windowHeight,
                              SDL_WINDOW_OPENGL
                              );

    if(!window) {
        std::cout << "SDL Window Initialization failed =>" << SDL_GetError();
        exit(-1);
    }

    SDL_GLContext glContext = SDL_GL_CreateContext(window);


    if(!glContext) {
        std::cout << "SDL GL Context Initialization failed =>" << SDL_GetError();
        exit(-1);
    }

    GLenum error = glewInit();
    if(error != GLEW_OK) {
        std::cout << "GL Initialization failed =>" << glewGetErrorString(error);
        exit(-1);
    }

    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void MainGame::processInput() {
    SDL_Event event;

    while( SDL_PollEvent(&event) ) {
        switch (event.type) {
            case SDL_QUIT:
                currentGameState = GameState::EXIT;
                break;

            case SDL_MOUSEMOTION:
                cout << event.motion.x << " || " << event.motion.y << endl;
                break;

            default:
                break;
        }
    }
}


void MainGame::drawGame() {
    glClearDepth(1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glEnableClientState(GL_COLOR_ARRAY);
    glBegin(GL_TRIANGLES);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0, 0);
    glVertex2f(0, 100);
    glVertex2f(100, 100);

    glEnd();

    SDL_GL_SwapWindow(window);

}

void MainGame::gameLoop() {
    while( currentGameState != GameState::EXIT ) {
        processInput();
    }
}

