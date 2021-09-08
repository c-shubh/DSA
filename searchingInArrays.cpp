#include <iostream>
using namespace std;

int linearSearch(int arr[], int lenOfArr, int key)
{
    for (int i = 0; i < lenOfArr; i++)
    {
        if (key == arr[i])
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int lenOfArr, int key)
{
    int s = 0, e = lenOfArr;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    cout << "This program searches for a key in the user inputted array.\n\n";

    int n;
    cout << "Enter the length of array: ";
    cin >> n;

    cout << "Enter array: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter key: ";
    cin >> key;

    cout << linearSearch(arr, n, key) << "\n";

    return 0;
}