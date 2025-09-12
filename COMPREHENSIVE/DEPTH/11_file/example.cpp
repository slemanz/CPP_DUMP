#include <iostream>
#include <fstream>

int main(void)
{
    int myInt;
    int myInt2;
    int myInt3;

    std::ifstream myStream;
    myStream.open("input.txt");
    myStream >> myInt >> myInt2 >> myInt3;

    std::cout << myInt << myInt2 << myInt3 << std::endl;

    myStream.close();


    return 0;
}