// task_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int arr[5] = { 12,7,9,21,13 };

    vector<int> v(arr, arr + 5);

    v.pop_back();
    v.push_back(15);

    cout << "Vector elements:" << endl;

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    cout << "Total size: " << v.size() << endl;

    return 0;
}

