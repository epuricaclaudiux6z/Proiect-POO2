
#ifndef GAME_H
#define GAME_H

#include "Level.h"
#include "Player.h"
#include "Obstacle.h"

class Game {
private:
    bool running;
    Level* level;
    Player* player;

public:
    Game();
    ~Game();

    void run();
};

#endif
