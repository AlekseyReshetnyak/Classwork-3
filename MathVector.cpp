#include "Figures.h"

MathVector MathVector::sum(MathVector a, MathVector b)
{
	MathVector c = { b.x + a.x, b.y + a.y, b.z + a.z, b.t + a.t };
	return c;
}

MathVector MathVector::minus(MathVector a, MathVector b)
{
	MathVector c = { b.x - a.x, b.y - a.y, b.z - a.z, b.t - a.t };
	return c;
}

MathVector MathVector::multiply(MathVector b, double a)
{
	MathVector c = { b.x * a, b.y * a, b.z * a, b.t * a };
	return c;
}

double MathVector::scalarmultiply(MathVector a, MathVector b)
{
	double multiply = b.x * a.x + b.y * a.y + b.z * a.z + b.t * a.t;
	return multiply;
}

double MathVector::angle(MathVector a, MathVector b)
{
	double answ = acos(scalarmultiply(a, b) / (a.length() * b.length())) * 180 / PI;
	return answ;
}

double MathVector::length()
{
	double a = sqrt(x*x + y*y + z*z + t*t);
	return a;
}
