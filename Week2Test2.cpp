#include <iostream>
using std::cout;
using std::cin;

int main () {
	
	char x = 100;
	cout << x << std::endl;
	
	int correct = 7;
	int questions = 11;
	double score = correct/(double)questions *100;
	cout << score << std::endl;
	
	std::string name;
	cout << "Whats your full name?" << std::endl;
	std::getline(cin >> std::ws,name);
	cout << "Hello " << name << "!" << std::endl;
	
	double x=4, y=5, z;
	z = std::max(x,y);
	z = std::min(x,y);
	z = pow(x,y);
	z = sqrt(x,y);
	z = abs(-y);
	z = round(3.5);
	z = ceil(3.1);
	z = floor(3.99);
	
	
	return 0;
}
