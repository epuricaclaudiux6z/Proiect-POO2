#include "Player.h"
#include "Level.h"
#include <iostream>
#include <conio.h> 

Player::Player(int startX, int startY) : Entity(startX, startY, "@") {}

void Player::update(Level* level) {
    if (!_kbhit()) return;

    char input = _getch();
    if (input == 27) { // ESC pentru exit
        setPosition(-1, -1);
        return;
    }

    int nX = x, nY = y;
    if (input == 'w' || input == 'W') nY--;
    else if (input == 's' || input == 'S') nY++;
    else if (input == 'a' || input == 'A') nX--;
    else if (input == 'd' || input == 'D') nX++;
    else return;

    if (!level->isBlocked(nX, nY)) {
        // Sterge urma veche (pune punct in loc)
        std::cout << "\x1B[" << (y + 1) << ";" << (x + 1) << "H" << ".";
        x = nX; y = nY;
        drawAtCurrentPosition();
    }
}