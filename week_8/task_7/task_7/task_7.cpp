// task_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> num = { 1,2,3 };

	auto iter = num.begin();

	cout << *iter << endl;

	return 0;


}

