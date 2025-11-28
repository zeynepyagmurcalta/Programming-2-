// task_8_Template_Function_for_Maximum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

template <typename T>
T maximum(T a, T b) {
    return(a > b) ? a : b;
}



int main()
{
    int x = 10, y = 20;
    cout << "Max int: " << maximum(x, y) << endl;

    
    double d1 = 5.7, d2 = 3.4;
    cout << "Max double: " << maximum(d1, d2) << endl;

    
}

