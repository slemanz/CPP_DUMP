#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> myVect;
    int myInt;
    int temp;

    int insertion_item;
    int sorted_position;

    for(int i = 0; i < 5; i++)
    {
        cout << "Enter a number: ";
        cin >> myInt;
        myVect.push_back(myInt);
    }

    // Insertion sort
    for(int i = 0; i < myVect.size(); i++)
    {
        // set the item to be inserted into sorted area
        insertion_item = myVect[i];

        // set the right most position of sorted area
        sorted_position = i - 1;

        while(sorted_position >= 0 && myVect[sorted_position] > insertion_item)
        {
            //swap
            temp = myVect[sorted_position];
            myVect[sorted_position] = myVect[sorted_position+1];
            myVect[sorted_position+1] = temp;

            // move our position one to the left inside sorted area
            sorted_position--;
        }
    }

    // print out
    for(int i = 0; i < myVect.size(); i++)
    {
        cout << myVect[i] << " ";
    }
    cout << endl;


    return 0;
}