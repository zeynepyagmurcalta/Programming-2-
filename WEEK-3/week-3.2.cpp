

#include <iostream>
using namespace std;

//							TASK-1

/*int sum(int a, int b) {

    int sum = a + b;

    cout << "sum of the numbers are" << sum << endl;

    return sum;
}

int main()
{

    int a, b;
    cout << "please enter a value for sum";
    cin >> a;
    cout << "please enter b value for sum";
    cin >> b;

    sum(a, b);


}
*/

//				TASK-2

/*int mult(int a, int b);

int main() {

	int a, b;

	cout << "please enter the two number to divide" << endl;

	cout << "first number:" << endl;
	cin >> a;

	cout << "second number:" << endl;
	cin >> b;

	mult(a, b);
}

int mult(int a, int b) {

	double mult = a * b;

	cout << "Answer is :" << mult;

	return mult;
}*/

//				TASK-3

/*double areaOfCircle(double r) {

	const double pi = 3.14;

	double area = pi * r * r;

	cout << "area of the circle is" << area << endl;

	return area;


}

int main() {

	double r;
	cout << "please enter the r value for calculate :" << endl;
	cin >> r;

	areaOfCircle(r);


}*/

//					TASK-4

/*void square(int a) {
	int square = a * a;

	cout << "square of the number is:" << square << endl;
}

int main() {
	int a;
	cout << "please enter the number for calculate square:";
	cin >> a;

	square(a);

} */


			
//					TASK-5

/*void change(int a) {
	a = 20;
	cout << "the value inside of the function is:" << a << endl;

}

int main() {
	int number = 10;

	cout << "inside of the functuon value is:" << number << endl;

	change(number);

	cout << "after call the functuon value is:" << number << endl;



}*/

//					TASK - 6

/*void changeValue(int& x) {
	x = x + 10;              
}

int main() {
	int num = 5;
	cout << "Before function call: " << num << endl;

	changeValue(num);   

	cout << "After function call: " << num << endl;

	return 0;
}*/

//                     TASK-7           

/*int add(int a, int b) {
	int sum = a + b;

	cout << sum<<endl;

	return sum;

}

double add(double a,double b) {

	double sum = a + b;
	cout << sum<<endl;
	return sum;

}
                                 
 
int main() {

	int a, b;
	double x, y;



	cout << "please enter the int number for call int function" << endl;
	cin >> a;
	cin >> b;
	


	cout << "please enter the double number for call int function" << endl;
	cin >> x;
	cin >> y;

	add(a, b);
	add(x, y);
}*/

//                                   TASK-8

/*int display(int a, int b) {
	int sum = a + b;
	cout << "displays for with parameters function" <<sum<< endl;

	return 1;
}

void display() {

	cout << "displays for no parameters function" << endl;
}

int main() {

	int a, b;
	cout << "please enter a and b value:" << endl;
	cin >> a;
	cin >> b;

	display(a, b);

	display();

}*/


//                                    TASK-9


/*class Animal {
public:
	
	virtual void speak() {
		cout << "The animal makes a sound." << endl;
	}
};


class Dog : public Animal {
public:
	
	void speak() override {
		cout << "The dog barks." << endl;
	}
};

int main() {
	Animal a;     
	Dog d;        

	a.speak();    
	d.speak();    

	
	

	return 0;
}*/



//                                     TASK-10

/*int max(int a, int b) {

	int sum = a + b;
	cout << "this is integer part and sum is" << endl;
	return sum;

}

float max(float a, float b) {

	float sum = a + b;
	cout << "this is float part and sum is" << endl;

	return sum;
}

int main() {
	cout << max(3, 7) << endl;
	cout << max(2.5f, 4.8f) << endl;
}*/

//                                    TASK-11

void display(int num) {
	cout << "Integer: " << num << endl;
}

void display(double num) {
	cout << "Double: " << num << endl;
}

void display(string text) {
	cout << "String: " << text << endl;
}

int main() {

	display(10);          
	display(3.14);        
	display("Hello");     

	return 0;
}