/*  n = 5
        *  *  *  *  *
       *  *  *  *  *
      *  *  *  *  *
     *  *  *  *  *
    *  *  *  *  *
*/
#include <iostream>
using namespace std;

void printRhombusPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        // print spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // print stars
        for (int j = 0; j < 5; j++)
        {
            cout << "*  ";
        }
        cout << "\n";
    }
}

int main()
{
    cout << "This program prints a rhombus pattern.\n\n";

    int n;
    cout << "Enter n: ";
    cin >> n;

    printRhombusPattern(n);

    return 0;
}
