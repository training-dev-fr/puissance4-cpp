#include "Grid.h"
#include <iostream>

using namespace std;

Grid::Grid() {
    for(int x = 0; x<7; x++) {
        column_list[x] = Column(x);
    }
}

void Grid::display() {
    system("cls");
    cout << "-----------------------" << endl;
    for(int col = 0; col < column_list.size() ; col++) {
        column_list[col].display();
    }
    cout << "-----------------------"  << endl;

}

Column& Grid::getColumn(int xCoord) {
    return column_list[xCoord];
};