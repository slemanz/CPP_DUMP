#include <iostream>

using namespace std;

void myFunction(int *pointerVar)
{
    *pointerVar = 20;
}

int *myOtherFunction(void)
{
    int *localVar = new int(5);
    return localVar;
}

int main(void)
{
    int *myPointer = myOtherFunction();

    cout << *myPointer << endl;
    *myPointer = 540;
    cout << *myPointer << endl;
    delete myPointer;

    return 0;
}