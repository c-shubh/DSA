/*  n = 5
*/
#include <iostream>
using namespace std;

void printZigzagPattern(int n)
{
    int place, topLen, midLen, botLen;
    if (n % 2 == 0)
    {
        place = n / 2;

        if (place % 2 == 0)
        {
            topLen = n - 1;
            midLen = n;
            botLen = n - 3;
        }
        else
        {
            topLen = n - 3 < 0 ? 0 : n - 3;
            midLen = n;
            botLen = n - 1;
        }
    }
    else
    {
        place = (n - 1) / 2;

        if (place % 2 == 0)
        {
            topLen = n - 2 < 0 ? 0 : n - 2;
            midLen = n - 1 < 0 ? 0 : n - 1;
            botLen = n;
        }
        else
        {
            topLen = n;
            midLen = n - 1;
            botLen = n - 2;
        }
    }

    // top line
    for (int i = 0; i < topLen; i++)
    {
        if (i % 4 == 2)
        {
            cout << "* ";
        }
        else
        {
            cout << "  ";
        }
    }
    cout << "\n";

    // mid line
    for (int i = 0; i < midLen; i++)
    {
        if (i % 2 == 1)
        {
            cout << "* ";
        }
        else
        {
            cout << "  ";
        }
    }
    cout << "\n";

    // bottom line
    for (int i = 0; i < botLen; i++)
    {
        if (i % 4 == 0)
        {
            cout << "* ";
        }
        else
        {
            cout << "  ";
        }
    }
    cout << "\n";
}

void printZigzagPatternOptimized(int n)
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }
}

int main()
{
    cout << "This program prints a zigzag pattern.\n\n";

    int n;
    cout << "Enter n: ";
    cin >> n;

    printZigzagPatternOptimized(n);

    return 0;
}
