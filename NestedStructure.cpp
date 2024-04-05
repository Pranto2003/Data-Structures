#include <iostream>
using namespace std;
int main(){
    struct StuRec{
        string name;
        string id;
        string dept;

        struct Adress{
            int postalCode;
            string road;
        }add;
    };

    StuRec st[2];
    st[0].name="Pranto";
    st[0].id="23-24-1";
    st[0].dept="CSE";
    st[0].add.postalCode=7321;
    st[0].add.road="UP-Road";

    cout<<st[0].name<<endl;
    cout<<st[0].id<<endl;
    cout<<st[0].dept<<endl;
    cout<<st[0].add.postalCode<<endl;
    cout<<st[0].add.road<<endl;

    return 0;
}