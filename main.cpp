#include "Monstre.cpp"
#include <iostream>
#include <string>


using namespace std;

int main(){
    
    Monstre Pataupe;
    Monstre Drakularge ("Drakularge",40,20,true);

    //affiche les deux monstres crées
    Pataupe.afficheMonstre();
    Drakularge.afficheMonstre();

    Pataupe.attaqueMonstre(Drakularge);
    Drakularge.attaqueMonstre(Pataupe);

    //La pataupe est morte normalement
    Pataupe.afficheMonstre();
    Drakularge.afficheMonstre();

    return 0;
}