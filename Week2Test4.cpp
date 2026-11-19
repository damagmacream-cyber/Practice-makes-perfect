#include <iostream>
#include <cmath>

int main () {
	double a,b,c;
	std::cout << "Enter 2 lengths of a right angle triangle's side to determine the hypotenuse.\n";
	std::cin >> a >> b;
	c = sqrt(a*a+b*b);
	std::cout << "The length of the hypotenuse is: " << c;
	return 0;
}
