#ifndef PLAYER_H
#define PLAYER_H
#include "Entity.h"

class Player : public Entity {
public:
    int hp, points, stamina;
    bool needsUIUpdate; // Controlul scrierii textului
    Player(int x, int y);
    void update(Level* level) override;
};
#endif