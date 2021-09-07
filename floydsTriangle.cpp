/*  n = 5
    1
    2  3
    4  5  6
    7  8  9  10
    11 12 13 14 15
*/
#include <iostream>
using namespace std;

void printFloydsTriangle(int n)
{
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            // cout << num++ << " ";
            printf("%-2d ", num++);
        }

        cout << "\n";
    }
}

int main()
{
    cout << "This program prints Floyd's triangle, of n rows and columns.\n\n";

    int n;
    cout << "Enter n: ";
    cin >> n;

    printFloydsTriangle(n);

    return 0;
}
