#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a1[n];
    for(int i=0; i<n; i++)
    {
        cin >> a1[i];
    }

    int m;
    cin >> m;

    int a2[m];
    for(int i=0; i<m; i++)
    {
        cin >> a2[i];
    }
    /* 
        Array 1 - [20, 30, 40, 50, 60]
        Array 2 - [15, 22, 31, 45, 56, 62, 78]

        Here, we first compare the 1st element of array1 with the 1st element of
        array2, and then put the smaller element in the merged array. Since
        20 > 15, we put 15 as the first element in the merged array. We then
        compare the 2nd element of the second array with the 1st element of the 
        first array. Since 20 < 22, now 20 is stored as the second element of 
        the merged array. Next, the 2nd element of the first array is compared
        with the 2nd element of the second array. Since 30 > 22, we store 22 as 
        the third element of the merged array. Now, we will compare the 2nd 
        element of the first array with the 3rd element of the second array. 
        Because 30 < 31, we store 30 as the 4th element of the merged array.
        This procedure will be repeated until elements of both the arrays are 
        placed in the right location in the merged array.

        Result -  [15, 20, 22, 30, 31, 40, 45, 50, 56, 60, 62, 78]
     */

    int res[n+m];

    /* 
        Initially I had done this:

        int p1 = 0, p2 = 0, idx = 0;
        while(idx<n+m)
        {
            ...
            ...

            idx++;
        }

        But this can be converted to a for loop like:
     */

    for(int idx=0, p1=0, p2=0; idx<n+m; idx++) 
    {
        if(a1[p1] < a2[p2])
        {
            res[idx] = a1[p1];
            p1++;
        }
        else
        {
            res[idx] = a2[p2];
            p2++;
        }
    }

    cout << "Resultant array: ";
    for(int i=0; i<n+m; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
}