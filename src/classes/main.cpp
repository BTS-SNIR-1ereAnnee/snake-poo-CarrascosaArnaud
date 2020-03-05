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


    Point p(10,10); // Placement du point 
    p.drawPoint(); // Afficher le point 

    // Fermer proprement
    clear();
    fenetre->kill(); 

    return 0;
}