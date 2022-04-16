#ifndef FIGURES
#define FIGURES

#include <iostream>
#include <cmath>

const double PI = 3.14159265;
const int n = 4;

struct Circle {
	double rad;

	void length();
	void square();
};

struct Vector_cplus {
	unsigned z = 0;

	int size();
	void resize(int, double);
	void push_back(double);
	int capacity();
	/*double getEl(int);*/

private:
	double* arr;
	int n;
};

struct MathVector {
	double x;
	double y;
	double z;
	double t;

	MathVector sum(MathVector, MathVector);
	MathVector minus(MathVector, MathVector);
	MathVector multiply(MathVector, double);
	double scalarmultiply(MathVector, MathVector);
	double angle(MathVector, MathVector);
	double length();
};
#endif 
