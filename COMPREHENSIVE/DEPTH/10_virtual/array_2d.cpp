#include <iostream>

using namespace std;

int main(void)
{
    int myTable[3][3];

    for(int r = 0; r < 3; r++)
    {
        for(int c = 0; c < 3; c++)
        {
            myTable[r][c] = r*c;
        }
    }

    for(int r = 0; r < 3; r++)
    {
        for(int c = 0; c < 3; c++)
        {
            cout << myTable[r][c] << " ";
        }
        cout << endl;
    }
}