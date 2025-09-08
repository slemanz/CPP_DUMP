#include <iostream>

using namespace std;

int main(void)
{
    string password = "password";
    string input;

    cout << "Enter the password or type 'q' to quit: ";
    getline(cin, input);

    if(input != password)
    {
        while(input != password && input != "q")
        {
            cout << "Try again or type 'q' to quit: ";
            getline(cin, input);
        }
    }

    if(input == password)
    {
        cout << "YOU GUESSED IT" << endl;
    }else
    {
        cout << "Thank you, come again!" << endl;
    }


    return 0;
}