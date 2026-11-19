#include <iostream>
using namespace std;

int main () {
	string name;
	string city;
	
	cout << "Please enter your full name: ";
	getline(cin, name);
	cout << "Enter the city you live: ";
	getline(cin, city);
	
	cout << "Hello, " << name << endl;
	cout << "You live in " << city << endl;
	return 0;
}
