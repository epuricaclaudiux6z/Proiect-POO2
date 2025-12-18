#ifndef ENEMY_H
#define ENEMY_H

#include "Entity.h"
#include <chrono>

class Enemy : public Entity {
protected:
    std::chrono::steady_clock::time_point lastMove;
    int moveDelay;

public:
    Enemy(int x, int y, int delayMs);
};

#endif#pragma once
