#include <iostream>
#include <vector>
#include <cctype>
#include <fstream>

using namespace std;

int file_getLineCount(string file);
void insertion_sort(vector<string> &names, vector<int> &ages);
void insertion_sort(vector<string> &names, vector<int> &ages);

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
    insertion_sort(vectNames, vectAges);

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

void insertion_sort(vector<string> &names, vector<int> &ages)
{
    string insertion_item;
    int sorted_position;

    string tempStr;
    int tempInt;

    for(int i = 0; i < (names.size()); i++)
    {
        insertion_item = names[i];
        sorted_position = i - 1;

        while(sorted_position >= 0 && names[sorted_position] > insertion_item)
        {
            // swap
            tempStr = names[sorted_position];
            names[sorted_position] = names[sorted_position + 1];
            names[sorted_position+1] = tempStr;

            tempInt = ages[sorted_position];
            ages[sorted_position] = ages[sorted_position + 1];
            ages[sorted_position+1] = tempInt;

            // move our position one to the left inside sorted area
            sorted_position--;
        }
    }
}
