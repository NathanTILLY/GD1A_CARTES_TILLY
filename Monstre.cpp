#ifndef MONSTRE_CPP
#define MONSTRE_CPP

#include <string>
#include <vector>
#include "Monstre.h"
#include <iostream>

    void Monstre:afficheMonstre(){
        std::cout << "Nom du monstre :", this->nom;
        std::cout << "Points de vie du monstre :", this->pointsDeVie;
        std::cout << "Score d'attaque du monstre :", this->scoreAttaque;
        if (disponibilite == false)
        {
            std::cout << "Ce monstre ne peut pas attaquer";
        }
        else
        {
            std::cout << "Ce monstre peut attaquer";
        }
    }

#endif   