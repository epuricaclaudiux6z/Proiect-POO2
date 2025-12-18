#include "Game.h"
#include "Obstacle.h"
#include "EnemyRandom.h"
#include <cstdlib>
#include <ctime>

Game::Game() {
    srand((unsigned)time(NULL));
    level = new Level(27, 27);

    for (int y = 0; y < 27; y++) {
        for (int x = 0; x < 27; x++) {
            if (x == 0 || y == 0 || x == 26 || y == 26 || rand() % 100 < 15) {
                level->addEntity(new Obstacle(x, y));
            }
        }
    }

    player = new Player(13, 13);
    level->addEntity(player);
    level->addEntity(new EnemyRandom(5, 5));
    level->addEntity(new EnemyRandom(20, 20));

    system("cls");
    level->draw();
    running = true;
}

Game::~Game() { delete level; }

void Game::run() {
    while (running) {
        player->update(level);
        for (auto e : level->getEntities()) {
            if (e != player) e->update(level);
        }
        if (player->getX() < 0) running = false;
    }
}