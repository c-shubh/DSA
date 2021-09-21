#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    int duplCheck[(int)1e5] = {0}; // assuming  0 <= a[i] < 10^5
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(duplCheck[a[i]] == 0)
        {
            duplCheck[a[i]]++;
        }
        else
        {   
            cout << "Contains duplicates" << endl;
            break;
        }

    }


}