#include <iostream>
#include <climits>
using namespace std;

/* Insert an element from unsorted array to its correct position in sorted array. */
void insertionSort(int arr[], int len)
{
    for (int i = 1; i < len; i++)
    {
        int currentElement = arr[i];

        int currentIdx = i;
        int previousIdx = currentIdx - 1;
        while ((currentElement < arr[previousIdx]) && (previousIdx >= 0))
        {
            arr[currentIdx] = arr[previousIdx];
            currentIdx--;
            previousIdx--;
        }
        arr[previousIdx + 1] = currentElement;
    }
}

int main()
{
    cout << "This program sorts an array using the Insertion Sort algorithm.\n\n";

    int n;
    cout << "Enter the length of array: ";
    cin >> n;

    cout << "Enter array: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
