// task_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> scores = { 88,67,79,84 };

    cout << "Traditional for loop" << endl;

    for (int i = 0; i < scores.size(); i++) {
        cout << scores[i] << endl;
    }

    cout << "Range-based for loop" << endl;

    for (int value : scores) {
        cout << value << endl;
    }

    return 0;
}

