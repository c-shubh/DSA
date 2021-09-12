/*  rows = 5, cols = 8
    * * * * * * * *
    *             *
    *             *
    *             *
    * * * * * * * *
*/
#include <iostream>
using namespace std;

void printHollowRectanglePattern(int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < columns; j++)
        {
            if ((i == 0 || i == rows - 1) || (j == 0 || j == columns - 1))
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
    cout << "This program prints a hollow rectangle with given number of rows and columns.\n\n";

    int rows, columns;
    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> columns;

    printHollowRectanglePattern(rows, columns);

    return 0;
}
