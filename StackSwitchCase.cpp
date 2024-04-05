#include <iostream>
#include <stack>
using namespace std;
int main()
{
    static stack<int> st[10];
    int top = -1, value, element;
    char choice;
    cout << "What you want to do ?" << endl;
    cout << "1. Push element in the stack " << endl;
    cout << "2. Pop element from the stack " << endl;
    cout << "3. Display the stack " << endl;
    cin >> choice;
    switch (choice)
    {
    case '1':
        cout << "Now you can push element" << endl;
        cout << "How many elements you want to push ?" << endl;
        cin >> value;
        if (value <= 10)
        {
            for (int i = 0; i < value; i++)
            {
                top++;
                cin >> element;
                st[i].push(element);
            }
        }
        else
        {
            cout << "Stack will be overloaded " << endl;
        }

        cout << "Do you want to do more operations?" << endl;
        cout << "1.Pop element from the stack " << endl;
        cout << "2.Display the stack " << endl;
        cin >> choice;
        switch(choice){
            case '1':
            cout << "Now you can pop element :" << endl;
            for (int i = 9; i >= 0; i--){
                top--;
                cin >> element;
                st[i].pop();
            }
        }
        break;

    case '2':
        cout << "You can't pop because you haven't entered any element" << endl;
        break;
    case '3':
        cout << "Can't display because the stack is empty" << endl;
        break;
    }

    return 0;
}