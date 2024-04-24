#include <iostream>
using namespace std;
int main(){
   int size;
   cout<<"Enter the size of array :"<<endl;
   cin>>size;
   int arr[size];

   cout<<"Enter the elements in array :"<<endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

   cout<<"Even :"<<endl;
   for(int i=0; i<size; i++){
    if(arr[i]%2==0){
        cout<<arr[i]<<" ";
    }
   }
   cout<<endl;
   cout<<endl;
   cout<<"Odd :"<<endl;
   for(int i=0; i<size; i++){
    if(arr[i]%2!=0){
        cout<<arr[i]<<" ";
    }
   }
    return 0;
}