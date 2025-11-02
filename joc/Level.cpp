#include "Level.h"
#include <iostream>

Level::Level(int w, int h) : width(w), height(h) {}

Level::~Level() {
    for (auto e : entities)
        delete e;
}

void Level::addEntity(Entity* e) {
    entities.push_back(e);
}

bool Level::isOccupied(int x, int y) const {
    for (auto e : entities)
        if (e->getX() == x && e->getY() == y)
            return true;
    return false;
}

void Level::draw() const {
    for (int j = 0; j < height; j++) {
        for (int i = 0; i < width; i++) {
            bool found = false;
            for (auto e : entities) {
                if (e->getX() == i && e->getY() == j) {
                    e->draw();
                    found = true;
                    break;
                }
            }
            if (!found) std::cout << ".";
        }
        std::cout << "\n";
    }
}
