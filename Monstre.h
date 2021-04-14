#ifndef MONSTRE_H
#define MONSTRE_H

#include <string>
#include <vector>

class Monstre{

    private:
        int pointsDeVie;
        int scoreAttaque;
        std::string nom;
        bool disponibilite = true;
    public:
        
        void attaquerMonstre();
        //renvoie le résultat de l'attaque d'un monstre sur l'autre, si il le détruit et si il se fait détruire
        void afficheMonstre();
        // renvoie le contenu de monstre

}
#endif