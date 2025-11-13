#ifndef JOUEUR_H
#define JOUEUR_H

#include <string>
using namespace std;

class Joueur {
    private:
        string nom;

    public:
        Joueur(string n);
        string getNom() const;
};

#endif