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
