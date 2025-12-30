#include "Entity.h"
#include <iostream>

Entity::Entity(int x, int y, std::string sym) : x(x), y(y), symbol(sym) {}
Entity::~Entity() {}
void Entity::draw() const {
    std::cout << "\x1B[" << (y + 1) << ";" << (x + 1) << "H" << symbol;
}
int Entity::getX() const { return x; }
int Entity::getY() const { return y; }
void Entity::setPos(int nx, int ny) { x = nx; y = ny; }
std::string Entity::getSym() const { return symbol; }

bool Entity::operator==(const Entity& other) const {
    return (this->x == other.x && this->y == other.y);
}
std::ostream& operator<<(std::ostream& os, const Entity& e) {
    os << e.symbol << "@(" << e.x << "," << e.y << ")";
    return os;
}