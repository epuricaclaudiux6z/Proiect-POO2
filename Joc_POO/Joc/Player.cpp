#include "Player.h"
#include "Level.h"
#include <conio.h>
#include <iostream>

Player::Player(int x, int y) : Entity(x, y, "@"), hp(3), points(0), stamina(0), needsUIUpdate(true) {}

void Player::update(Level* level) {
    if (!_kbhit()) return;
    char ch = _getch();
    int nx = x, ny = y;

    if (ch == 'w') ny--; else if (ch == 's') ny++;
    else if (ch == 'a') nx--; else if (ch == 'd') nx++;
    else if (ch == 27) { x = -1; return; }

    if (!level->isBlocked(nx, ny)) {
        std::cout << "\x1B[" << (y + 1) << ";" << (x + 1) << "H" << ".";

        if (stamina > 0) {
            stamina--;
            needsUIUpdate = true;
        }

        Entity* e = level->getEntityAt(nx, ny);
        if (e) {
            if (e->getSym() == "$") {
                points++;
                if (points % 10 == 0) stamina += 50;
                e->setPos(-2, -2);
                needsUIUpdate = true;
            }
            else if (e->getSym() == "E") {
                if (stamina > 0) {
                    // OMORI INAMICUL: Respawn random
                    int rx, ry;
                    do { rx = rand() % 28 + 1; ry = rand() % 18 + 1; } while (level->isBlocked(rx, ry));
                    e->setPos(rx, ry);
                    e->draw();
                }
                else {
                    hp--;
                    needsUIUpdate = true;
                }
            }
        }
        x = nx; y = ny;
        draw();
    }
}