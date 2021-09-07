/*  n = 5
    *                 *
    * *             * *
    * * *         * * *
    * * * *     * * * *
    * * * * * * * * * *
    * * * * * * * * * *
    * * * *     * * * *
    * * *         * * *
    * *             * *
    *                 *
*/

#include <iostream>
using namespace std;

void printButterflyPattern(int n)
{
    // top half
    for (int i = 0; i < n; i++)
    {
        // print stars
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }

        // print spaces
        /*  n = 4
            i   numofspaces     x=n-i-1     2*x
            -----------------------------------------------
            0   6               3           6
            1   4               2           4
            2   2               1           2
            3   0               0           0
            
        */
        for (int j = 0; j < 2 * (n - i - 1); j++)
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

    // bottom half
    for (int i = n - 1; i >= 0; i--)
    {
        // print stars
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }

        // print spaces
        for (int j = 0; j < 2 * (n - i - 1); j++)
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
    cout << "This program prints the butterfly pattern.\n\n";

    int n;
    cout << "Enter n: ";
    cin >> n;

    printButterflyPattern(n);

    return 0;
}
