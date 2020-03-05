#include "Serpent.h"
#include "Point.h"
#include <iostream>

using namespace std;

Serpent::Serpent()
{
   	this -> m_index = 1;

}

Serpent::~Serpent()
{


}

void Serpent::afficher()
{
	for(int i=0; i<m_index; i++)
	{
		cout << '*';
	}
	cout << endl;
}

void Serpent::ajouterPoint(Point p)
{

	this -> serpent[m_index] = p;
	m_index++;
}
