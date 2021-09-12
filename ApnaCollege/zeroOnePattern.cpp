/*  n = 5
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
*/
#include <iostream>
using namespace std;

void printZeroOnePattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        bool ch = i % 2 == 0 ? 1 : 0;
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
            ch = !ch;
        }

        cout << "\n";
    }
}

int main()
{
    cout << "This program prints a zero-one pattern.\n\n";

    int n;
    cout << "Enter n: ";
    cin >> n;

    printZeroOnePattern(n);

    return 0;
}
