/*
 Projet: snake
*/
#include <iostream>
#include "Point.h"
#include "Board.h"
#include "Serpent.h"
#include <unistd.h>


using namespace std;

int main()
{
    cout << "test\n";
    Serpent snake;

    // Pointeurs sur l'unique instance de la classe UniqueObject
    Board *fenetre;
    
    fenetre = Board::getInstance();

    Point p; // Placement du point 
    //noecho(); // Cache l'input


    
    for (int i = 0; i < 8; i++)
    {
        usleep(300000);
        snake.afficher();
        snake.deplacer();
    }

    // Fermer proprement
    clear();
    fenetre->kill(); 


    return 0;
}