// chapter 3, question 3
// ch03ex03.cpp --- Latitude in degree
#include <iostream>

int main()
{
    using namespace std;

    const int Min_per_deg = 60;
    const int Sec_per_min = 60;

    float degrees;
    float minutes;
    float seconds;

    cout << "Enter a latitude in degrees, minutes, seconds:\n";
    cout << "First, enter the degrees: ";
    
    cin >> degrees;

    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;

    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;

    cout << degrees << " degrees," << minutes << " minutes, " << seconds << " seconds ";
    cout << " = ";
    cout << degrees + minutes / Min_per_deg + seconds / (Min_per_deg*Sec_per_min) << " degrees";

    return 0;
}