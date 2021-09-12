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

void printPrimeNumbersBetween(int a, int b)
{
    for (int i = (a < 2 ? 2 : a); i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
}

int main()
{
    cout << "Program to print prime numbers between given two numbers.\n\n";

    cout << "Enter two numbers: ";
    int a, b;
    cin >> a >> b;

    printPrimeNumbersBetween(a, b);
    return 0;
}