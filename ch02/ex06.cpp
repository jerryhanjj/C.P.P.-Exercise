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
