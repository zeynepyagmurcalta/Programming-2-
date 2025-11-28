// task_4_passing_struct_to_function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


struct Person {

    string name;
    int age;
    char initial;

};


void displayPerson(Person p) {

    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Initial: " << p.initial << endl;

}

int main()
{

    Person p;
    cout << "Enter the name:" << endl;
    cin >> p.name;
    cout << "Enter the age" << endl;
    cin >> p.age;
    cout << "Enter the initial character:" << endl;
    cin >> p.initial;

    displayPerson(p);
    
}

