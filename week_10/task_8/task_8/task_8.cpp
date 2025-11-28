// task_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<vector<int>> matrix(3, vector<int>(4, 0));

    cout << "Initial matrix:" << endl;

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j]<<endl;
        }
    }

    matrix[1][2] = 99;

    cout << "Updated matrix" << endl;

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j]<<endl;
        }
    }
}

