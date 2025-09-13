/*
    Make a program that takes in 5 integers from the user, reads them into an
    array or vector and then sorts the numbers in that container before printing
    them out.

    Tips:
    Swapping positions of the array/vector will be necessary... But how do we do that?
*/
#include <iostream>

int main(void)
{
    const int SIZE = 5;
    int myArr[SIZE];

    for(int i = 0; i < SIZE; i++)
    {
        std::cout << "Enter a number: ";
        std::cin >> myArr[i];
    }

    for(int i = 0; i < SIZE; i++)
    {
        int smaller = myArr[i];

        for(int j = i; j < SIZE; j++)
        {
            if(myArr[j] < smaller)
            {
                smaller = myArr[j];
                myArr[j] = myArr[i];
                myArr[i] = smaller;
            }
        }
    }


    for(int i = 0; i < SIZE; i++)
    {
        std::cout << myArr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}