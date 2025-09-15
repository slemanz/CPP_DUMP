/* 
    Description: Make a program asks a user for their name, age and blood type.
    This information should be stored in a "patient" struct that has the
    appropriate member variables. (Remember that you can access these variables
    by patient.<variableName> even for storing input into them)
*/
#include <iostream>

using namespace std;

struct Patient{
    string name;
    int age;
    string bloodType;
};

int main(void)
{
    Patient p;

    cout << "Enter name, age, blood type (A, B, O, AB): ";
    cin >> p.name >> p.age >> p.bloodType;

    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Blood type: " << p.bloodType << endl;

    return 0;
}