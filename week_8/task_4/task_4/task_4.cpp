// task_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

void push_back(vector<int> v) {
    v.push_back(50);
    v.push_back(60);

    for (int i = 0; i < v.size(); i++) {
        int x = v[i];
        cout << x << endl;

    }

    cout << "----------------------------------------------" << endl;
}

void pop_back(vector<int> v) {
    v.pop_back();

    for (int i = 0; i < v.size(); i++) {
        int x = v[i];
        cout << x << endl;

    }
    cout << "----------------------------------------------" << endl;
}

void clear(vector<int> v) {

    v.clear();

}

void empty(vector<int> v) {
    
    if (v.empty()) {
        cout << "Vector is empty" << endl;
    }

    else {
        cout << "vector is not empty" << endl;
    }

    cout << v.size()<< endl;
}

int main()
{
    vector<int> v = { 10,20,30,40 };

    push_back(v);
    pop_back(v);
    clear(v);
    empty(v);
    

    return 0;


    

}

