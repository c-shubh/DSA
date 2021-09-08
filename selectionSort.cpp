#include <iostream>
#include <climits>
using namespace std;

/* Find min element from startIdx to end of the array */
int min(int arr[], int len, int startIdx)
{
    int min = INT_MAX, minIdx = startIdx;
    for (int i = startIdx; i < len; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minIdx = i;
        }
    }
    return minIdx;
}

void swap(int *a, int *b)
{
    if (a != b) // if pointers a and b do not point to the same memory location, then swap
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

/* Find the minimum element in unsorted array and swap it with element at beginning. */
void selectionSort(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int minIdx = min(arr, len, i);
        swap(&arr[minIdx], &arr[i]);
    }
}

int main()
{
    cout << "This program sorts an array using the Selection Sort algorithm.\n\n";

    int n;
    cout << "Enter the length of array: ";
    cin >> n;

    cout << "Enter array: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}