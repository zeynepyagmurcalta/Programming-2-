

#include <iostream>
#include<vector>

using namespace std;


int main()
{
    vector<int> numbers = { 1,2,3,4,5 };

    cout << "Before update version" << endl;

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << endl;
    }


    numbers.at(1) = 9;
    numbers.at(4) = 7;
    
  
    cout << "Updated version is:" << endl;

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << endl;
    }
    return 0;
}

