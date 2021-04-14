#ifndef MONSTRE_H
#define MONSTRE_H

#include <string>
#include <vector>


using namespace std;

class Monstre{

    private:
        int pointsDeVie;
        int scoreAttaque;
        std::string name;
        bool disponibilite;
    public:
        Monstre();
        Monstre(std::string nomMonstre, int pdvMonstre, int degatsMonstre, bool disponibiliteMonstre);
        void afficheMonstre();
        // renvoie le contenu de monstre
        void attaqueMonstre(Monstre &cible);
        void recevoirDegats(int nbDegats);
        int getDegats() const;

}
#endif