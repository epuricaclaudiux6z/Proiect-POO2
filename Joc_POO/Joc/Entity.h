#ifndef ENTITY_H
#define ENTITY_H

#include <string>

class Level;

class Entity {
protected:
    int x, y;
    std::string symbol;

public:
    Entity(int startX, int startY, const std::string& sym);
    virtual ~Entity();

    virtual void update(Level* level) = 0;

    void drawAtCurrentPosition() const;

    int getX() const;
    int getY() const;
    void setPosition(int newX, int newY);
    std::string getSymbol() const;
};

#endif#pragma once
