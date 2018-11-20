#include "example4_04_Circle.h"

double Circle::Area()
{
	double a = Getradius();
	return PI * Radius*Radius;
}

double Circle::Circumference()
{
	return 2 * PI*Radius;
}

double Circle::Getradius()const
{
	return Radius;
}