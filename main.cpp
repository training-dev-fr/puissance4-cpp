#include <iostream>
#include <array>
#include "Square.h"
#include "Column.h"
#include "Grid.h"
using namespace std;

int main()
{
    Grid g;
    g.display();
    system("pause");

    Square& square = g.getColumn(6).getSquare(0);
    square.setToken("x");
    g.display();
    system("pause");

    Square& square2 = g.getColumn(3).getSquare(5);
    square2.setToken("x");
    g.display();
    system("pause");
    return 0;
}