// task_6_Function_Pointer_Declaration.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

bool compare(int a,int b) {

	return a > b;

}

int main()
{
	bool(*funcPtr)(int, int);
	funcPtr = compare;
	bool result = funcPtr(100, 99);
	cout << "Result is:" << result << endl;

	return 0;
}
