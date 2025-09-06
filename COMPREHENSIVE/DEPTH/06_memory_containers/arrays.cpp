#include <iostream>

int main(void)
{
    std::cout << "Hello Array" << std::endl;

    const int SIZE = 7;

    int myArray[SIZE];

    std::cout << "Initing Array" << std::endl;
    for(int i = 0; i < SIZE; i++)
    {
        myArray[i] = i;
    }

    
    std::cout << "Printing Array:" << std::endl;
    for(int i = 0; i < SIZE; i++)
    {
        std::cout << i << ": " << myArray[i] << std::endl;
        
    }

    int arr[5] = {1, 2, 3, 4};
    std::cout << arr[0] << arr[1] << arr[2] << arr[3] << std::endl;

    return 0;
}