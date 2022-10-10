#include "pointa.h"

Pointa::Pointa(long abs, long ord): Point(abs,ord)
{
	Point::Point(abs,ord);
}

Pointa::Pointa() : Point()
{
}

unsigned short Pointa::rho() const
{
	return x;
}
