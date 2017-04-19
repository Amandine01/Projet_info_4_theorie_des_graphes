#include <iostream>
#include "Pion.h"
#include "plato.h"
#include <vector>
#include "console.h"
#include <stdlib.h>
#include <sdl/sdl.h>

using namespace std;

int main()
{

Plateau p;
p.afficher_plateau();
bool quit = false;
    Console* pConsole = NULL;

    // Alloue la mémoire du pointeur
    pConsole = Console::getInstance();

    // Affichage avec gotoligcol et couleur
    pConsole->gotoLigCol(5, 10);
    //pConsole->setColor(COLOR_GREEN);


    // Boucle événementielle
    while (!quit)
    {
        // Si on a appuyé sur une touche du clavier
        if (pConsole->isKeyboardPressed())
        {

            int x,y;  // position joueur

            x = y = 1;
            int key = pConsole->getInputKey();
            while(key!=27) // ECHAP
            {
              int key = pConsole->getInputKey();
             switch(key)
              { case SDL_q:
            pConsole->gotoLigCol(0,-1);
                break;
                case SDL_d:
            pConsole->gotoLigCol(0,1);
                break;
                case SDL_z:
            pConsole->gotoLigCol(-1,0);
                break;
                case SDL_s:
            pConsole->gotoLigCol(1,0);
                default:
                break;
        }
        }
        }}




    // Libère la mémoire du pointeur !
    Console::deleteInstance();
    return 0;
}
