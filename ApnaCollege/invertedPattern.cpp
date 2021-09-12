/*  n = 5
    1  2  3  4  5
    1  2  3  4
    1  2  3
    1  2
    1
*/

#include <iostream>
using namespace std;

void printInvertedPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("%-2d ", j + 1);
        }

        cout << "\n";
    }
}

int main()
{
    cout << "This program prints an inverted pattern.\n\n";

    int n;
    cout << "Enter n: ";
    cin >> n;

    printInvertedPattern(n);

    return 0;
}
