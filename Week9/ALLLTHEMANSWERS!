/*
Q1
Is the following a function header or a function call?
calcTotal();
A1
Call
Q2
Is the following a function header or a function call?
void showResults()
A2
Header
Q3
What will the output of the following program be if the user enters 10?
#include <iostream>
using namespace std;
void func1()
{ 
    cout << "Able was I\n";
}
void func2()
{ 
    cout << "I saw Elba\n";
}
int main()
{
    int input;
    cout << "Enter a number: ";
    cin >> input;
    if (input < 10) 
    {
        func1();
        func2();
    }
    else 
    {
        func2();
        func1();
    }
    return 0;
}
A3
I saw Elba
Able Was I

Q4
The following program skeleton determines whether a person qualifies for a credit card. To qualify, the person
must have worked on his or her current job for at least two years and make at least $17,000 per year. Finish
the program by writing the function prototype and definitions of the functions qualify and noQualify.
The function qualify should explain that the applicant qualifies for the card and that the annual interest
rate is 12%. The function noQualify should explain that the applicant does not qualify for the card and give
a general explanation why.
#include <iostream>
using namespace std;
// You must write definitions for the two functions qualify and noQualify.
int main() 
{
    double salary;
    int years;
    cout << "This program will determine if you qualify\n";
    cout << "for our credit card.\n";
    cout << "What is your annual salary? ";
    cin >> salary;
    cout << "How many years have you worked at your ";
    cout << "current job? "; cin >> years;
    if (salary >= 17000.0 && years >= 2)
        qualify();  
    else
        noQualify();
    return 0;
}
A4

void qualify(){
    std::cout<<"Congrats bro! You qualified for our credit card's annual interest rate of 12%!\n"
}
void noQualify(){
    std::cout<<"Congrats broke guy! You do not qualify for our credit card's annual interest rate of 12%!\n"
}
Q5
Indicate which of the following is the function prototype, the function header, and the function call:
void showNum(double num)
void showNum(double);
showNum(45.67);

A5
function header, prototype and call in that order

Q7
Define the function prototype for the timesTen function in Question 6.

A7
void timesTen(int);

Q8
What is the output of the following program?
#include <iostream>
using namespace std;
void showDouble(int); // Function prototype
int main() {
int num;
for (num = 0; num < 10; num++)
showDouble(num);
return 0;
}
// Definition of function showDouble.
void showDouble(int value) {
cout << value << "\t" << (value * 2) << endl;
}

A8
1	2
2	4
3	6
4	8
5	10
6	12
7	14
8	16
9	18
10	20

Q9
#include <iostream>
using namespace std;
void func1(double, int); // Function prototype

int main()
{
	int x = 0; double y = 1.5;
	cout << x << " " << y << endl;
	func1(y, x);
	cout << x << " " << y << endl;
	return 0;
}

void func1(double a, int b)
{ 
	cout << a << " " << b << endl;
	a = 0.0;
	b = 10;
	cout << a << " " << b << endl;
}

A9
0 1.5
0 1.5
0.0 10
0 1.5

Q10
The following program skeleton asks for the number of hours you’ve worked and your hourly pay rate.
It then calculates and displays your wages. Describe function definition showDollars, that output of
the wages.
#include <iostream>
using namespace std;
void showDollars(double); // Function prototype
int main() 
{
	double payRate, hoursWorked, wages;
	cout << "How many hours have you worked? ";
	cin >> hoursWorked;
	cout << "What is your hourly pay rate? ";
	cin >> payRate;
	wages = hoursWorked * payRate;
	showDollars(wages);
	return 0;
}
// You must write the definition of the function showDollars
// here. It should take one parameter of the type double.
// The function should display the message "Your wages are RM"
// followed by the value of the parameter. It should be displayed
// with 2 places of precision after the decimal point, in fixed
// notation, and the decimal point should always display.
A10
void showDollars(double waga)
{
	std::cout<<fixed<<setprecision(2)<<"Your wages are RM"<<waga<<"\n";
}

Q11
How many return values may a function have?
A11
Only one

Q12
Demonstrate a header for a function named distance. The function should return a double and have
two double parameters: rate and time.
A12
double distance(double rate, double time)

Q13
Demonstrate a header for a function named days. The function should return an int and have three
int parameters: years, months, and weeks.
A13
int days(int years, int months, int weeks)

Q14
Demonstrate a header for a function named getKey. The function should return a char and use no
parameters.
A14
char getKey()

Q15
Demonstrate a header for a function named lightYears. The function should return a long and have
one long parameter: miles.
A15
long int lightYears(long int miles)

Q16
Coin Toss - Write a function named coinToss that simulates the tossing of a coin. When you call the
function, it should generate a random number in the range of 1 through 2. If the random number is 1,
the function should display “heads.” If the random number is 2, the function should display “tails.”
Demonstrate the function in a program that asks the user how many times the coin should be tossed
and then simulates the tossing of the coin that number of times.

A16
void coinToss(int timesTossed)
{
	int coinTossed; 
	for(int i = 0; i<timesTossed;i++)
	{
		coinTossed = rand()%2;
		if(coinTossed == 1)
		{
			std::cout<<"heads.\n";
		}
		else
		{
			std::cout<<"tails\n";
		}
	}
}

Q17
Celsius Temperature Table - The formula for converting a temperature from Fahrenheit to Celsius is
C = 5/9*(F-32)
where F is the Fahrenheit temperature and C is the Celsius temperature. Demonstrate a function named
celsius that accepts a Fahrenheit temperature as an argument. The function should return the
temperature, converted to Celsius.

A17
double celsius(double fah){
	return 5.0/9.0*(fah-32);
}

Q18
Rectangle Area: Write a program that will ask the user to enter the width and length of a rectangle and
then display the rectangle’s area. The program calls the following functions:
• getLength – This function should ask the user to enter the rectangle’s length and then return that
value as a double.
• getWidth – This function should ask the user to enter the rectangle’s width and then return that
value as a double.
• getArea – This function should accept the rectangle’s length and width as arguments and return
the rectangle’s area. The area is calculated by multiplying the length by the width.
• displayData – This function should accept the rectangle’s length, width, and area as arguments
and display them in an appropriate message on the screen.

A18
double getLength()
{
	double len;
	std::cout<<"Please enter the length of a rectangle: ";
	std::cin>>len;
	return len;
}
double getWidth()
{
	double wid;
	std::cout<<"Please enter the width of a rectangle: ";
	std::cin>>wid;
	return wid;
}
double getArea(double widt, double leng)
{
	return leng*widt;
}
void displayData(double lengt,double wdth,double are)
{
	std::cout<<"Length of a rectangle: "<<lengt;
	std::cout<<"Width of a rectangle: "<<wdth;
	std::cout<<"Area of a rectangle: "<<are;
}
*/


#include <iostream>

void timesTen(int number){
	std::cout<<number*10;
}

int main (){
	int num;
	std::cout<<"Enter a number: ";
	std::cin>>num;
	timesTen(num);

}