#ifndef MONSTRE_CPP
#define MONSTRE_CPP

#include <string>
#include "Monstre.h"
#include <iostream>

using namespace std;

Monstre::Monstre() : name("Pataupe"), pointsDeVie(10), scoreAttaque(5), disponibilite(true){

}
Monstre::Monstre(std::string nomMonstre, int pdvMonstre, int degatsMonstre, bool disponibiliteMonstre) : name(nomMonstre), pointsDeVie(pdvMonstre), scoreAttaque(degatsMonstre), disponibilite(disponibiliteMonstre){

}

void Monstre::afficheMonstre(){
    std::cout << "Nom du monstre :"<< nom << endl;
    if (pointsDeVie <= 0){
        std::cout << name << "est mort au combat" << endl;
        delete Monstre
    }
    else{
        std::cout << "Points de vie du monstre :" << pointsDeVie << endl;
    }
    std::cout << "Score d'attaque du monstre :" << scoreAttaque << endl;
    if (disponibilite == false)
    {
        std::cout << "Ce monstre ne peut pas attaquer";
    }
    else
    {
        std::cout << "Ce monstre peut attaquer";
    }
}

void Monstre::recevoirDegats(int nbDegats){
    pointsDeVie -= nbDegats;

    if (nbDegats < 0)
    {
        nbDegats = 0;// La vie ne peut pas être négative
    }
}

int Monstre::getDegats() const{
    return scoreAttaque;
}

void Monstre::attaqueMonstre(Monstre &cible){
    if (disponibilite == true){
        cible.recevoirDegats(getDegats());
    }
    else{
        std::cout << "Ce monstre ne peut pas attaquer";
    }
    
}


#endif   