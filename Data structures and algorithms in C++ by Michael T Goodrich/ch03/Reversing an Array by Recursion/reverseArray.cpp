#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverseArray(int *arr, int len, int idx = 0)
{
    if (idx < len - idx - 1)
    {
        swap(&arr[idx], &arr[len - idx - 1]);
        reverseArray(arr, len, idx + 1);
    }
}

void printArray(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int oddArrLen = 5, evenArrLen = 6;

    int oddArr[oddArrLen] = {1, 2, 3, 4, 5};
    int evenArr[evenArrLen] = {1, 2, 3, 4, 5, 6};

    reverseArray(oddArr, oddArrLen);
    reverseArray(evenArr, evenArrLen);

    printArray(oddArr, oddArrLen);
    printArray(evenArr, evenArrLen);
}
