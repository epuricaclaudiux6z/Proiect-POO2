#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "Entity.h"

class Obstacle : public Entity {
public:
    Obstacle(int startX, int startY);
    void update() override;
};

#endif
