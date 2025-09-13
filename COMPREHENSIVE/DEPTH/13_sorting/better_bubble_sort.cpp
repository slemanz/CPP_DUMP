#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> myVect;
    int myInt;
    int temp;
    bool had_swaps = false;

    for(int i = 0; i < 5; i++)
    {
        cout << "Enter a number: ";
        cin >> myInt;
        myVect.push_back(myInt);
    }

    for(int i = 0; i < myVect.size(); i++)
    {
        had_swaps = false;
        for(int j = 0; j < (myVect.size()-1-i); j++)
        {
            if(myVect[j] > myVect[j+1])
            {
                temp = myVect[j];
                myVect[j] = myVect[j+1];
                myVect[j+1] = temp;
                had_swaps = true;
            }
        }

        if(!had_swaps)
        {
            break;
        }
    }

    for(int i = 0; i < myVect.size(); i++)
    {
        cout << myVect[i] << " ";
    }
    cout << endl;


    return 0;
}