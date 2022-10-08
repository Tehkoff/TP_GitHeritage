#include "pointa.h"

Pointa::Pointa(long abs, long ord): Point(abs,ord)
{
	Point::Point(abs,ord);
}

unsigned short Pointa::rho()
{
	return x;
}
