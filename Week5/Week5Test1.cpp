/* Author: amiruddin
Week 5
Practice looping and selection
*/
#include <iostream>

int main () {
	/* sum of all numbers to entered number.
	int num1, sum, try;
	std::cout << "Please enter a positive integer: " << std::endl;
	while(num1 < 1) {
		if(try%2 = 0){
			std::cout << "Please follow the instructions buddy: "
			std::cin >> num1;
		} else{
			std::cout << "Please follow the instructions champ: "
			std::cin >> num1;
		}
		++try;
	}
	
	for(int i = 1; i<=num1; i++) {
		sum += i;
		std::cout << sum << std::endl;
	}
	std::cout << "Sum of all positive ints from 0 to " << num1 << " is: " << sum << std::endl;

	*/
	/* prints all ascii
	for(int ascii = 0; ascii<=127; ascii++) {
		std::cout<<static_cast<char>(ascii)<<" ";
		if(ascii%16 == 0)
			std::cout << std::endl;		
	}
	*/
	/* multiplication table to 10 for input number
	int num1;
	std::cout << "Enter a int: ";
	std::cin >> num1;
	std::cout<< "calculation\tresult"<<std::endl;
	for(int i = 1; i<=10; i++){
		std::cout<<num1<<" x "<<i<<"\t\t"<<num1*i<< std::endl;
	}
	*/
	/*conversion table degrees to rad
	const double PI = 3.141593;
	std::cout<< "Degrees\tRadians"<<std::endl;
	for(int i = 0; i<=9; i++) {
		std::cout<<i*10<<"\t"<<static_cast<double>(i)/18*PI<<std::endl;
	}
	*/
	/* cal burn tables
	double calBurn = 3.6;
	std::cout<< "Time\tCalories Burn"<<std::endl;
	for(int i=1; i<+6; i++) {
		std::cout << i*5 <<"\t"<< i*5*calBurn<<std::endl;
	}
	*/
	/*
	int spd, hrs, dist;
	std::cout<< "Enter hours and speed: ";
	std::cin>>hrs>>spd;
	std::cout<<"Hour\tDistance"<<std::endl;
	for(int i=1; i<=hrs; i++) {
		std::cout<<i<<"\t"<<i*spd<<std::endl;
	}
	*/
	char a,b;
	int num1,num2,row,clm;
	std::cout<<"Enter characters, the number of times it is to be repeated and row and column: ";
	std::cin<<a<<b<<num1<<num2<<row<<clm;
	for(int i; i<num1; i++) {
		for(int 1; i<num2; i++) {
			
		}
	}
	return 0;
}
