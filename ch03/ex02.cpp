// chapter 3, question 2
// ch03ex01.cpp --- Calculate Body Mass Index(BMI£©
#include <iostream>
#include <math.h>

int main()
{
    using namespace std;

    float BMI = 0;

    float ht_inch;
    float ht_feet;
    float weight_kg;
    float weight_pound;

    const float Inch_per_feet = 12.0f;
    const float Meter_per_inch = 0.0254f;
    const float Pound_per_kg = 2.2f;

    cout << "Enter your height:" << endl;
    cout << "Feet: ";
    cin >> ht_feet;

    cout << "Inch: ";
    cin >> ht_inch;
    cout << "=========================\n";

    float ht_meter = (ht_feet*Inch_per_feet + ht_inch)*Meter_per_inch;

    cout << "Enter your weight(Pounds): ";
    cin >> weight_pound;

    weight_kg = weight_pound * Pound_per_kg;

    BMI = weight_kg / pow(ht_meter, 2);

    cout << "Your BMI is " << BMI << endl;
    
    return 0;
}