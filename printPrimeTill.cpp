#include <iostream>
using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

void printPrimeTill(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
}

int main()
{
    cout << "Program to print prime numbers till n." << endl
         << endl;

    int n;
    cout << "Enter a number: ";
    cin >> n;
    printPrimeTill(n);
    return 0;
}