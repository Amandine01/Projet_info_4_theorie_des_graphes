#include <iostream>
#include "Pion.h"
#include "plato.h"
#include <vector>
#include "console.h"


using namespace std;

int main()
{

Plateau p;
//p.initialiser_plateau();
p.menu_jeu();
bool quit = false;
    Console* pConsole = NULL;

    // Alloue la m�moire du pointeur
    pConsole = Console::getInstance();
    int x,y;
    x=y=4;
    // Affichage avec gotoligcol et couleur
    pConsole->gotoLigCol(x,y);

    pConsole->setColor(COLOR_DEFAULT);

    // Boucle �v�nementielle
    while (!quit)
    {
        // Si on a appuy� sur une touche du clavier
        if (pConsole->isKeyboardPressed())
        {
            // R�cup�re le code ASCII de la touche
            char key = pConsole->getInputKey();
            ///q est la touche directionnelle permettant daller vers la gauche
            if (key==113)/// code ascii de la lettre q
                pConsole->gotoLigCol(x-1,y);
            if (key==100)/// code ascii de la lettre d
                pConsole->gotoLigCol(x+1,y);
             if (key==122)/// code ascii de la lettre z
                pConsole->gotoLigCol(x,y+1);
            if (key==115)/// code asciide la lettre s
                pConsole->gotoLigCol(x,y-1);
            if (key==27)
                 pConsole->gotoLigCol(x,y);
                 cout<< "N";

            if (key == 'a' ) // 27 = touche escape
            {
                quit = true;
            }
        }
    }

    // Lib�re la m�moire du pointeur !
    Console::deleteInstance();


    return 0;
}
