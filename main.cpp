#include <iostream>
#include "pion.h"
#include "gamebox.h"
#include <vector>

using namespace std;

int main()
{
    vector <Pion> pion_blanc;
    vector <Pion> pion_noir;
    char line='A';
    ///Gamebox plateau[8][8];
    vector <Gamebox> box;

    ///Initialisation du vecteur de pion blanc
    for (int i=0; i<64;i++)
    {
        pion_blanc.push_back(Pion(0, '0', 0, 0));
    }

    ///Initialisation du vecteur de pion noir
    for (int i=0; i<64; i++)
    {
        pion_noir.push_back(Pion(0,'0',0,0));
    }

    ///Création du tableau de jeu représentant le plateau (8X8)
    for (int i=0;i<8;i++)
    {
        for (int j=0; j<8;j++)
        {
            box.push_back(Gamebox(line,i+1));
            ///plateau[i][j]=Gamebox(line,i+1)
            ///line++;///On incrémente line pour obtenir à chaque tour de boucle, A, puis B, puis C etc....
        }
        line++; ///On incrémente line pour obtenir à chaque tour de boucle, A, puis B, puis C etc....
    }




    return 0;
}
