#ifndef ENTITY_H
#define ENTITY_H
#include <string>

class Level;
class Entity {
protected:
    int x, y;
    std::string symbol;
public:
    Entity(int x, int y, std::string sym);
    virtual ~Entity();
    virtual void update(Level* level) = 0;
    void draw() const;
    int getX() const;
    int getY() const;
    void setPos(int nx, int ny);
    std::string getSym() const;
};
#endif