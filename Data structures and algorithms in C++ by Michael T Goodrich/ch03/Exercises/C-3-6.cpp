/*  Give a recursive algorithm to compute the product of two positive integers,
    m and n, using only addition and subtraction.
 */

#include <iostream>
using std::cout;

int product(int m, int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (m < n)
    {
        product(n, m);
    }
    return m + product(m, n - 1);
}

int main()
{
    cout << product(5, 10) << "\n"; // 50
    cout << product(13, 9) << "\n"; // 117
}