#include <iostream>

typedef std::string text_t;
using number_t = int;

namespace wearenumberone {
	number_t x = 10;
}

namespace numbertwo {
	number_t x = 30;
}

int main() {
	using std::cin;
	
	number_t x = 3;
	
	std::cout << "Hello world" << std::endl;
	std::cout << "Whats your name?" << std::endl;
	
	text_t name;
	cin >> name;
	
	std::cout << "Hello " << name << "!" << std::endl;
	
	std::cout << wearenumberone::x << numbertwo::x << x;
	
	return 0;
}
