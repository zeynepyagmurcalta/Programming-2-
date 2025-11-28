// task_9_Using_std_function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <functional>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main()
{
    std::function<int(int, int)> func;

    func = add;
    cout << "Addition: " << func(10, 20) << endl;

    func = [](int a, int b) { return a * b; };
    cout << "Multiplication: " << func(10, 20) << endl;

    return 0;
}

