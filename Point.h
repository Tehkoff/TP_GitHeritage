#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

/**
 * Classe de base du TP
 */
class Point {

private:
	/**
	 * abssice
	 */
	unsigned short x;
	unsigned short y;

public:
	void dep(long deltaAbs, long deltaOrd);

	/**
	 * permet d'initialisé un point
	 */
	void initialise(long newAbs, long newOrd);

	void show();

	Point(long abs, long ord);
};

#endif
