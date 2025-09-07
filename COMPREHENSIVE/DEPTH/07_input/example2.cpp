#include <iostream>

using namespace std;

int main(void)
{
    string password = "safepass";
    string input;

    cout << "What's the password? ";

    cout << "Enter your name: ";

    getline(cin, input);
    if(input != password)
    {
        if(input.length() < password.length())
        {
            cout << "Too short" << endl;
        }else if(input.length() > password.length())
        {
            cout << "Too long" << endl;
        }else
        {
            cout << "Correct length, but wrong password" << endl;
        }
    }else
    {
        cout << "YOU GUESSED IT!" << endl;
    }


    return 0;
}