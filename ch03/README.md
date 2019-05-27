```C++
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
```

```C++
// chapter 3, question 2
// ch03ex01.cpp --- Calculate Body Mass Index(BMI��
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
```

```C++
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
```

```C++
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
```

```C++
// chapter 3, question 5
// ex05.cpp --- population percentage
#include <iostream>

int main()
{
    using namespace std;

    cout << "Enter the world's population: ";

    long long wd_pop;
    cin >> wd_pop;

    cout << "Enter the population of the US: ";

    long long us_pop;
    cin >> us_pop;

    cout << "The population of the US is ";
    cout << ((double)us_pop / (double)wd_pop) * 100;
    cout << "% of the world population.";

    return 0;
}
```

```C++
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
```
