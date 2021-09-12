/*  n = 5
            1
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4
    5 4 3 2 1 2 3 4 5
*/
#include <iostream>
using namespace std;

void printPalindromicPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }

        // numbers
        int ch = i + 1;
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch-- << " ";
        }

        for (int j = 0; j < i; j++)
        {
            cout << j + 2 << " ";
        }

        cout << "\n";
    }
}

int main()
{
    cout << "This program prints a palindromic pattern.\n\n";

    int n;
    cout << "Enter n: ";
    cin >> n;

    printPalindromicPattern(n);

    return 0;
}
