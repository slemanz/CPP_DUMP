#include <iostream>

using namespace std;

void myFunction(int *pointerVar)
{
    *pointerVar = 20;
}

int main(void)
{
    int myInt = 8;
    int *myDynamicPointer = new int;

    cout << myInt << endl;
    
    myFunction(&myInt);
    myFunction(myDynamicPointer);

    cout << myInt << endl;
    cout << *myDynamicPointer << endl;

    delete myDynamicPointer;

    return 0;
}