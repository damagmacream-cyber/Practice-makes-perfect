#include <iostream>
using namespace std;

int main() {
	int x = 25;
	int *ptr = nullptr;
	
	ptr = &x;
	cout << "The value in x is " << x << endl;
	cout << "The value pointed by ptr is " << *ptr << endl;
	return 0;
}
