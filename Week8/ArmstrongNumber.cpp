#include <iostream>

int main(){
    int num = 1234;
    
    // std::cout<<"Enter a number: ";
    // std::cin>>num;

    int reverse=0;
    while (num != 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    std::cout<<reverse;
    return 0;
}