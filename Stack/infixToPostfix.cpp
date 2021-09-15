/* 

    https://algotree.org/algorithms/stack_based/infix_to_postfix/

    Step 0. Tokenize the infix expression. i.e Store each element i.e ( operator / operand / parentheses )
            of an infix expression into a list / queue.

    Step 1. Push “(” onto a stack and append “)” to the tokenized infix expression list / queue.

    Step 2. For each element ( operator / operand / parentheses ) of the tokenized infix expression 
            stored in the list/queue repeat steps 3 up to 6.

    Step 3. If the token equals “(", push it onto the top of the stack.

    Step 4. If the token equals “)", pop out all the operators from the stack and append them to the
            postfix expression till an opening bracket i.e “(” is found.

    Step 5. If the token equals “*” or “/” or “+” or “-” or “^", pop out operators with higher precedence
            at the top of the stack and append them to the postfix expression. Push current token onto the stack.

    Step 6. If the token is an operand, append it to the postfix expression. (Positions of the operands
            do not change in the postfix expression so append an operand as it is.)

 */
#include <iostream>
#include <sstream>
#include <stack>
#include <algorithm>
using namespace std;

int getPrecedenceOfOperator(char oper)
{
    switch(oper)
    {
        case '(': return 1;

        case '-': 
        case '+': return 2;

        case '*': 
        case '/': return 3;

        case '^': return 4;
    }
}

string infixToPostfix(string infixExpr)
{
    infixExpr.erase(
        remove(infixExpr.begin(), infixExpr.end(), ' '), infixExpr.end()
    );

    stack<char> operatorStk;
    stringstream outputStream;

    /* Step 1. Push “(” onto a stack and append “)” to the tokenized infix expression list / queue. */
    operatorStk.push('(');
    infixExpr.append(")");

    /* Step 2. For each element ( operator / operand / parentheses ) of the tokenized infix expression
               stored in the list/queue repeat steps 3 up to 6. */
    
    for(int i=0; i<infixExpr.length(); i++)
    {
        char token = infixExpr[i];

        /* Step 3. If the token equals “(", push it onto the top of the stack. */
        if(token == '(') operatorStk.push(token);

        /* Step 4. If the token equals “)", pop out all the operators from the stack and append them
                   to the postfix expression till an opening bracket i.e “(” is found. */
        else if(token == ')')
        {
            while(operatorStk.top() != '(')
            {
                outputStream << operatorStk.top();
                operatorStk.pop();
            }
            operatorStk.pop();
        }

        /* Step 5. If the token equals “*” or “/” or “+” or “-” or “^", pop out operators with higher
                   precedence at the top of the stack and append them to the postfix expression. 
                   Push current token onto the stack. */
        else if(token == '*'
        || token == '/'
        || token == '+'
        || token == '-'
        || token == '^')
        {
            while(!operatorStk.empty() 
               && getPrecedenceOfOperator(operatorStk.top()) >= getPrecedenceOfOperator(token))
            {
                outputStream << operatorStk.top();
                operatorStk.pop();
            }
            operatorStk.push(token);
        }

        /* Step 6. If the token is an operand, append it to the postfix expression. (Positions of the
                   operands do not change in the postfix expression so append an operand as it is.) */
        else
        {
            outputStream << token;
        }

    }
    return outputStream.str();
}

int main()
{
    string expr;
    cout << "Enter an algebraic expression: ";
    getline(cin, expr);

    cout << infixToPostfix(expr) << endl;
    return 0;
}