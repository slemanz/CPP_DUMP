#include <iostream>

using namespace std;

int main(void)
{
    /* Make a program that takes input from the user as an integer
       repeatedly and stops when a specific sum has been reached */
    int sum = 60;
    int number;
    int total = 0;

    do{
        cout << "Enter a number or type 0 to quit: ";
        cin >> number;
        total += number;
        if(number == 0)
        {
            return 0;
        }
    }while(total < sum);


    return 0;
}