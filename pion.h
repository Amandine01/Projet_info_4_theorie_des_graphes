#ifndef PION_H_INCLUDED
#define PION_H_INCLUDED

class Pion
{
private :
    int m_couleur; ///0=blanc, 1=noir
    char m_coord_x;
    int m_coord_y;
    int m_on_board; ///1=on board, 0=off board

public :
    ///Constructeurs et destructeurs
    Pion (int _couleur, char _coord_x, int _coord_y, int _on_board);
    ~Pion();

    ///getters et setters
    int getcouleur();
    char getcoordx();
    int getcoordy();
    int getonboard();
    void setonboard(int p_on_board);
};

#endif // PION_H_INCLUDED
