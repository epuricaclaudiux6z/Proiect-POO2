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
    bool isBlocked(int x, int y) const;
    const std::vector<Entity*>& getEntities() const { return entities; }
};

#endif#pragma once
