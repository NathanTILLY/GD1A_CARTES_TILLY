#ifndef MAGE_H
#define MAGE_H

#include <string>
#include <iostream>
#include <vector>

#include "monstre.h"
 
class Mage
{
    public:
 
    Mage();
    Mage(std::string nom, int pv);
    void invoqueMonstre();
    void afficheMage();
    void attaque(Monstre &Possede);
    void recevoirDegats(int degatsEncaisses);
    void attaqueMage(Mage &cible, int degatsMonstre);
    
 
    private:
 
    std::string nomMage;
    int vieMage;
    

};
 

#endif
