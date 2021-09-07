/*  n = 5
            *
          * *
        * * *
      * * * *
    * * * * *
*/
#include <iostream>
using namespace std;

void printHalfPyramidAfter180degRotation(int n)
{
    for (int i = 0; i < n; i++)
    {
        // print spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }

        // print stars
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }

        cout << "\n";
    }
}

int main()
{
    cout << "This program prints a half pyramid after 180deg rotation, of n rows and columns.\n\n";

    int n;
    cout << "Enter n: ";
    cin >> n;

    printHalfPyramidAfter180degRotation(n);

    return 0;
}
