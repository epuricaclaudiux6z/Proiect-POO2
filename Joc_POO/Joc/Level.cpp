#include "Level.h"
#include <iostream>

Level::Level(int w, int h) : width(w), height(h) {}

Level::~Level() {
    for (auto e : entities) delete e;
}

void Level::addEntity(Entity* e) {
    entities.push_back(e);
}

bool Level::isBlocked(int x, int y) const {
    for (auto e : entities) {
        // Daca la coordonatele x, y exista un obstacol (#)
        if (e->getX() == x && e->getY() == y && e->getSymbol() == "#")
            return true;
    }
    return false;
}

void Level::draw() const {
    for (int j = 0; j < height; j++) {
        for (int i = 0; i < width; i++) {
            bool found = false;
            for (auto e : entities) {
                if (e->getX() == i && e->getY() == j) {
                    std::cout << e->getSymbol();
                    found = true;
                    break;
                }
            }
            if (!found) std::cout << ".";
        }
        std::cout << "\n";
    }
}