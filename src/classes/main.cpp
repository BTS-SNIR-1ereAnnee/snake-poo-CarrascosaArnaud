/*
 Projet: snake
*/
#include <iostream>
#include "Point.h"
#include "Board.h"


using namespace std;

int main()
{

    // Pointeurs sur l'unique instance de la classe UniqueObject
    Board *fenetre;

    // Initialisation des pointeurs
    fenetre = Board::getInstance ();

    // Variable
    char input;

    Point p(10,10); // Placement du point 
    p.drawPoint(); // Afficher le point 

    // Boucle pour déplacer le point en l'affichant 
    do {

        input = getch(); // Permet d'utiliser la saisie de l'utilisateur 
        p.erasePoint(); // Permet d'effacer le point 

        switch (input) // Traite la saisie
        {

           case'z':
                p.moveUp();
                break;

            case'q': 
                p.moveLeft();
                break;

            case's':
                p.moveDown();
                break;

            case'd': 
                p.moveRight();
                break;

        }
        
        p.drawPoint(); // Dessine le point
            
    }while(input != 'x'); // Condition de sortie

    fenetre->kill(); // Fermer proprement

    return 0;
}