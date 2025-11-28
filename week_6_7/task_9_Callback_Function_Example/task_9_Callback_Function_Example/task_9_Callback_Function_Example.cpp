// task_9_Callback_Function_Example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printASCII(char c) {
    cout << "ASCII value of '" << c << "' is: " << (int)c << endl;
}

void processChar(char c, void (*callback)(char)) {
    
    callback(c);
}

int main()
{
    char ch = 'A';

    
    processChar(ch, printASCII);

    return 0;
}


