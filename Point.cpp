#include "Point.h"

Point::Point(long abs, long ord) {
	initialise(abs, ord);
}

void Point::dep(long deltaAbs, long deltaOrd) {
	// TODO - implement Point::dep
	throw "Not yet implemented";
}

void Point::initialise(long newAbs, long newOrd) {
	//verification x
	if (newAbs >= 0 && newAbs <= 640)
	{
		x = (unsigned short)newAbs;
	}
	else
	{
		x = 0;
	}

	//verification y
	if (newOrd >= 0 && newOrd <= 480)
	{
		y = (unsigned short)newOrd;
	}
	else
	{
		y = 0;
	}

}

void Point::show() {
	cout << '(' << x << ',' << y << ')';
}


