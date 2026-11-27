#include <iostream>
#include <fstream>
#include <string>

// std::string filename()
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
    return std::stoi(askUserStr(string));
}


int main ()
{
    std::ofstream ofile;
    std::ifstream ifile;

    std::string outputFileName = askUserStr("output file name");
    std::string inputFileName = askUserStr("input file name");

    ofile.open(outputFileName.c_str());
    ifile.open(inputFileName.c_str());

    // int number;

    if(!ifile)
    {
        std::cout<<"File open error";
    }
    
    std::string name = askUserStr("name");
    int age = askUserInt("age");

    ofile << "Name: "<<name<<"\n";
    ofile << "Age : "<<age<<"\n";

    std::string line;

    while(std::getline(ifile, line))
    {
        std::cout<<line<<"\n";
    }

        
    ofile.close();
    ifile.close();
    
    
    return 0;
}