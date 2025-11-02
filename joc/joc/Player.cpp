#include "Player.h"
#include <iostream>

Player::Player(int startX, int startY)
    : Entity(startX, startY, "@") {}

void Player::update() {
    char input;
    std::cout << "Move (W/A/S/D): ";
    std::cin >> input;

    switch (input) {
        case 'w': y--; break;
        case 's': y++; break;
        case 'a': x--; break;
        case 'd': x++; break;
        default: std::cout << "Invalid input!\n"; break;
    }
}
