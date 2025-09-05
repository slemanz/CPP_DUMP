#include <iostream>

using namespace std;

int main()
{
    // make some boolean variables
    bool b1 = true;
    bool b2 = false;

    // make some integer value
    int i1 = 5;
    int i2 = 10;

    if(i1 == 5)
    {
        cout << "i1 == 5" << endl;
    }

    if(i2 != 5)
    {
        cout << "i2 != 5" << endl;
    }

    if(b1)
    {
        cout << "b1 is true" << endl;
    }

    if(!b2)
    {
        cout << "b2 is false" << endl;
    }

    if(b1 || b2)
    {
        cout << "  b1 || b2" << endl;
    }

    if(!(b1 && b2))
    {
        cout << "!(b1 && b2)" << endl;
    }

    if(i1 >= i2)
    {
        cout << "i1 greater equal than i2" << endl;
    }else
    {
        cout << "i2 greater than i1" << endl;
    }

    return 0;
}