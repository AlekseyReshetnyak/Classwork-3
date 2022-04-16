#include "Figures.h"

int main() {
	MathVector a = { 1, 2 ,3, 0 }, b = { -1,-2,-3,-4 }, c;
	c = c.sum(a, b);
	std::cout << c.x << " " << c.y << " " << c.z << " " << c.t << std::endl;
	std::cout << a.angle(a, b) << std::endl;

	Circle krug = { 15 };
	krug.length();
}