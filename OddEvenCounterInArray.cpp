#include <iostream>
using namespace std;
int main(){
  int size=10;
  int arr[size];
  cout<<"Enter the elements :"<<endl;
  for(int i=0; i<size; i++){
    cin>>arr[i];
  }
  int oddCounter=0,evenCounter=0;
  for(int i=0; i<size; i++){
    if(arr[i]%2==0){
        evenCounter++;
    }
    else{
        oddCounter++;
    }
  }

  cout<<"Total Even Numbers :"<<evenCounter<<endl;
  cout<<"Total Odd Numbers :"<<oddCounter<<endl;

    return 0;
}