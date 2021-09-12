/*  n = 5
    * * * * *
    * * * *
    * * *
    * *
    *
*/
#include <iostream>
using namespace std;

void printInvertedHalfPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

int main()
{
    cout << "This program prints an inverted half pyramid of n rows and columns.\n\n";

    int n;
    cout << "Enter n: ";
    cin >> n;

    printInvertedHalfPyramid(n);

    return 0;
}
