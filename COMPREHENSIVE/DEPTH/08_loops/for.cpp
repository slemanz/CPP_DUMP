/*
    DESCRIPTION: make a program that takes in 2 integers from the user, and prints
    out the result of the first number raised to the power of the second number (the
    second number is the exponent). Do this by using a for loop.
*/
#include <iostream>

using namespace std;


int main(void)
{
    int i1;
    int i2;
    int result;

    cout << "enter a whole number: ";
    cin >> i1;

    cout << "enter an expoent: ";
    cin >> i2;

    result = i1;
    for(int i =1; i < i2; i++)
    {
        result *= i1;
    }

    cout << i1 << "^" << i2 << " = " << result << endl;

    return 0;
}