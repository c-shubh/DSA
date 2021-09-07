/*  n = 5
            1
          1   2
        1   2   3
      1   2   3   4
    1   2   3   4   5
*/
#include <iostream>
using namespace std;

void printNumberPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        // print spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }

        // print numbers
        for (int j = 0; j < i + 1; j++)
        {
            // cout << j + 1 << " ";
            printf("%-2d  ", j + 1);
        }

        cout << "\n";
    }
}

int main()
{
    cout << "This program prints a number pattern.\n\n";

    int n;
    cout << "Enter n: ";
    cin >> n;

    printNumberPattern(n);

    return 0;
}
