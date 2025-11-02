#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"

class Player : public Entity {
public:
    Player(int startX, int startY);
    void update() override;
};

#endif
