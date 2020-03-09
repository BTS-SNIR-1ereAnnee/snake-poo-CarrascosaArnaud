#ifndef SERPENT_H
#define SERPPENT_H

#include "Point.h"

class Point; 
class Serpent
{ 
public:
	Serpent();
	~Serpent();

	void ajouterPoint(Point p);
	void afficher();
	void deplacer();

private:
	Point serpent[20];
	int m_index;
};

#endif 