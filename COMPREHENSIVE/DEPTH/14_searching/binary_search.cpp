#include <iostream>
#include <vector>

using namespace std;

bool binarySearch(vector<int> &v, int num)
{
    int low = 0;
    int high = v.size()-1;
    int middle;

    while(low <= high)
    {
        middle = (low+high)/2;
        if(num > v[middle])
        {
            low = middle + 1;
        }
        else if(num < v[middle])
        {
            high = middle-1;
        }else
        {
            return true;
        }
    }
    return false;
}

int main(void)
{
    vector<int> myVect = {1, 3, 8, 22, 44, 567}; // c++11
    int number;
    cout << "Enter a number to be searched in the vector: ";
    cin >> number;
    if(binarySearch(myVect, number))
    {
        cout << "We found the number " << number << " in the vector!" << endl;
    }else
    {
        cout << "We did not found the number " << number << " in the vector!" << endl;
    }

    return 0;
}