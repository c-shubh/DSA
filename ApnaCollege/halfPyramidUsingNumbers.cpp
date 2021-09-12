/*  n = 5
    1
    2  2
    3  3  3
    4  4  4  4
    5  5  5  5  5
*/

#include <iostream>
using namespace std;

void printHalfPyramidUsingNumbers(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            // cout << i + 1 << " ";
            printf("%-2d ", i + 1);
        }

        cout << "\n";
    }
}

int main()
{
    cout << "This program prints a half pyramid using numbers, of n rows and columns.\n\n";

    int n;
    cout << "Enter n: ";
    cin >> n;

    printHalfPyramidUsingNumbers(n);

    return 0;
}
