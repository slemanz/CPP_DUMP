#include <iostream>
#include <vector>
#include <cctype>
#include <fstream>

using namespace std;

int file_getLineCount(string file);
void insertion_sort(vector<string> &names, vector<int> &ages);
int binary_search(vector<string> &v, string name);

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

    // search
    string name_to_search;
    do{
        cout << "Enter a name to be searched in the database (or type 'quit'): ";
        cin >> name_to_search;
        lower(name_to_search);
        if(name_to_search == "quit") break;

        int search = binary_search(vectNames, name_to_search);
        if( search != -1)
        {
            cout << "The age for " << vectNames[search] << " is " << vectAges[search] << endl;
        }else
        {
            cout << "The name " << name_to_search << " does not exists in database" << endl;
        }

    }while(name_to_search != "quit");

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

int binary_search(vector<string> &v, string name)
{
    int low = 0;
    int high = v.size() - 1;
    int middle;

    while(low <= high)
    {
        middle = (low+high)/2;
        if(name > v[middle])
        {
            low = middle + 1;
        }else if(name < v[middle])
        {
            high = middle - 1;
        }else
        {
            return middle;
        }
    }
    return -1;
}