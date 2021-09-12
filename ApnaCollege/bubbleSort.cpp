#include <iostream>
#include <climits>
using namespace std;

void swap(int *a, int *b)
{
    if (a != b) // if pointers a and b do not point to the same memory location, then swap
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

/* Repeatedly swap two adjacent elements if they are in wrong order. */
void bubbleSort(int arr[], int len)
{
    for (int i = 0; i < len - 2; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main()
{
    cout << "This program sorts an array using the Bubble Sort algorithm.\n\n";

    int n;
    cout << "Enter the length of array: ";
    cin >> n;

    cout << "Enter array: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
