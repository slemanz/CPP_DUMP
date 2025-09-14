#include <iostream>
#include <vector>
#include <cctype>
#include <fstream>

using namespace std;

int file_getLineCount(string file);

void lower(string &s){
    for(char & i : s)
    {
        i = tolower(i);
    }
}

int main(void)
{
    string filename = "input.txt";
    int lineCount = file_getLineCount(filename);

    vector<string> vectNames;
    vector<int> vectAges;

    // get
    ifstream file;
    file.open(filename);
    for(int i = 0; i < lineCount; i++)
    {
        string tempStr;
        int tempInt;
        file >> tempStr >> tempInt;
        vectNames.push_back(tempStr);
        vectAges.push_back(tempInt);
    }

    // lower
    for(int i = 0; i < lineCount; i++)
    {
        lower(vectNames[i]);
    }

    // sort

    for(int i = 0; i < lineCount; i++)
    {
        cout << vectNames[i] << " " << vectAges[i] << endl;
    }

    // search

    return 0;
}

int file_getLineCount(string filename)
{
    int lineCount = 0;

    ifstream file;
    file.open(filename);
    string temp;

    while(getline(file, temp))
    {
        if(!temp.empty()) lineCount++;
    }

    file.close();
    return lineCount;
}
