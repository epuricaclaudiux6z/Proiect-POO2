#include "Entity.h"
#include <iostream>

Entity::Entity(int startX, int startY, const std::string& sym)
    : x(startX), y(startY), symbol(sym) {}

void Entity::draw() const {
    std::cout << symbol;
}

int Entity::getX() const { return x; }
int Entity::getY() const { return y; }
void Entity::setPosition(int newX, int newY) { x = newX; y = newY; }
std::string Entity::getSymbol() const { return symbol; }
