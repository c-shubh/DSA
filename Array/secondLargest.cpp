#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    /* -------------------------------------------------------------------------
        Approach: The approach is to traverse the array twice. 
        In the first traversal find the maximum element. 
        In the second traversal find the greatest element in the remaining 
        excluding the previous greatest.

        Complexity Analysis:
        Time Complexity: O(n). 
        Two traversals of the array is needed.
        Auxiliary space: O(1). 
        As no extra space is required.
     */
    /* 
    int max_ = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(a[i] > max_)
        {
            max_ = a[i];
        }
    }

    int smax = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(a[i] != max_)
        {
            if(a[i] > smax)
            {
                smax = a[i];
            }
        }
    }

    cout << "Second largest: " << smax << endl;
    ------------------------------------------------------------------------- */

    /* -------------------------------------------------------------------------
        Efficient Solution 
        Approach: Find the second largest element in a single traversal. 
        Below is the complete algorithm for doing this:  

        1) Initialize the max_ as INT_MIN
        2) Start traversing the array from index 0,
            a) If the current element in array say arr[i] is greater than max_.
            Then update max_ and smax as,
                smax = max_
                max_ = arr[i]
            b) If the current element is in between smax and max_,
                then update smax to store the value of current variable as
                smax = arr[i]
            3) Return the value stored in smax.

        Complexity Analysis:

        Time Complexity: O(n). 
        Only one traversal of the array is needed.
        Auxiliary space: O(1). 
        As no extra space is required.
     */

    int max_ = INT_MIN, smax = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(a[i] > max_)
        {
            smax = max_;
            max_ = a[i];
        }
        else if(smax < a[i] && a[i] < max_)
        {
            smax = a[i];
        }
    }
    
    if(smax == INT_MIN) // there's no smax
    {
        cout << "Second largest: " << "None" << endl;
    }
    else
    {
        cout << "Second largest: " << smax << endl;
    }
}