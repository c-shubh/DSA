#include <iostream>
using namespace std;

int main()
{
    int n; // num of elements
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++) // getting input for array values
    {
        cin >> a[i];
    }

    int minEle = a[0];
    int pos = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] < minEle)
        {
            minEle = a[i];
            pos = i;
        }
    }
    cout << "Min ele: " << minEle << " position: " << pos << endl;

}