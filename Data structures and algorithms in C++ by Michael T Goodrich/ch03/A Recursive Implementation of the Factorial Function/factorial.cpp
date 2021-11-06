#include <iostream>
using namespace std;

/*  Recursive definition of factorial
                   { 1 --------------------- if n = 0
    factorial(n) = {
                   { n * factorial(n-1) ---- if n >= 1
 */
int recursiveFactorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * recursiveFactorial(n - 1);
}

int main()
{
}