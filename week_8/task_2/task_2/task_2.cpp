// task_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {88,67,79,84};

    for (int i = 0; i < v.size(); i++) {
        int x = v[i];
        cout << v[i] << endl;
    }
    cout << "-------------------------------------------" << endl;

    for (int x : v) {
        cout << x << " ";
    }


}

