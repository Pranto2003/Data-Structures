#include <iostream>
using namespace std;
void findOdd(int startpoint, int endpoint){
    for(int i=startpoint; i<=endpoint; i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
}
int main(){
   int strtpoint,endpoint;
   cout<<"Enter the Starting value :"<<endl;
   cin>>strtpoint;
   cout<<"Enter the Ending value :"<<endl;
   cin>>endpoint;
   findOdd(strtpoint,endpoint);

    return 0;
}