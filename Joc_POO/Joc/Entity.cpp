#include "Entity.h"
#include <iostream>

Entity::Entity(int startX, int startY, const std::string& sym)
    : x(startX), y(startY), symbol(sym) {}

Entity::~Entity() {}

void Entity::drawAtCurrentPosition() const {
    // Muta cursorul folosind secvente ANSI: \x1B[linie;coloanaH
    std::cout << "\x1B[" << (y + 1) << ";" << (x + 1) << "H" << symbol;
}

int Entity::getX() const { return x; }
int Entity::getY() const { return y; }
void Entity::setPosition(int newX, int newY) { x = newX; y = newY; }
std::string Entity::getSymbol() const { return symbol; }