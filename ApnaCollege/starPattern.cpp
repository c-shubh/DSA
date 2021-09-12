/*  n = 5
            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *
    * * * * * * * * *
      * * * * * * *
        * * * * *
          * * *
            *
*/
#include <iostream>
using namespace std;

void printStarPattern(int n)
{
    // top part
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }

        // stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "* ";
        }

        cout << "\n";
    }

    // bottom part
    for (int i = n - 1; i >= 0; i--)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }

        // stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "* ";
        }

        cout << "\n";
    }
}

int main()
{
    cout << "This program prints a star pattern.\n\n";

    int n;
    cout << "Enter n: ";
    cin >> n;

    printStarPattern(n);

    return 0;
}
