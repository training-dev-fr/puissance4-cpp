#include "Joueur.h"

Joueur::Joueur(string n) : nom(n) {}

string Joueur::getNom() const {
    return nom;
}