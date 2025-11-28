// task_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> nums = { 10,20,30,40 };

    nums.push_back(50);
    nums.push_back(60);

    nums.pop_back();


    if (nums.empty()) {
        cout << "The vector is empty" << endl;

    }

    else {
        cout << "The vector is not empty" << endl;
    }

    return 0;

}

