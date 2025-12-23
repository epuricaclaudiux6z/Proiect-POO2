#include "Level.h"
#include <iostream>

Level::Level(int w, int h) : w(w), h(h) {}
Level::~Level() { for (auto e : entities) delete e; }
void Level::addEntity(Entity* e) { entities.push_back(e); }

bool Level::isBlocked(int x, int y) {
    if (x < 0 || x >= w || y < 0 || y >= h) return true;
    for (auto e : entities)
        if (e->getX() == x && e->getY() == y && e->getSym() == "#") return true;
    return false;
}

Entity* Level::getEntityAt(int x, int y) {
    for (auto e : entities)
        if (e->getX() == x && e->getY() == y) return e;
    return nullptr;
}

void Level::draw() {
    system("cls");
    for (int j = 0; j < h; j++) {
        for (int i = 0; i < w; i++) {
            bool found = false;
            for (auto e : entities) {
                if (e->getX() == i && e->getY() == j) {
                    std::cout << e->getSym();
                    found = true; break;
                }
            }
            if (!found) std::cout << ".";
        }
        std::cout << "\n";
    }
}