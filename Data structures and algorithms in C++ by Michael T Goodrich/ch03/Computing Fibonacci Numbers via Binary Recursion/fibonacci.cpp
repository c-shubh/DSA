#include <iostream>
using namespace std;

/* 
    F_0 = 0
    F_1 = 1
    F_i = F_(i-1) + F_(i-2) for i > 1
 */
int binaryFibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return binaryFibonacci(n - 1) + binaryFibonacci(n - 2);
}

int main()
{
}