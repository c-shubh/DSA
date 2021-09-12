#include <iostream>
#include <climits>
using namespace std;

void findMaxTillI(int arr[], int len)
{
    int mx = INT_MIN;
    for (int i = 0; i < len; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx << "\n";
    }
}

int main()
{
    cout << "This program finds the maximum element till ith iteration.\n\n";

    int n;
    cout << "Enter the length of array: ";
    cin >> n;

    cout << "Enter array: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    findMaxTillI(arr, n);

    return 0;
}
