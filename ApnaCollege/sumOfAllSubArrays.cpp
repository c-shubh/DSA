#include <iostream>
using namespace std;

int getSumOfAllSubArrays(int arr[], int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            sum += arr[j];
        }
    }
    return sum;
}

int main()
{
    cout << "This program finds the sum of all subarrays.\n\n";

    int n;
    cout << "Enter the length of array: ";
    cin >> n;

    cout << "Enter array: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << getSumOfAllSubArrays(arr, n) << "\n";

    return 0;
}
