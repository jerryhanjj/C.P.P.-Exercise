// Chapter 2, question 5
// 摄氏度 华氏度 转换
#include <iostream>
using namespace std;

float CeltoFah(float);

int main()
{
	float Celsius;

	cout << "Please enter a Celsius value: ";
	cin >> Celsius;
	cout << Celsius << " degrees Celsius is " << CeltoFah(Celsius) << " degrees Fahrenheit.";
	cout << endl;

	return 0;
}

float CeltoFah(float Celsius)
{
	return 1.8 * Celsius + 32.0;
}