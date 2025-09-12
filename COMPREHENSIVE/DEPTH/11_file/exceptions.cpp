#include <iostream>

using namespace std;

double ageDivByOtherAge(double age1, double age2);

int main(int argc, char* argv[])
{
    double age1 = 0;
    double age2 = 0;

    cout << "Enter age 1:";
    cin >> age1;

    cout << "Enter age 2:";
    cin >> age2;
    
    try{
        double result = ageDivByOtherAge(age1, age2);
        cout << "age1 divided by age2 = " << result << endl;
    }
    catch(const char* message)
    {
        cout << message << endl;
    }

    return 0;
}

double ageDivByOtherAge(double age1, double age2)
{   
    if(age2 == 0)
        throw "Can't divide by 0";
    else if(age1 < 0 || age2 < 0 )
        throw "People can't have negative ages";
    else if(age1 > 170 || age2 > 170 )
        throw "Way too old!";

    return (age1/age2);
}