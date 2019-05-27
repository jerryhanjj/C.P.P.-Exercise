// chapter 3, question 4
// ex04.cpp --- time
#include <iostream>

int main()
{
    using namespace std;

    const short hours_per_day = 24;
    const short minutes_per_hour = 60;
    const short sec_per_min = 60;

    cout << "Enter the number of seconds: ";
    long sec_time;
    cin >> sec_time;

    int sec = sec_time % sec_per_min;

    int min_t = sec_time / sec_per_min;

    int min = min_t % minutes_per_hour;

    int hour_t = min_t / minutes_per_hour;

    int hour = hour_t % hours_per_day;

    int day = hour_t / hours_per_day;

    
    cout << sec_time << " seconds = ";
    cout << day << " days, ";
    cout << hour << " hours, ";
    cout << min << " minutes, ";
    cout << sec << " seconds";

    return 0;
}