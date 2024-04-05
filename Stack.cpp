#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st[5];
    int element;
    cout << "Enter some elements in stack :" << endl;
    for (int i = 0; i < sizeof(st) / sizeof(st[0]); i++)
    {
        cin >> element;
        st[i].push(element);
    }
    cout << "The stack is :" << endl;
    for (int i = 0; i < sizeof(st) / sizeof(st[0]); i++){
        cout << st[i].top()<<" ";
    }
    cout << endl;

    for (int i = 0; i < sizeof(st) / sizeof(st[0]); i++){
        if(!st[i].empty()){
            st[i].pop();
            if(!st.empty()){
                cout << "After pop :" << st.top() << endl;
            }
            else{
                cout << "Stack is empty after pop " << endl;
            }
        }
        else{
            cout << "Stack was empty" << endl;
        }
        
    }

    return 0;
}