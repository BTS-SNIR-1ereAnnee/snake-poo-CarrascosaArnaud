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
   
    p.moveUp();
    p.drawPoint();
    p.moveLeft();
    p.drawPoint();
    p.moveDown();
    p.drawPoint();
    p.moveRight();
    p.drawPoint();

    getch();
    fenetre->kill();
    return 0;
}

/*
    char input = getch();
    do {
        switch (input)
        {

           case'z': 
                p.erasePoint();
                p.moveUp();
                p.drawPoint();
                break;

            case'q': 
                p.erasePoint();
                p.moveLeft();
                p.drawPoint();
                break;

            case's': 
                p.erasePoint();
                p.moveDown();
                p.drawPoint();
                break;

            case'd': 
                p.erasePoint();
                p.moveRight();
                p.drawPoint();
                break;
        }
            
    }while(getch() != 'x'); 
*/