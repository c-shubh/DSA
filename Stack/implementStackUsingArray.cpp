#include <iostream>
#include <string>
using namespace std;

class Stack
{
    private:
        const static int stackSize = 100;
        int arr[stackSize];
        int top;

    public:
        Stack();
        int push(const int);
        bool isEmpty();
        int pop();
        int peek();
        string toString();
        friend ostream& operator<<(ostream &, const Stack &);

};

Stack::Stack()
{
    top = -1;
}

int Stack::push(const int ele)
{
    if(top==stackSize-1)
    {
        cerr << "Stack overflow" << endl;
        return -1;
    }
    arr[++top] = ele;
    return ele;
}

bool Stack::isEmpty()
{
    return (top < 0);
}

int Stack::pop()
{
    if(top<0)
    {
        cerr << "Stack underflow" << endl;
        return -1;
    }
    int x = arr[top--];
    return x;
}

int Stack::peek()
{
    if(top<0)
    {
        cerr << "Stack is empty" << endl;
        return -1;
    }
    int x = arr[top];
    return x;
}

string Stack::toString()
{
    string s = "[";
    string commaSpace = ", ";
    for(int i=top; i>=0; i--)
    {
        s += to_string(arr[i]);
        if(i!=0)
        {
            s += commaSpace;
        }
    }
    s += "]";
    return s;
}

ostream &operator<<(ostream &os, Stack &s)
{
    os << s.toString();
    return os;
}

int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s << endl;

    cout << s.pop() << " Popped from stack\n";
    //print all elements in stack :
    cout<<"Elements present in stack : ";
    while(!s.isEmpty())
    {
        // print top element in stack
        cout<<s.peek()<<" ";
        // remove top element in stack
        s.pop();
    }
 
    return 0;
}
