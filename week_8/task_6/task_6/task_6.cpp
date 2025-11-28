// task_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {0,0,0};

    cout << "Before the recapacity" << endl;

    cout << v.size() << endl;
    cout << v.capacity() << endl;

    

    v.resize(6, 5);

  
    cout << "After the recapacity" << endl;

    cout << v.size() << endl;
    cout << v.capacity() << endl;

    cout << "---------------------------------------" << endl;

    for (int i = 0; i < v.size(); i++) {
        int x = v[i];

        cout << x << endl;
    }
}
