#include <iostream>
#include <climits>
using namespace std;

int main()
{
    cout << "This program prints the max and min value of an array.\n\n";

    int lenOfArray;
    cout << "Enter length of array: ";
    cin >> lenOfArray;

    int arr[lenOfArray];
    for (int i = 0; i < lenOfArray; i++)
    {
        cin >> arr[i];
    }

    int maxNo = INT_MIN, minNo = INT_MAX;

    for (int i = 0; i < lenOfArray; i++)
    {
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }

    cout << "Max: " << maxNo << "\n";
    cout << "Min: " << minNo << "\n";
    return 0;
}