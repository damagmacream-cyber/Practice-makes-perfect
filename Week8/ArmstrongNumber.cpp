// TODO: Determine if a number is armstrong's number
// Armstong's number is a number equal to the sum of its digits raised
// to the power of its orders of magnitude.
// 153 == 1^3+5^3+3^3
// Steps to take
// Find each digit. Raise it to the power. Add em together. Compare
// The program below finds the order of magnitude. Cycles through each digit. 
// digit is powered by oom then added. Then sum is compared.
// num, temp, oom, digit
#include <iostream>

int findOrdersOfMagnitude (int n){
    int temp = n, oom=0;
    while(temp!=0){
        oom++;
        temp/=10;
    }
    return oom;
}

int calcArmstrongNum (int oom, int num){
    int armstrongNum,temp=num;
    while (temp!=0){
        int digit = temp%10;
        int power = 1;
        for(int i=1; i <= oom; i++){
            power *= digit;
        }
        armstrongNum += power;
        temp /=10;
    }
    return armstrongNum;
}

int main() {

    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;
    // Step 1: Do a bit of off camera mining
    int ordersOfMagnitude = findOrdersOfMagnitude(num);
    // Step 2: mine off camera a little more
    int armstrongNumber = calcArmstrongNum(ordersOfMagnitude, num);

    // Step 3: compare
    if (armstrongNumber == num) {
        std::cout << num << " is an Armstrong number" << std::endl;
    } else {
        std::cout << num << " is not an Armstrong number" << std::endl;
    }

    return 0;
}