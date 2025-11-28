// task_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

void insert_with_loop(vector <int> v) {

	for (int i = 0; i < v.size(); i++) {
		if (v[i] == 2) {
			v[i] = 9;
		}
		if (v[i] == 5) {
			v[i] = 7;
		}

		int x = v[i];

		cout << x << endl;

	}
	cout << "---------------------------------------------" << endl;

}

void insert_with_at(vector <int> v) {

	v.at(1) = 9;
	v.at(4) = 5;


	for (int i = 0; i < v.size(); i++) {


		int x = v[i];

		cout << x << endl;

	}

	cout << "---------------------------------------------" << endl;

}

int main()
{
	vector <int> v = { 1,2,3,4,5 };

	insert_with_loop(v);
	insert_with_at(v);

	
}

