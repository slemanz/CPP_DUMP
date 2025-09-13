#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> myVect;
    int myInt;
    int temp;

    for(int i = 0; i < 5; i++)
    {
        cout << "Enter a number: ";
        cin >> myInt;
        myVect.push_back(myInt);
    }

    for(int i = 0; i < myVect.size(); i++)
    {
        for(int j = 0; j < myVect.size()-1; j++)
        {
            if(myVect[j] > myVect[j+1])
            {
                temp = myVect[j];
                myVect[j] = myVect[j+1];
                myVect[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < myVect.size(); i++)
    {
        cout << myVect[i] << " ";
    }
    cout << endl;


    return 0;
}