#ifndef GAME_H
#define GAME_H

#include "Joueur.h"

class Game
{
    private:
        Joueur j1;
        Joueur j2;
        Joueur *currentPlayer;

    public:
        Game();
        void start();
};

#endif