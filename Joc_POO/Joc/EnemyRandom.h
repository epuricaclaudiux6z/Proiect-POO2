#ifndef ENEMY_RANDOM_H
#define ENEMY_RANDOM_H
#include "Enemy.h"

class EnemyRandom : public Enemy {
public:
    EnemyRandom(int x, int y);
    void update(Level* level) override;
};
#endif