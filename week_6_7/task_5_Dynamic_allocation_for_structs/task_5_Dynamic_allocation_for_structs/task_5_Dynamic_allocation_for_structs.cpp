// task_5_Dynamic_allocation_for_structs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Car {

    string brand;
    string year;

};

int main()
{
    Car* carPtr = new Car;

    carPtr->brand = "Ford";
    carPtr->year = "2004";

    cout << "Brand: " << carPtr->brand << endl;
    cout << "Year : " << carPtr->year << endl;

    delete carPtr;
    carPtr = nullptr;

    return 0;


}
