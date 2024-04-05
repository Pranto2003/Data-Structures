#include <iostream>
#include <stack>;
using namespace std;
bool isBalanced(string parenthesis){
    stack<char> st;
    for(char c:parenthesis){
        if(c=='(' || c=='{' || c=='['){
            st.push(c);
           }else if(c==')' || c=='}' || c==']'){
                if(st.empty()){
                    return false;
                }else{
                  st.pop();
                }
           }
    }
    return st.empty();
}
int main(){
string parenthesis;
cout<<"Enter the parentheses :"<<endl;
cin>>parenthesis;

if(isBalanced(parenthesis)){
    cout<<"The parentheses are balanced"<<endl;
}
else{
    cout<<"The parentheses are not balanced"<<endl;
}
return 0;
}
