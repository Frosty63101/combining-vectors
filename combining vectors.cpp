#include <iostream>

#include <cmath>

#include <stdlib.h>

#include <cstdlib>

#include <cstring>

#include <string>

#include <sstream>

#define PI 3.14159265

int main()
{

	double m1;
	double m2;
	double m3;
	double a;
	int r;

	do {

		std::cout << "enter magnitude 1 or adjacent";
		std::cin >> m1;

		std::cout << "enter magnitude 2 or opposite";
		std::cin >> m2;

		m3 = sqrt((m1 * m1) + (m2 * m2));
		a = atan(m2 / m1);

		std::cout << "angle = " << a << "\n" <<
			"magnitude = " << m3;

		std::cout << "do you want to repeat 1/0";
		std::cin >> r;
	} while (r = 1);
	system("cls");

}