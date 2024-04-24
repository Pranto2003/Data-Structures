#include <iostream>
using namespace std;
int main(){
char input;
cout<<"Enter :"<<endl;
cin>>input;
for(int i=0; i<=10; i++){
    if(input==i){
        cout<<"It's a number"<<endl;
        break;
    }
}
for(char i='A'; i<='Z'; i++){
    if(input==i){
        cout<<"It's a Character"<<endl;
        break;
    }
}

return 0;
}
