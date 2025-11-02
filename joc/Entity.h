#ifndef ENTITY_H
#define ENTITY_H

#include <string>

class Entity {
protected:
    int x, y;
    std::string symbol;

public:
    Entity(int startX, int startY, const std::string& sym);
    virtual ~Entity() {}

    virtual void update() = 0;
    virtual void draw() const;

    int getX() const;
    int getY() const;
    void setPosition(int newX, int newY);
    std::string getSymbol() const;
};

#endif

