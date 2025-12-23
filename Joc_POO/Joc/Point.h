#ifndef POINT_H
#define POINT_H
#include "Entity.h"
class Point : public Entity {
public:
    Point(int x, int y) : Entity(x, y, "$") {}
    void update(Level* level) override {}
};
#endif