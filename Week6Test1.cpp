#include <iostream>
#include <fstream>

int main() {
	/*FILE coding
	float num1,num2,num3;
	
	//outfile coding
	std::ofstream outfile;
	outfile.open("inventory.dat");
	outfile<< "30\n725\n10";	
	std::cout<<"eof bit: "<<outfile.eof()<<std::endl;
	std::cout<<"fail bit: "<<outfile.fail()<<std::endl;
	std::cout<<"bad bit: "<<outfile.bad()<<std::endl;
	std::cout<<"good bit: "<<outfile.good()<<std::endl;
	outfile.close();
	//fstream ofile
	std::fstream ofile;
	ofile.open("ofile.txt", std::ios::out);
	//fstream ofile testing
	std::cout<<"File Status:\n";
	std::cout<<"eof bit: "<<ofile.eof()<<std::endl;
	std::cout<<"fail bit: "<<ofile.fail()<<std::endl;
	std::cout<<"bad bit: "<<ofile.bad()<<std::endl;
	std::cout<<"good bit: "<<ofile.good()<<std::endl;
	ofile.close();
	//infile coding
	std::ifstream infile;
	infile.open("inventory.dat");
	infile>>num1>>num2>>num3;
	std::cout<<"eof bit: "<<infile.eof()<<std::endl;
	std::cout<<"fail bit: "<<infile.fail()<<std::endl;
	std::cout<<"bad bit: "<<infile.bad()<<std::endl;
	std::cout<<"good bit: "<<infile.good()<<std::endl;
	infile.close();
	
	std::cout<<num1<<" "<<num2<<" "<<num3;	
	*/
	
	int number = 3456;
	
	number = abs(number);
	
	int sum = 0, temp = number, count, reversed, digit;
	
	while(temp>0){
		digit = temp%10;
		reversed = reversed*10 + digit;
		temp/=10;
		count++;
		std::cout<<"\ndigit: "<<digit<<"\nreversed: "<<reversed<<"\ntemp: "<<temp;
	}
	temp = reversed;
	while(count>0){
		digit=temp%10;
		std::cout<<digit<<" ";
		sum+=digit;
		temp/=10;
		count--;
	}
	
	return 0;
}


















