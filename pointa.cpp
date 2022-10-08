#include "pointa.h"

Pointa::Pointa(long abs, long ord): Point(abs,ord)
{
	Point::Point(abs,ord);
}

Pointa::Pointa() : Point(0, 0)
{
	Point(0, 0);
}

unsigned short Pointa::rho()
{
	return x;
}
