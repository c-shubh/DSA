/*  rows = 5, cols = 8
    * * * * * * * *
    * * * * * * * *
    * * * * * * * *
    * * * * * * * *
    * * * * * * * *
*/
#include <iostream>
using namespace std;

void printRectanglePattern(int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < columns; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

int main()
{
    cout << "This program prints a rectangle with given number of rows and columns.\n\n";

    int rows, columns;
    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> columns;

    printRectanglePattern(rows, columns);

    return 0;
}
