#include <iostream>

using namespace std;

int main(void)
{
    int lineLength = 4;
    char toppings[3] = {'B', 'M', 'V'};

    for(int person = 0; person < lineLength; person++)
    {
        for(int toppingPosition = 0; toppingPosition < 3; toppingPosition++)
        {
            cout << "Person " << person << " chose topping " << toppings[toppingPosition] << ", ";
        }
        cout << "\nPerson " << person << " paid" << endl;
    }

    return 0;
}