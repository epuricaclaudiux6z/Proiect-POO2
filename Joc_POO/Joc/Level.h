#ifndef LEVEL_H
#define LEVEL_H
#include <vector>
#include "Entity.h"

class Level {
public:
    int w, h;
    std::vector<Entity*> entities;
    Level(int w, int h);
    ~Level();
    void addEntity(Entity* e);
    void draw();
    bool isBlocked(int x, int y);
    Entity* getEntityAt(int x, int y);
};
#endif