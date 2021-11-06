/*  C-3.3
    Let A be an array of size n ≥ 2 containing integers from 1 to n−1, inclusive,
    with exactly one repeated. Describe a fast algorithm for finding the integer
    in A that is repeated.
 */

#include <iostream>
using std::cin;
using std::cout;

#include <random>
using std::mt19937;
using std::random_device;
using std::uniform_int_distribution;

#include <algorithm>
using std::random_shuffle;

void printArray(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

/*  Returns sum of all elements of the array */
int sum(int *arr, int len)
{
    int total = 0;
    for (int i = 0; i < len; i++)
    {
        total += arr[i];
    }
    return total;
}

/*  Returns a random number in range [a, b] */
random_device rd;
int getRandomInRangeInclusive(int a, int b)
{
    mt19937 generator(rd());
    uniform_int_distribution<int> distribution(a, b);
    return distribution(generator);
}

/* Fills array with integers from 1 to n−1, inclusive, with exactly one 
    repeated .
 */
void generateTestCase(int *arr, int len)
{
    int numberToRepeat = getRandomInRangeInclusive(1, len - 1);
    int idxToPlaceRepeatedNumber = getRandomInRangeInclusive(0, len - 1);
    arr[idxToPlaceRepeatedNumber] = numberToRepeat;

    for (int i = 0, j = 1; i < len; i++)
    {
        if (i != idxToPlaceRepeatedNumber)
        {
            arr[i] = j++;
        }
    }

    random_shuffle(arr, arr + len);
}

int sumOfFirstNNaturalNumbers(int n)
{
    return ((n * (n + 1)) / 2);
}

void solve(int *arr, int len)
{
    cout << len - (sumOfFirstNNaturalNumbers(len) - sum(arr, len)) << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        generateTestCase(a, n);

        printArray(a, n);
        solve(a, n);
    }
}