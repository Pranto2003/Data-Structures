#include <iostream>
#include <stack>
using namespace std;
bool isBalanced(string parenthesis)
{
    stack<char> st;
    for (char c : parenthesis)
    { // TODO-> for each char of parenthesis the loop is running
        // TODO-> pushing the opening bracetes into the stack
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else
        {
            // TODO-> If there is no openeing bracetes then poping element from the stack
            if (!st.empty())
            {
                st.pop();
            }
            // TODO-> Returning false when the stack is empty
            else
            {
                return false;
            }
        }
    }
    // TODO-> Finally checking the stack is empty or not.
    // TODO-> If empty then return true else return false.
    return st.empty();
}
int main()
{
    string parenthesis;
    cout << "Enter Bracetes " << endl;
    cin >> parenthesis;
    cout << endl;
    if (isBalanced(parenthesis))
    {
        cout << "The Bracetes are balanced" << endl;
    }
    else
    {
        cout << "The Bracetes are not balanced" << endl;
    }
    return 0;
}