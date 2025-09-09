#include <iostream>

using namespace std;

int calcPower(int whole, int exp)
{
    int result = 1;

    for(int i = 0; i < exp; i++)
    {
        result *= whole;
    }
    return result;
}

int main(void)
{
    int i1;
    int i2;
    cout << "Enter a whole number: ";
    cin >> i1;
    cout << "Enter an exponent: ";
    cin >> i2;

    int answer = calcPower(i1, i2);
    cout << i1 << "^" << i2 << " = " << answer << endl;
    

    return 0;
}
