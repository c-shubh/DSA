#include <iostream>
using namespace std;

int main()
{
    cout << "This program prints sizes of data types." << endl
         << endl;

    int i;
    float f;
    double d;
    char c;
    bool b;
    short int s;
    long int l;

    cout << "size of int: " << sizeof(i) << endl;
    cout << "size of float: " << sizeof(f) << endl;
    cout << "size of double: " << sizeof(d) << endl;
    cout << "size of char: " << sizeof(c) << endl;
    cout << "size of bool: " << sizeof(b) << endl;
    cout << "size of short: " << sizeof(s) << endl;
    cout << "size of long: " << sizeof(l) << endl;

    return 0;
}