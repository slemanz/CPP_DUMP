#include <iostream>

using namespace std;

int main(void)
{
    int var; // init in stack
    int *myPointer = &var;
    int *myDynamicPointer = new int;

    cout << "myPointer = " << myPointer << endl;
    cout << "myPointer value = " << *myPointer << endl;
    cout << "myDynamicPointer = " << myDynamicPointer << endl;
    cout << "myDynamicPointer value = " << *myDynamicPointer << endl;

    *myPointer = 5;
    *myDynamicPointer = 7;

    cout << "myPointer value = " << *myPointer << endl;
    cout << "myDynamicPointer value = " << *myDynamicPointer << endl;

    delete myDynamicPointer;

    return 0;
}