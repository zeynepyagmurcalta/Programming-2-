// task_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = { 85,90,95,95 };
    bool found = false;

    for (int i = 0; i < v.size()-1; i++) {
        int x = v[i];

        if (v[i] == v[i + 1]) {
            cout << "the vector has 2 elements :" << v[i] << endl;
            found = true;
        }

         }
    if (!found) {
        cout << "there are no elements equal" << endl;

    }

    return 0;
}

