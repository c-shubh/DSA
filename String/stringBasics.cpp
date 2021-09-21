#include <iostream>
#include <algorithm>
using namespace std;

void readingStrings()
{
    string s;
    getline(cin, s);
    cout << "You entered: " << s << endl;
}

void findingLengthOfString()
{
    string s;
    getline(cin, s);
    cout << "Length: " << s.length() << endl;
}

void changingCase()
{
    string s;
    getline(cin, s);

    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << "Uppercase: " << s << endl;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << "Lowercase: " << s << endl;
}

void appendingStrings()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);

    string c = a + b;
    cout << "Appended strings: " << c << endl;
}

void reversingString()
{
    string s;
    getline(cin, s);
    reverse(s.rbegin(), s.rend());
    cout << "Reversed string: " << s << endl;
}

void extractingSubstring()
{
    string a;
    getline(cin, a);

    int n;
    cin >> n;
    string toDiscard;
    getline(cin, toDiscard);

    cout << "From " << n << " to end: " << a.substr(n) << endl;

    string b;
    getline(cin, b);

    int n1, n2;
    cin >> n1 >> n2;
    getline(cin, toDiscard);

    cout << "Inclusive between " << n1 << " and " << n2 << "+1: " << b.substr(n1, n2) << endl;
}

void checkPalindrome()
{
    string s;
    getline(cin, s);

    string revS(s.rbegin(), s.rend());

    if(s == revS)
    {
        cout << s << " is a palindrome." << endl;
    }
    else
    {
        cout << s << " is not palindrome." << endl;
    }
}

int main()
{
    checkPalindrome();
}