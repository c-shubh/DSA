/*  C-3.13
    Describe a recursive function for converting a string of digits into the 
    integer it represents. For example, "13531" represents the integer 13,531.
 */

#include <string>
using std::string;
using std::to_string;

#include <iostream>
using std::cout;

#include <cmath>
using std::ceil;
using std::pow;

int stringToInt(string s)
{
    if (s.length() == 0)
    {
        return 0;
    }
    // convert first char to int + rest of the string to int
    return ((s[0] - '0') * ceil(pow(10, s.length() - 1))) + stringToInt(s.substr(1));
}

int main()
{
    cout << stringToInt("23") << "\n";
}