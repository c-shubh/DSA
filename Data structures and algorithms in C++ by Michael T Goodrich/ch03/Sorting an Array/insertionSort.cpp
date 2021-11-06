#include <iostream>

/*  We begin with a high-level outline of the insertion-sort algorithm.
    We start with the first element in the array. One element by itself is 
    already sorted. Then we consider the next element in the array. If it is 
    smaller than the first, we swap them. Next we consider the third element 
    in the array. We swap it leftward until it is in its proper order with the 
    first two elements. We continue in this manner with each element of the 
    array, swapping it leftward until it is in its proper position. 
 */
void insertionSort(char *A, int n)
{
    for (int i = 1; i < n; i++)
    {
        char cur = A[i];
        int j = i - 1;
        while ((j >= 0) && (A[j] > cur))
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = cur;
    }
}

void printArray(char *A, int n)
{
    std::cout << "[";
    for (int i = 0; i < n; i++)
    {
        std::cout << A[i];
        std::cout << (i == n - 1 ? "" : ", ");
    }
    std::cout << "]" << std::endl;
}

int main()
{
    char arr[] = {'B', 'C', 'D', 'A', 'E', 'H', 'G', 'F'};
    printArray(arr, 8);
    insertionSort(arr, 8);
    printArray(arr, 8);
}