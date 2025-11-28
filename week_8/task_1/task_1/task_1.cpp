// task_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	for (int i = 0; i < v.size(); i++) {
		int x = v[i];
		cout << x << endl;
	}

	cout << v.size() << endl;

	return 0;
   
}

