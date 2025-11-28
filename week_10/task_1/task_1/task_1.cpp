// task_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

using namespace std;


int main()
{
    vector<int> scores;

    scores.push_back(85);
    scores.push_back(80);
    scores.push_back(10);

    for (int i = 0; i<scores.size(); i++) {
        cout << scores[i]<<endl;
    }

}

