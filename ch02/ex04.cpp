// Chapter 2, question 4
#include <iostream>
using namespace std;

int Months(int);

int main()
{
	int age;

	cout << "Enter your age: ";
	cin >> age;
	cout << "Your age contains " << Months(age) << " months";
	cout << endl;
	return 0;
}

int Months(int age)
{
	return age*12;
}