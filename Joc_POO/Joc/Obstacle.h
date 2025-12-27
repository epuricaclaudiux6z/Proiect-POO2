#ifndef OBSTACLE_H
#define OBSTACLE_H
#include "Entity.h"

class Obstacle : public Entity {
public:
    Obstacle(int x, int y);
    void update(Level* level) override;
};
#endif