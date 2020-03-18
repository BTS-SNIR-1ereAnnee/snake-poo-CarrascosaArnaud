#include "Serpent.h"
#include "Point.h"
#include <iostream>
#include <unistd.h>
#include "ncurses.h"

using namespace std;

// Constructeur par défaut
Serpent::Serpent()
{
   	this -> m_index =0; // Taille de départ du snake

}

// Destructeur par défaut	
Serpent::~Serpent() 
{


}

// Ajout des points 
void Serpent::ajouterPoint(Point p)
{

	this -> serpent[m_index] = p;
	m_index++;
}

// Affiche les points
void Serpent::afficher()
{
	for(int i = 0; i <= m_index; i++)
	{
		serpent[m_index-1].erasePoint();
		serpent[i].drawPoint();
	}
}

void Serpent::deplacer()
{

	int xTemp = serpent[0].getX();
	int yTemp = serpent[0].getY();
	serpent[0].moveUp();
	serpent[1].setX(xTemp);
	serpent[1].setY(yTemp);
	for (int i = 2; i<=m_index; i++)
	{
		serpent[i].setX(serpent[i-1].getX());
		serpent[i].setY(serpent[i-1].getY());
	}
}
