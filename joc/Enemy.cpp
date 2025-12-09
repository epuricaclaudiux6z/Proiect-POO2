#include "Enemy.h"

Enemy::Enemy(int startX, int startY)
    : Entity(startX, startY, "?"), frame(0) {}

void Enemy::animate() {
    frame = (frame + 1) % 2;
    symbol = (frame == 0 ? "?" : "!");
}

