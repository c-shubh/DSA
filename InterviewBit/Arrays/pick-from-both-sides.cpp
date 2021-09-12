/* 
(Solved)
https://www.interviewbit.com/problems/pick-from-both-sides/
https://www.youtube.com/watch?v=8dJ1OLtXNvQ
 */

#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int solve(vector<int> &A, int B)
{
    int n = A.size(), left = 0, right = 0;
    // First B elements from left
    for (int i = 0; i < B; i++)
    {
        left += A[i];
    }

    int mx = left;
    for (int i = 0; i < B; i++)
    {
        left = left - A[B - i - 1];
        right = right + A[n - i - 1];

        mx = max(mx, left + right);
    }
    return mx;
}

int main()
{
    int n;
    cin >> n;

    int temp;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }

    int b;
    cin >> b;

    cout << solve(a, b) << endl;

    return 0;
}