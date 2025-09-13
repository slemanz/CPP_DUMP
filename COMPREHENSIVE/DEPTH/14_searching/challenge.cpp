/*
    Make a function that takes an array/vector and an integer as an argument.
    the function should return a boolean value based on whether the intenger is
    in the array/vector or not. This function should be part of a program that
    lets the user enter 5 intengers that get read into the array/vector, and
    then asks for 2 more intengers that should be added up for a sum that gets
    sent to the function as number to search for.
*/
#include <iostream>

using namespace std;

bool search_array(int num_to_search, int *array, int len)
{
    for(int i = 0; i < len; i++)
    {
        if(array[i] == num_to_search) return true;
    }
    return false;
}

int main(void)
{   
    const int SIZE = 5;
    int myArr[SIZE];
    
    int myInt;
    int myInt1;
    int myInt2;
    for(int i = 0; i < SIZE; i++)
    {
        cout << "Enter a number: ";
        cin >> myInt;
        myArr[i] = myInt;
    }

    cout << "Enter 2 intengers to be summed: ";
    cin >> myInt1 >> myInt2;
    int result = myInt1 + myInt2;

    cout << myInt1 << "+" << myInt2 << "=" << result << " ";
    if(search_array(result, myArr, SIZE))
    {
        cout << "is in the list";
    }else
    {
        cout << "is NOT in the list";
    }
    cout << endl;


    return 0;
}