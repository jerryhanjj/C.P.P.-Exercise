// chapter 3, quesion 6
// ex06.cpp --- miles and gallon
#include <iostream>

int main()
{
    using namespace std;

    float miles;
    float gallon;

    cout << "Enter the mileage(miles): ";
    cin >> miles;

    cout << "Enter the gallon used: ";
    cin >> gallon;

    cout << "Your oil consumption is ";
    cout << miles / gallon;
    cout << " MPG.";    

    return 0;
}