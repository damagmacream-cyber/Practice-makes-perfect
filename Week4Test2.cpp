//author: amiruddin
//purpose: to limit digits past decimal
#include <iostream>
#include <iomanip>
using std::endl;
using std::cout;
using std::string;
using std::fixed;
using std::showpoint;
using std::setprecision;

int main() {
	float value1 = 1000;
	float value2 = 3000;
	float value3 = 500;
	float avg1 = value1/30;
	float avg2 = value2/31;
	float avg3 = value3/15;
	float avg4 = (value1+value2+value3)/3;

	cout << setprecision(0) << "Average of 1st value is: " << avg1 << endl;
	cout << setprecision(6) << "Average of 2nd value is: " << avg2 << endl;
	cout << setprecision(6) << "Average of 3rd value is: " << avg3 << endl;
	cout << setprecision(6) << "Average of the 3 months is: " << avg4 << endl;
	
	string name = "Paddington";
	string predicate = "went to school by taxi.";
	string conc;
	conc  = name +" "+predicate;
	cout << conc << endl;
	double PI = 3.14159, SLICE = 14.125;
	double diameter = 25.0;
	double radius = diameter/2;
	double area = PI*radius*radius;
	double slices = area/SLICE;
	cout << fixed << showpoint << setprecision(1);
	cout << "A " << diameter << " inch pizza contains about " << slices << " slices";
	return 0;
}
