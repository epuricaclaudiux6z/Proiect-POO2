#include "Game.h"
#include <iostream>

Game::Game() {
    level = new Level(10, 6);
    player = new Player(1, 1);

    level->addEntity(player);
    level->addEntity(new Obstacle(4, 2));
    level->addEntity(new Obstacle(5, 2));
    level->addEntity(new Obstacle(6, 2));

    running = true;
}

Game::~Game() {
    delete level;
}

void Game::run() {
    while (running) {
        system("cls");
        level->draw();

        player->update();

        if (player->getX() < 0 || player->getY() < 0)
            running = false;
    }
}
