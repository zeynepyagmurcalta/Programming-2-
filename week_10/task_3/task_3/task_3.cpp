// task_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> finals{85, 90, 95};
    vector<int>scores = finals;


    if (scores == finals) {
        cout << "Vectors are equal" << endl;
    }
    else {
        cout << "Vectors are nor equal"<<endl;
    }

    return 0;
}

