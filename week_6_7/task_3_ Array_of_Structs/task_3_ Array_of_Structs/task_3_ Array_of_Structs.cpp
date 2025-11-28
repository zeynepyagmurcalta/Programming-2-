// task_3_ Array_of_Structs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Student {

    string name;
    int age;

    
};

int main()
{
    Student student[3];


    for (int i = 0; i < 3; i++) {
        cout << "Student" << i + 1 << " Enter the name:" << endl;
        cin >> student[i].name;
        cout << "Studenrts" << i + 1 << " Enter the age" << endl;
        cin >> student[i].age;

    }

    cout << "Informatins about the students:" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "Students" << i + 1 << "-Name" << student[i].name << "-Age" << student[i].age << endl;
    }

    return 0;

}

