/*
    DESCRIPTION: Make a program that reads 3 words (strings) from user input.
    The program should then find the sum of the decimal values of each character
    in each string for each string. This means sum must be computed for each of
    the 3 strings. Then you should print out the string that has the biggest sum
    as well as its sum.
*/
#include <iostream>

using namespace std;

int getSum(string word)
{
    int sum = 0;
    for(int i = 0; i < word.length(); i++)
    {
        sum += word[i];
    }
    return sum;
}

int main(void)
{
    string word;
    string largestString;
    int sum;
    int largest = 0;

    for(int i = 0; i < 3; i++)
    {
        cout << "Enter a word and press enter: ";
        cin >> word;
        sum = getSum(word);
        if(sum > largest)
        {
            largest = sum;
            largestString = word;
        }
    }
    cout << "String with largest sum is '" << largestString << "', with a sum of " << largest << endl;

    return 0;
}