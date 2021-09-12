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

int calculateCnr(int n, int r)
{
    int nCr = factorialOf(n) / (factorialOf(n - r) * factorialOf(r));
    return nCr;
}

int main()
{
    cout << "This program calculates nCr.\n\n";

    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;

    cout << calculateCnr(n, r) << "\n";

    return 0;
}
