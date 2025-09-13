#include <iostream>
#include <vector>

using namespace std;

bool linear_search(vector<int> &v, int n)
{
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == n) return true;
    }
    return false;
}

int main(void)
{
    vector<int> myVect;
    int myInt;
    int num1;
    int num2;

    for(int i = 0; i < 5; i++)
    {
        cout << "Enter a number: ";
        cin >> myInt;
        myVect.push_back(myInt);
    }

    cout << "Enter 2 intengers to be summed: ";
    cin >> num1 >> num2;
    if(linear_search(myVect, num1 + num2))
    {
        cout << num1 << "+" << num2 << "=" << num1+num2 << " is in the list" << endl;
    }else
    {
        cout << num1 << "+" << num2 << "=" << num1+num2 << " is NOT in the list" << endl;
    }
}