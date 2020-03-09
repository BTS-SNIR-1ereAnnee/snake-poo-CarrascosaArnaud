#include "Serpent.h"
#include "Point.h"
#include <iostream>

using namespace std;

// Constructeur par défaut
Serpent::Serpent()
{
   	this -> m_index = 3; // Taille de départ du snake

}

// Destructeur par défaut	
Serpent::~Serpent() 
{


}

// Affiche les points
void Serpent::afficher()
{
	for(int i=0; i<m_index; i++)
	{
		printw("*"); // Affiche dans la fenêtre
	}
}

// Ajout des points 
void Serpent::ajouterPoint(Point p)
{

	this -> serpent[m_index] = p;
	m_index++;
}

void Serpent::deplacer()
{

}
