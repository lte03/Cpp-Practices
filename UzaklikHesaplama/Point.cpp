#include "Point.h"

Point::Point(float xVal, float yVal) : x(xVal), y(yVal) {}

float Point::getX() const {
	return x;
}

float Point::getY() const {
	return y;
}

void Point::setX(float xVal) {
	x = xVal;
}

void Point::setY(float yVal) {
	y = yVal;
}
