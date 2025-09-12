/*
    Make a program that uses command-line-arguments to read a file of integers
    into a Dynamic array. The first line of the file will be an integer that
    states how many numbers are in the file (not including that integer itself).
    Once that is done the program should print out the contents of the array.

    (You should make the input.txt file yourself. The file should contain at
    least 10 numbers)
*/
#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
    if(argc != 2)
    {
        std::cout << "usage: ./run <inputfilename>" << std::endl;
        exit(-1);
    }

    int size;
    int value;
    int position_count = 0;
    std::ifstream myStream;
    myStream.open(argv[1]);
    myStream >> size;
    int *myArr = new int[size];

    while(myStream >> value)
    {
        myArr[position_count++] = value;
    }

    myStream.close();

    for(int i = 0; i < size; i++)
    {
        std::cout << myArr[i] << " ";
    }
    std::cout << std::endl;

    delete [] myArr;

    return 0;
}