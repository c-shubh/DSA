#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int n;
    cin >> n;

    /* -------------------------------------------------------------------------
        Using array
     */
    /* 
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    long int res = 0L;
    for(int i=0; i<n; i++)
    {
        res += a[i]*ceil(pow(10, n-i-1));
    }

    cout << "Number: " << res << endl;
    ------------------------------------------------------------------------- */

    /* -------------------------------------------------------------------------
        Without using array
     */
    long int res = 0L;
    for(int i=0; i<n; i++)
    {
        int inpVal;
        cin >> inpVal;

        res += inpVal*ceil(pow(10, n-i-1));
    }

    cout << "Number: " << res << endl;
}