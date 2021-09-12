#include <iostream>
#include <cmath>
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

int main()
{
    cout << "Program to check whether a number is prime." << endl
         << endl;

    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << num << " is " << (isPrime(num) ? "prime" : "not prime") << endl;
    return 0;
}