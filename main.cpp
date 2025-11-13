#include <iostream>
#include <array>
#include "Square.h"
#include "Column.h"
#include "Grid.h"
#include "Joueur.h"
#include "Game.h"
using namespace std;

int main()
{
    Game game;
    // game.selectNames();
    // game.start();

    game.drawCombinaison();

    system("pause");
    return 0;
}