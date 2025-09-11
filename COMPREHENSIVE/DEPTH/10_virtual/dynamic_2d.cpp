#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int tablesize;
    cin >> tablesize;
    int **multTable = new int *[tablesize];

    for(int i = 0; i < tablesize; i++)
    {
        multTable[i] = new int[tablesize];
    }

    for(int r = 0; r < tablesize; r++)
    {
        for(int c = 0; c < tablesize; c++)
        {
            multTable[r][c] = r*c;
        }
    }

    for(int r = 0; r < tablesize; r++)
    {
        for(int c = 0; c < tablesize; c++)
        {
            cout << setw(3) << multTable[r][c] << " ";
        }
        cout << endl;
    }
    
    return 0;
}