#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// ADT for employees
struct Employee{
    int id;
    string name;
    string jobTitle;
};

// ADT for buildings
struct Building{
    int buildingNumber;
    int numEmployees;
    vector<Employee*> employees;
};

int main(void)
{
    int numBuildings;
    vector<Building*> buildings; // cointainer of building pointers

    cout << "Enter num Buildings: ";
    cin >> numBuildings;

    for(int i = 0; i < numBuildings; i++)
    {
        Building *b = new Building;
        b->buildingNumber = i;
        cout << "Enter number of employees for building " << i << ": ";
        cin >> b->numEmployees;

        for(int j = 0; j < b->numEmployees; j++)
        {
            Employee *e = new Employee;
            e->id = j;
            cout << "Employee " << j << " Name: ";
            cin >> e->name;
            cout << "Employee " << j << " Job title: ";
            cin >> e->jobTitle;

            b->employees.push_back(e);
            cout << endl;
        }
        buildings.push_back(b);
    }

    // print out all employees for each building
    for(int i = 0; i < buildings.size(); i++)
    {
        cout << "Employee list for building #" << buildings[i]->buildingNumber << endl;
        for(int j = 0; j <buildings[i]->employees.size(); j++)
        {
            cout << "\tid: " << " " << buildings[i]->employees[j]->id << endl;
            cout << "\tname: " << " " << buildings[i]->employees[j]->name << endl;
            cout << "\tjob title: " << " " << buildings[i]->employees[j]->jobTitle << endl;
        }
        cout << "\n\n" << endl;
    }

    return 0;
}