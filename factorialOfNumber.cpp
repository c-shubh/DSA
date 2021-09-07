#include <iostream>
using namespace std;

int factorialOf(int n)
{
    int fac = 1;
    for (int i = n; i > 0; i--)
    {
        fac = fac * i;
    }
    return fac;
}

int main()
{
    cout << "Program to find factorial of a number." << endl
         << endl;

    cout << "Enter a number: ";
    int n;
    cin >> n;
    cout << "Factorial of " << n << " is " << factorialOf(n) << endl;

    return 0;
}
