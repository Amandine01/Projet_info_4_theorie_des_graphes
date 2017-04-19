#ifndef GAMEBOX_H_INCLUDED
#define GAMEBOX_H_INCLUDED

class Gamebox
{
private :
    char m_coord_x;
    int m_coord_y;

public :
    Gamebox (char _coord_x, int _coord_y);
    ~Gamebox();
    char getcoordx();
    int getcoordy();
};

#endif // GAMEBOX_H_INCLUDED
