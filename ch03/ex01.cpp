// chapter 3, question 1
// ex01.cpp --- height foot to inch 
#include <iostream>

int main()
{
    using namespace std;

    const float inches_pre_foot = 12.0f;

    cout << "Enter your height(inch):____\b\b\b\b";
    float height_inch;
    cin >> height_inch;

    float height_feet = height_inch / inches_pre_foot;

    cout << "Your height is " << height_inch << " inches, " << height_feet << " feet.";
    return 0;
}