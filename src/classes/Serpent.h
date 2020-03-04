#ifndef SERPENT_H
#define SERPPENT_H

#include "Point.h"

class Point; 
class Serpent
{ 
public:
	void ajouterPoint(Point p);
	void afficher();

private:
	Point serpent[20];
	int m_index;
};

#endif 