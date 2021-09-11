/* 

Problem:
Given an array arr[] of size N. The task is to find the first repeating element in the array of integers, i.e., an element that occurs more than once and whose index of first occurrence is smallest.

Constraints:
1 <= n <= 10^6
0 <= Ai <= 10^6

Example 1:
Input:
7
1 5 3 4 3 5 6

Output:
2

Explanation:
5 is appearing twice and its first appearance is at index 2 which is less than 3 whose first occuring index is 3.


Example 2:
Input:
4
1 2 3 4

Output:
-1

Explanation:
All elements appear only once so answer is -1.
 */

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    const int N = (int)1e6 + 2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minIdx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (idx[a[i]] != -1)
        {
            minIdx = min(minIdx, idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;
        }
    }

    if (minIdx == INT_MAX)
    {
        cout << "-1\n";
    }
    else
    {
        cout << minIdx + 1 << "\n";
    }

    return 0;
}
