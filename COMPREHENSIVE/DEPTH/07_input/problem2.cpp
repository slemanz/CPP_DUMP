/*
    Description: Make a program that reads in 3 characters into an array. This
    program should have a hard-coded string password variable that you create
    (the length of the password should be 3). Once you have read all 3
    characters from the user input into each position of the array, compare each
    one of the characters in the array to the string (Does each character in the
    array at a given position match the character in the string at the same
    position?). If there is a match that print out to the console that there was
    a match as well as the password.
 */
#include <iostream>

using namespace std;

int main(void)
{
    char arr[3];
    string password = "one";

    cout << "Enter the 3 letter password: ";
    cin >> arr[0] >> arr[1] >> arr[2];

    if(arr[0] == password[0] && arr[1] == password[1] && arr[2] == password[2])
    {
        cout << "You guessed the password. Password = " << password << endl;
    }else
    {
        cout << "Wrong guess" << endl;
    }

    return 0;
}