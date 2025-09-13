#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> myVect;

    cout << "myVect size: " << myVect.size() << endl;

    myVect.push_back(3);

    cout << myVect[0] << endl;
    cout << "myVect size: " << myVect.size() << endl;
    myVect.push_back(6);
    myVect.push_back(7);
    myVect.push_back(3);

    cout << "myVect size: " << myVect.size() << endl;
    myVect.pop_back();
    cout << "myVect size after pop: " << myVect.size() << endl;
    cout << myVect.back() << endl;

    myVect.clear();
    cout << "myVect size after clear: " << myVect.size() << endl;

    return 0;
}

