#include <iostream>
#include <fstream>
#include <string>

// std::string filename()//irrelevant because it became askUser()
// {
//     std::string filenama;
//     std::cout<<"Enter file name before the dot: ";
//     std::cin>>filenama;
//     return filenama;
// }
std::string askUserStr(std::string string)
{
    std::string input;
    std::cout<<"Please enter "<<string<<": ";
    std::getline(std::cin, input);
    return input;
}

int askUserInt(std::string string)
{   
    int input = 0;
    std::string junk;
    std::cout<<"Please enter "<<string<<": ";
    std::cin>>input;
    std::getline(std::cin, junk);
    return input;
}

char askUserChar(std::string string)
{   
    char input = 'n';
    std::string junk;
    std::cout<<"Please enter "<<string<<": ";
    std::cin>>input;
    std::getline(std::cin, junk);
    return input;
}

int main ()
{
    std::ofstream ofile;
    std::ifstream ifile;

    
    
    /*
    Q1 & Q2
    Write a C++ program that asks the user for their name and age, and then stores this
    information into a file named info.txt.
    */
    // A1
    std::string outputFileName = askUserStr("output file name");
    ofile.open(outputFileName.c_str());
    
    std::string name = askUserStr("name");
    int age = askUserInt("age");

    ofile << "Name: " << name << "\n";
    ofile << "Age : " << age << "\n";
        
    ofile.close();

    /*
    Q2
    Write a C++ program that reads and displays the content of info.txt created in
    Question 1.
    */
    //A2
    std::string inputFileName = askUserStr("input file name");
    ifile.open(inputFileName.c_str());

    if(!ifile)
    {
        std::cout<<"File open error";
        return 1;
    }

    std::string line;
    while(std::getline(ifile, line))
    {
        std::cout<<line<<"\n";
    }
    ifile.close();

    /*
    Q3
    Create a file numbers.txt containing a list of integers. Write a program that reads
    the numbers and displays their total.
    */
    //A3
    std::string intlistfilename = askUserStr("output file name for a list of integers").c_str();
    ofile.open(intlistfilename.c_str());

    char sentinelValue = 'y';
    int i = 1;
    while(sentinelValue!='n')
    {
        int num = askUserInt("integer number");
        ofile << i << ". " << num << std::endl;
        sentinelValue = askUserChar("(n/y) if you want to continue adding integers");
        i++;
    }
    ofile.close();

    /*
    Q4
    Given a file input.txt containing integers, write a program that copies only even
    numbers into even.txt.
    */
   ifile.open(intlistfilename.c_str());
   ofile.open("even.txt");
   if(!ifile)
    {
        std::cout<<"File open error";
        return 1;
    }
    int number = 0;
    while(ifile>>number)
    {
        std::cout<<line<<"\n";
    }
    
    return 0;
}