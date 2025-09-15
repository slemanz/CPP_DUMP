/*
    Description: Read in data from a file into a vector of structs.
    File Example: name(string) age(int) weight(float)
    name(string) age(int) weight(float)

    Then print out the vector of structs
*/
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Person{
    string name;
    int age;
    float weight;
};

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        cout << "Usage ./filename <inputfile>" << endl;
        exit(-1);
    }

    ifstream myStream;
    myStream.open(argv[1]);

    vector<Person*> personVect;

    string name;
    int age;
    float weight;

    while(myStream >> name >> age >> weight)
    {
        Person *p = new Person; 
        p->name = name;
        p->age = age;
        p->weight = weight;
        personVect.push_back(p);
    }

    for(int i = 0; i < personVect.size(); i++)
    {
        cout << "name: " <<   personVect[i]->name << endl;
        cout << "age: " <<    personVect[i]->age << endl;
        cout << "weight: " << personVect[i]->weight << endl << endl;

    }

    return 0;
}