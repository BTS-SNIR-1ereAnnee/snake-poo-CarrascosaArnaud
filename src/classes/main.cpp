/*
 Projet: snake
*/
#include <iostream>
#include "Point.h"
#include "Board.h"
#include "Serpent.h"


using namespace std;

int main()
{

    // Pointeurs sur l'unique instance de la classe UniqueObject
    Board *fenetre;

    Serpent snake;

    // Initialisation des pointeurs
    fenetre = Board::getInstance ();

    Point p; // Placement du point 
    noecho(); // Cache l'input

    move(10,10);

    refresh();
    snake.afficher();

    getch();
    snake.ajouterPoint(p);
    snake.afficher();

    getch();

    // Fermer proprement
    clear();
    fenetre->kill(); 


    return 0;
}