#include <iostream>
using namespace std;

void printFibonacciSequence(int n)
{
    int prev = 0, next = 1, new_;
    for (int i = 0; i < n; i++)
    {
        cout << prev << " ";
        new_ = prev + next;
        prev = next;
        next = new_;
    }
}

int main()
{
    cout << "Program to print n terms of fibonacci sequence.\n\n";

    cout << "Enter n: ";
    int n;
    cin >> n;

    printFibonacciSequence(n);
    return 0;
}