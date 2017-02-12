#include <iostream>
#include <memory>
#include "maingame.h"

using namespace std;

int main() {
    unique_ptr<MainGame> game = make_unique<MainGame>("My First Window", 600, 400);
    game->run();
    return 0;
}
