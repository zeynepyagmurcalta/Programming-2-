// task_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> values(3, 0);

    cout << "Inýtial size:" << values.size() << endl;
    cout << "Initial capacity:" << values.capacity() << endl;

    cout << "Element before the resize:" << endl;

    for (int i = 0; i < values.size(); i++) {
        cout << values[i] << endl;
    }

    values.resize(6, 5);

    cout << "Element after the resize:" << endl;

    for (int i = 0; i < values.size(); i++) {
        cout << values[i] << endl;
    }

    cout << "New size: " << values.size() << endl;
    cout << "New capacity: " << values.capacity() << endl;

    return 0;
}

