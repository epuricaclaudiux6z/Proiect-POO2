#ifndef ENEMY_H
#define ENEMY_H
#include "Entity.h"

class Enemy : public Entity {
public:
    Enemy(int x, int y, std::string sym);
};
#endif