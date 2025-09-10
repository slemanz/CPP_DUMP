#include <iostream>

using namespace std;

int main(void)
{
    int size;
    cout << "Size: ";
    cin >>  size;
    int *myArr =  new int[size];

    for(int i = 0; i < size; i++)
    {
        cout << "Enter a number: ";
        cin >> myArr[i];
    }

    for(int i = 0; i < size; i++)
    {
        cout << myArr[i] << ", ";
    }
    cout << endl;

    delete [] myArr;

    return 0;
}