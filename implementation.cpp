#include <iostream>
#include "pion.h"
#include "gamebox.h"

Pion::Pion(int _couleur, char _coord_x, int _coord_y, int _on_board)
    :m_couleur(_couleur),m_coord_x(_coord_x),m_coord_y(_coord_y),m_on_board(_on_board)
{

}

Pion::~Pion()
{

}

int Pion::getcouleur()
{
    return m_couleur;
}

char Pion::getcoordx()
{
    return m_coord_x;
}

int Pion::getcoordy()
{
    return m_coord_y;
}

int Pion::getonboard()
{
    return m_on_board;
}

void Pion::setonboard(int p_on_board)
{
    m_on_board=p_on_board;
}

Gamebox::Gamebox (char _coord_x, int _coord_y)
        :m_coord_x(_coord_x), m_coord_y(_coord_y)
{

}

Gamebox::~Gamebox()
{

}

char Gamebox::getcoordx()
{
    return m_coord_x;
}

int Gamebox::getcoordy()
{
    return m_coord_y;
}


