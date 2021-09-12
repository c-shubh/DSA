#include <iostream>
using namespace std;

int sumOfNNaturalNumbers(int n)
{
    return n * (n + 1) / 2;
}

int main()
{
    cout << "Program to find the sum of n natural numbers" << endl
         << endl;

    cout << "Enter a number: ";
    int n;
    cin >> n;

    cout << "Sum of natural numbers till " << n << " is " << sumOfNNaturalNumbers(n) << endl;
    return 0;
}