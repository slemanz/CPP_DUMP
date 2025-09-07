/*
    Description: Create a program that reads in 2 characters and 2 integers. The
    program should check to see if either of the characters' match either of the
    integers (you can compare char and int and c++ will compare the decimal
    values.  If this confuses you look at the ascii table for reference). If
    anything matches, then print out the characters that match. (Follow the
    input/output format)
*/
#include <iostream>

using namespace std;

int main(void)
{
    char c1;
    char c2;
    int i1;
    int i2;

    cout << "Enter 2 characters followed by 2 ints: " << endl;
    cin >> c1 >> c2 >> i1 >> i2;

    if(c1 == i1)
    {
        cout << c1 << " has a decimal value matching " << i1 << endl;
    }

    if(c1 == i2)
    {
        cout << c1 << " has a decimal value matching " << i2 << endl;
    }

    if(c2 == i1)
    {
        cout << c2 << " has a decimal value matching " << i1 << endl;
    }

    if(c2 == i2)
    {
        cout << c2 << " has a decimal value matching " << i2 << endl;
    }else if(c1 != i1 && c1 != i2 && c2 != i1 && c2 != i2)
    {
        cout << "There are no matching characters and intengers" << endl;
    }

    return 0;
}