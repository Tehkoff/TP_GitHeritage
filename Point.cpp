#include "Point.h"

Point::Point(long abs, long ord) {
	initialise(abs, ord);
}

Point::Point()
{
	// mettre les coordoonnées
	x = 640 / 2;
	y = 480 / 2;
}

void Point::dep(long deltaAbs, long deltaOrd)
{
	
	if (deltaAbs < 0) 
		x = 0;
	else if(deltaAbs > 640)
		x = 640;
	else 
		x = (unsigned short)deltaAbs;

	if (deltaOrd < 0) 
		y = 0;
	else if(deltaOrd > 480) 
		y = 480;
	else
		y = (unsigned short)deltaOrd;
	
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

void Point::show() const
{
	cout << '(' << x << ',' << y << ')';
}


