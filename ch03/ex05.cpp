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