// task_1_define_struct_access_members.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

struct Person {
    string name;
    int age;
    char initial;
};

int main()
{
    Person p;

    p.name = "Zeynep";
    p.age = 21;
    p.initial = 'Z';
    
    cout << p.name << endl;
    cout << p.age << endl;
    cout << p.initial << endl;

    return 0;
}

