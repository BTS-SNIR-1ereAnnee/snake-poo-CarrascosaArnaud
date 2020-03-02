/*
 Projet: snake
*/
#include <iostream>
#include "Point.h"
#include "Board.h"


using namespace std;

int main()
{

    // pointeurs sur l'unique instance de la classe UniqueObject
    Board *fenetre;
    // initialisation des pointeurs
    fenetre = Board::getInstance ();

    Point p(10,10);
    p.drawPoint();

    char input;
    do {
    input = getch();
        p.erasePoint();
        switch (input)
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
        
        p.drawPoint();
            
    }while(input != 'x'); 

    fenetre->kill();
    return 0;

}