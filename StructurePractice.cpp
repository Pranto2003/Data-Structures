#include <iostream>
using namespace std;
int main()
{
    struct st
    {
        string name;
        int age;
        float salary;
    };

    st st1[2];
    for (int i = 0; i < 2; i++)
    {
        cin >> st1[i].name;
        cin >> st1[i].age;
        cin >> st1[i].salary;
    }

    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << st1[i].name << endl;
        
        cout << st1[i].age << endl;
        
        cout << st1[i].salary << endl;
    }
        

        return 0;
    }