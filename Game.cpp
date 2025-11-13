#include "Game.h"
#include <iostream>

using namespace std;

Game::Game() : j1(), j2(), grid(){
    currentPlayer = &j1;
}


void Game::start(){
    int selectedCol;
     while(true){
        grid.display();
        cout << "Joueur : " << currentPlayer->getNom() << endl;
        cout << "Choisissez une colonne entre 0 et 6" << endl;
        cin >> selectedCol;
        play(selectedCol);
        if(currentPlayer == &j1){
            currentPlayer = &j2;
        }else{
            currentPlayer = &j1;
        }
    }
    

}
void Game::selectNames(){
    cout << "Veillez saisir le nom du joueur 1 :";
    string name1;
    cin >> name1;
    j1.setNom(name1);
    cout << "Veillez saisir le token du joueur 1 :";
    string token1;
    cin >> token1;
    j1.setToken(token1);
    cout << "Veillez saisir le nom du joueur 2 :";
    string name2;
    cin >> name2;
    j2.setNom(name2);
    cout << "Veillez saisir le token du joueur 2 :";
    string token2;
    cin >> token2;
    j2.setToken(token2);

}

void Game::play(int col){
    Column& currentCol = grid.getColumn(col);
    for(int i = currentCol.getSquareNumber() - 1; i >=0;i--){
        if(!currentCol.getSquare(i).hasToken()){
            currentCol.getSquare(i).setToken(currentPlayer->getToken());
            break;
        }
    }
}