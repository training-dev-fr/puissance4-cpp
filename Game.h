#ifndef GAME_H
#define GAME_H

#include "Joueur.h"
#include "Grid.h"
class Game
{
    private:
        Joueur j1;
        Joueur j2;
        Joueur* currentPlayer;
        Grid grid;
         
    public:
        Game();
        void start();
        void selectNames();
        void play(int col);

};

#endif