#include <iostream>

using namespace std;

int main(void)
{
    char c;
    int i1;
    int i2;
    int i3;
    float f;

    cout << "Enter char float int int: ";

    cin >> c >> f >> i1;
    if(cin.fail())
    {
        cout << "Ops cin failed" << endl;
        cin.clear();
        cin.ignore(1);
    }
    cin >> i2;

    cout << "Char: " << c << " - Float: " << f << " - Int 1: " << i1 << " - Int 2: " << i2 << endl;


    cout << "Enter one more int: ";
    cin >> i3;
    cout << "Last int: " << i3 << endl;



    return 0;
}