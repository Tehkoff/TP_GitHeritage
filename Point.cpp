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
		x = newAbs;
	else 
		x = 0;

	//verification y
	if (newOrd >= 0 && newOrd <= 480) 
		x = newOrd;
	else 
		y = 0;

}

void Point::operation() {
	// TODO - implement Point::operation
	throw "Not yet implemented";
}

void Point::show() {
	// TODO - implement Point::show
	throw "Not yet implemented";
}


