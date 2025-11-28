// task_7_Pointer_to_Member_Function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class MathOps {
public:
    float add(float a, float b) {
        return a + b;
    }
};

int main()
{
    float(MathOps :: * funcPtr)(float, float);

    funcPtr = &MathOps::add;

    MathOps obj;

    float result = (obj.*funcPtr)(3.5, 2.4);
    cout << "Result: " << result << endl;

    return 0;
}

