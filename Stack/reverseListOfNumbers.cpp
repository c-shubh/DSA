#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    cout << "Enter numbers: ";

    int first;
    if(cin >> first)
    {
        s.push(first);
        while(cin >> first)
        {
            s.push(first);
        }
    }

    cout << "Reversed numbers: ";
    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}