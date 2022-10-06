#ifndef POINT_H
#define POINT_H

/**
 * Classe de base du TP
 */
class Point {

private:
	/**
	 * abssice
	 */
	unsigned short x;
	unsigned short attribute;

public:
	void dep(long deltaAbs, long deltaOrd);

	/**
	 * permet d'initialisé un point
	 */
	void initialise(long newAbs, long newOrd);

	void operation();

	void show();

	Point(long abs, long ord);
};

#endif
