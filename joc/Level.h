
#ifndef LEVEL_H
#define LEVEL_H

#include <vector>
#include "Entity.h"

class Level {
private:
    int width, height;
    std::vector<Entity*> entities;

public:
    Level(int w, int h);
    ~Level();

    void addEntity(Entity* e);
    void draw() const;
    bool isOccupied(int x, int y) const;
};

#endif
