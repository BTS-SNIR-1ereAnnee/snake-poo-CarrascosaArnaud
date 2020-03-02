#include "Point.h"
#include "Board.h"
#include <iostream>


using namespace std;

//Constructeur par défaut 
Point::Point()
{
    m_x = m_y = 10;
}

//Constructeur défini
Point::Point(int x, int y)
{
    this->m_x = x;
    this->m_y = y;
}

//Destructeur
Point::~Point()
{
    //dtor
}

//Setter pour le point 
void Point::setPoint(int x, int y)
{
    this->m_x = x;
    this->m_y = y;
}


//Permet d'aller vers le bas 
void Point::moveDown()
{
    m_y++;
}

//Permet d'aller vers le haut 
void Point::moveUp()
{
    m_y--;
}

//Permet d'aller vers la droite 
void Point::moveRight()
{
    m_x++;
}

//Permet d'aller vers la gauche  
void Point::moveLeft()
{
    m_x--;
}

//Getter de X
int Point::getX() const
{
    return m_x;
}

//Setter de X
void Point::setX(int val)
{
    m_x = val;
}

//Getter de Y
int Point::getY() const
{
    return m_y;
}

//Setter de Y 
void Point::setY(int val)
{
    m_y = val;
}

//Permet de dessiner un point 
void Point::drawPoint()
{
    Board *b;
    b = Board::getInstance();
    b->dessinerPoint(*this);
}

//Permet d'effacer un point
void Point::erasePoint()
{
    Board *b;
    b = Board::getInstance();
    b->effacerPoint(*this);
}

//Permet d'afficher les coordonées du point 
void Point::debug()
{
    cout << "(" << this->m_x << "," << this->m_y << ")";
}