#include "Figures.h"

void Circle::length()
{
	double L = 2 * 3.14 * rad;
	std::cout << "L = " << L << std::endl;
}

void Circle::square()
{
	double S = 3.14 * pow(rad, 2);
	std::cout << "S = " << S << std::endl;
}

int Vector_cplus::size()
{
	int size = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] > -6.27743 * pow(10, 66)) 
			size += 1;
	return size;
	//cout << fixed << setprecision(9) << arr[i];
}

void Vector_cplus::resize(int new_size, double new_double)
{
	double* new_arr = new double[n];
	for (int i = 0; i < n; i++)
		new_arr[i] = arr[i];
	int previous_size = n;
	n = new_size;
	delete[] arr;
	arr = new double[n];
	if (previous_size < new_size) {
		for (int i = 0; i < previous_size; i++)
			arr[i] = new_arr[i];
		for (int i = previous_size; i < n; i++)
			arr[i] = new_double;
	}
	else {
		for (int i = 0; i < n; i++)
			arr[i] = new_arr[i];
	}
	delete[] new_arr;

	/*
	double * new_arr = содать 15
	перезапись
	delete[]arr;
	arr = new_arr;
	*/
}

void Vector_cplus::push_back(double new_number)
{
	z++;
	double* new_arr = new double[n];
	for (int i = 0; i < n; i++)
		new_arr[i] = arr[i];
	int previous_size = n;
	n = n + ceil(n / ceil(n / 10));
	delete[] arr;
	arr = new double[n];
	for (int i = 0; i < previous_size; i++)
		arr[i] = new_arr[i];
	arr[previous_size] = new_number;
}

int Vector_cplus::capacity()
{
	return n;
}
