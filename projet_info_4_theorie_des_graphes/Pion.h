#ifndef PION_H_INCLUDED
#define PION_H_INCLUDED
#include <string>
class Pion
{
private:
    //int m_nb_pion;
    char m_couleur_pion;
   // int m_ligne_pion;
   // char m_colonne_pion;
    // bool m_presence_plateau;

public:
    Pion(char _couleur);
    //Pion(int _nb_pion,char _couleur_pion,int _ligne_pion,char _colonne_pion,bool _presence_plateau);
    ~Pion();
    bool plateau();
    ///void affichage_pion();
    ///getter
    ///int getNb_pion();
    char getCouleur_pion();
    ///int getLigne_pion();
   /// char getColonne_pion();
   /// bool getPresence_plateau();
    ///setter
    ///void setNb_pion(int nb_pion);
    void setCouleur_pion(char _couleur);
   /// void setLigne_pion(int ligne_pion);
   /// void setColonne_pion(char colonne_pion);
    ///void setPresence_plateau(bool presence_plateau);


};

#endif // PION_H_INCLUDED
