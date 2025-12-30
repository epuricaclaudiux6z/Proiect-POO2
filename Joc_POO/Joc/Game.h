#ifndef GAME_H
#define GAME_H
#include "Level.h"
#include "Player.h"
class Game {
private:
    Level* lvl;
    Player* p;
    bool running;
public:
    Game();
    ~Game();
    void run();
};
#endif