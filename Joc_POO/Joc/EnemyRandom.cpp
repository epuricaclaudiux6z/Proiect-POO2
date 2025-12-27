#include "EnemyRandom.h"
#include "Level.h"
#include <iostream>
#include <cstdlib>

EnemyRandom::EnemyRandom(int x, int y) : Enemy(x, y, "E") {}

void EnemyRandom::update(Level* level) {
    if (rand() % 10 > 8) {
        std::cout << "\x1B[" << (y + 1) << ";" << (x + 1) << "H" << ".";
        int dir = rand() % 4;
        int nx = x, ny = y;
        if (dir == 0) ny--; else if (dir == 1) ny++;
        else if (dir == 2) nx--; else if (dir == 3) nx++;
        if (!level->isBlocked(nx, ny)) { x = nx; y = ny; }
        draw();
    }
}