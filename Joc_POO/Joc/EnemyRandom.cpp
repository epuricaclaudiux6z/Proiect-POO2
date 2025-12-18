#include "EnemyRandom.h"
#include "Level.h"
#include <cstdlib>
#include <iostream>

EnemyRandom::EnemyRandom(int x, int y) : Enemy(x, y, 400) {}

void EnemyRandom::update(Level* level) {
    auto now = std::chrono::steady_clock::now();
    if (std::chrono::duration_cast<std::chrono::milliseconds>(now - lastMove).count() < moveDelay)
        return;

    lastMove = now;
    int dir = rand() % 4;
    int nX = x, nY = y;

    if (dir == 0) nY--;
    else if (dir == 1) nY++;
    else if (dir == 2) nX--;
    else if (dir == 3) nX++;

    if (!level->isBlocked(nX, nY)) {
        // Sterge urma veche
        std::cout << "\x1B[" << (y + 1) << ";" << (x + 1) << "H" << ".";
        x = nX; y = nY;
        drawAtCurrentPosition();
    }
}