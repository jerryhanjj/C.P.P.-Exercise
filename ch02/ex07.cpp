// Chapter 2, question 7
// ex07.cpp -- Time
#include <iostream>
using namespace std;

void Time(int, int);

int main()
{
    int hour, min;

    cout << "Enter the number of hours: ";
    cin >> hour;

    cout << "Enter the number of minutes:";
    cin >> min;

    Time(hour, min);

    return 0;
}

void Time(int hour, int min)
{
    cout << "Time: " << hour << ":" << min << endl;
}
