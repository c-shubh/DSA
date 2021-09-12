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

void printPascalsTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("%-4d ", calculateCnr(i, j));
        }
        cout << "\n";
    }
}

int main()
{
    cout << "This program prints n rows of Pascal's Triangle.\n\n";

    int n;
    cout << "Enter n: ";
    cin >> n;

    printPascalsTriangle(n);

    return 0;
}
