#include "Enemy.h"

Enemy::Enemy(int x, int y, int delayMs)
    : Entity(x, y, "E"), moveDelay(delayMs) {
    lastMove = std::chrono::steady_clock::now();
}