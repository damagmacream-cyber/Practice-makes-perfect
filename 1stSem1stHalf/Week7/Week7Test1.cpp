#include <iostream>
#include<fstream>

int main (){
	int num=123400, reverse=0, temp, count, digit;
	temp = num;
	while(temp>0){
		reverse*=10;
		digit = temp%10;
		reverse+=digit;
		temp/=10;
		count++;
	}
	temp = reverse;
	while(count>0){
		digit = temp%10;
		temp/=10;
		std::cout<<"digit: "<<digit<<"\n";
		count--;
	}
	return 0;
}
