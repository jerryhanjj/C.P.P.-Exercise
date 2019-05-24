# Program list

```C++
// Chapter 1, question 1

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	cout << "My first name is Jerry, ";
	cout << "and my address is HERE !" << endl;
	return 0;
}
```

```C++
// Chapter 1, question 2

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int ilong = 0;

	cout << "please input distance(long):";
	cin >> ilong;

	cout << "The distance is " << ilong*220 << " yards.";
	cout << endl;

	return 0;
}

```

```C++
// Chapter 2, question 3
#include <iostream>
using namespace std;

void Mice();
void Run();

int main()
{
    Mice();
    Mice();
    Run();
    Run();

    return 0;
}

void Mice()
{
    cout << "Three blind mice" << endl;
}

void Run()
{
    cout << "See how they run" << endl;
}

```

```C++
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
```

```C++
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
```

```C++
// Chapter 2, question 6
// ex06.cpp -- light years to astronomical unit
#include <iostream>
using namespace std;

double LYtoAU(double);

int main()
{
    double lightyears;

    cout << "Enter the number of light years: ";
    cin >> lightyears;
    cout << lightyears << " light years = " << LYtoAU(lightyears) << " astronomical untis.";

    return 0;
}

double LYtoAU(double lightyears)
{
    return lightyears * 63240;
}
```

```C++
// Chapter 2, question 7
// ex07.cpp -- time
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
```