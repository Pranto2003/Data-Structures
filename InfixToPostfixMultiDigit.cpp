#include <iostream>
#include <stack>
using namespace std;

int precedence(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

bool isDigit(char c)
{
    return c >= '0' && c <= '9';
}

string infixToPostfix(string s)
{
    stack<char> st;
    string result;

    for (int i = 0; i < s.length(); i++)
    {
        if (isDigit(s[i]))
        {
            while (i < s.length() && isDigit(s[i]))
            {
                result += s[i];
                i++;
            }
            result += " "; // Add space to separate numbers in the postfix expression
            i--;           // Decrement to counter the outer loop's increment
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                result += st.top();
                st.pop();
            }
            st.pop(); // Pop the remaining '('
        }
        else // It's an operator
        {
            while (!st.empty() && precedence(st.top()) >= precedence(s[i]))
            {
                result += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }
    return result;
}

int main()
{
    string expression;
    cout << "Enter the expression:" << endl;
    getline(cin, expression);  // Using getline to allow spaces in input
    cout << "The expression in postfix is: " << infixToPostfix(expression) << endl;

    return 0;
}
