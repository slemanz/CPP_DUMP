#include <iostream>
#include <fstream>

int main(void)
{
    int myInt;
    int myInt2;
    int myInt3;
    
    std::string myString;

    std::ifstream myInStream;
    std::ofstream myOutStream;

    myInStream.open("input.txt");
    myOutStream.open("input2.txt");

    //myInStream >> myInt >> myInt2 >> myInt3;
    //std::cout << myInt << myInt2 << myInt3 << std::endl;
    //myOutStream << myInt << myInt2 << myInt3 << "\n\n";
    std::getline(myInStream, myString);
    myOutStream << myString << "\n\n";
    std::cout << myString << std::endl;

    myInStream.close();
    myOutStream.close();


    return 0;
}