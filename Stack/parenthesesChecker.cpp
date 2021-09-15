/* 

    https://www.tutorialspoint.com/cplusplus-program-to-check-for-balanced-paranthesis-by-using-stacks
    
 */
#include <iostream>
#include <typeinfo>
#include <stack>
#include <algorithm>
using namespace std;

bool isParenthesis(char c)
{
   return c=='('
       || c== ')'
       || c== '['
       || c== ']'
       || c== '{'
       || c== '}';
}

bool isOpeningParen(char c)
{
    return c=='('
       || c== '['
       || c== '{';
}

char getOpeningPair(char c)
{
    if(c==')') return '(';
    if(c==']') return '[';
    if(c=='}') return '{';
}

bool checkParenthesis(string str)
{
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    stack<char> s;
    for(int i=0; i<str.length(); i++)
    {
        char c = str[i];
        if(isParenthesis(c))
        {
            if(isOpeningParen(c))
            {
                s.push(c);
            }
            else
            {
                if(!s.empty() && s.top() == getOpeningPair(c))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
        }
    }
    return s.empty();
}

int main()
{
    string expr;
    cout << "Enter an algebraic expression: ";
    getline(cin, expr);

    cout << boolalpha;
    cout << checkParenthesis(expr) << endl;
    cout << noboolalpha;
    return 0;
}