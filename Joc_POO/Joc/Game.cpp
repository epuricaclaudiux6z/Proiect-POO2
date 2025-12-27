#include "Game.h"
#include "Obstacle.h"
#include "Point.h"
#include "EnemyRandom.h"
#include <iostream>
#include <windows.h>
#include <ctime>
#include <conio.h>

Game::Game() {
    srand((unsigned int)time(0));
    lvl = new Level(30, 20);
    p = new Player(15, 10);
    lvl->addEntity(p);
    for (int j = 0; j < 20; j++) {
        for (int i = 0; i < 30; i++) {
            if (i == 0 || j == 0 || i == 29 || j == 19 || (rand() % 100 < 10)) {
                if (!(i == 15 && j == 10)) lvl->addEntity(new Obstacle(i, j));
            }
        }
    }
    for (int i = 0; i < 5; i++) lvl->addEntity(new Point(rand() % 28 + 1, rand() % 18 + 1));
    lvl->addEntity(new EnemyRandom(5, 5));
    lvl->addEntity(new EnemyRandom(25, 15));
    running = true;
}

Game::~Game() { delete lvl; }

void Game::run() {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode = 0; GetConsoleMode(hOut, &dwMode);
    SetConsoleMode(hOut, dwMode | 0x0004);
    lvl->draw();
    while (running && p->hp > 0 && p->getX() != -1 && p->points < 50) {
        p->update(lvl);
        if (p->needsUIUpdate) {
            std::cout << "\x1B[2;35H HP: " << p->hp << "    ";
            std::cout << "\x1B[3;35H Puncte: " << p->points << "/50   ";
            std::cout << "\x1B[4;35H Stamina: " << p->stamina << "     ";
            p->needsUIUpdate = false;
        }
        for (auto e : lvl->entities) {
            if (e != p) {
                e->update(lvl);
                if (e->getSym() == "$" && e->getX() < 0) {
                    int rx, ry;
                    do { rx = rand() % 28 + 1; ry = rand() % 18 + 1; } while (lvl->isBlocked(rx, ry));
                    e->setPos(rx, ry);
                    e->draw();
                }
            }
        }
        Sleep(50);
    }
    system("cls");
    if (p->points >= 50) std::cout << "FELICITARI! AI CASTIGAT!" << std::endl;
    else std::cout << "GAME OVER! Scor: " << p->points << std::endl;
    std::cout << "Apasati orice tasta pentru a iesi...";
    _getch();
}