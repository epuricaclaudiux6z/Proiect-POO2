#ifndef ENEMY_H
#define ENEMY_H

#include "Entity.h"

class Enemy : public Entity {
protected:
    int frame;

public:
    Enemy(int startX, int startY);
    virtual void animate();
};

#endif

