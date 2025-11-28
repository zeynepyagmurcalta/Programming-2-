// task_2_pointer_to_struct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

struct Person {
    string name;
    int age;
    char  initial;
    
};

int main()
{
    Person p;
    Person* ptr = &p;

    ptr->name = "Zeynep";
    ptr->age = 21;
    ptr->initial = 'Z';


    cout << ptr->name << endl;
    cout << ptr->age << endl;
    cout << ptr->initial << endl;

    return 0;
}
