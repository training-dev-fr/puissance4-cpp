#include <iostream>
#include <array>
#include "Square.h"
#include "Column.h"
#include "Grid.h"
#include "Joueur.h"
using namespace std;

int main()
{
    Grid g;
    g.display();
    Joueur j1("Jean");
    Joueur j2("Marie");
    int selectedCol;
    Joueur* currentPlayer = &j1;
    while(true){
        cout << "Joueur : " << currentPlayer->getNom() << endl;
        cout << "Choisissez une colonne entre 0 et 6" << endl;
        cin >> selectedCol;
        cout << "Colonne selectionnee : " << selectedCol << endl;
        if(currentPlayer == &j1){
            currentPlayer = &j2;
        }else{
            currentPlayer = &j1;
        }
    }
    system("pause");
    return 0;
}