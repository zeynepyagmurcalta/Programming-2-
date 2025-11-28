// task_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

using namespace std;


int main()
{
    int arr[3] = { 1,2,3 };

    vector<int> v = { 1,2,3 };

    v.push_back(4);

    cout << "Vector Elements:" << endl;

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;

    }

   

    return 0;
}
