#ifndef LEVEL_H
#define LEVEL_H
#include <vector>
#include "Entity.h"

class Level {
public:
    class Bounds {
    public:
        int maxX, maxY;
        Bounds(int w, int h) : maxX(w - 1), maxY(h - 1) {}
        bool isInside(int x, int y) const {
            return (x >= 0 && x <= maxX && y >= 0 && y <= maxY);
        }
    };

private:
    Bounds limits;

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