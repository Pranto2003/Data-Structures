#include <iostream>
using namespace std;
int main(){
    int size;
   cout<<"Enter the size of the array :"<<endl;
   cin>>size;
   int arr[size];
   cout<<" Enter the elements in array :"<<endl;
   for(int i=0; i<size; i++){
    cin>>arr[i];
   }

   int max=arr[0];
   int min=arr[0];
   for(int i=0; i<size; i++){
    if(arr[i]>max){
        max=arr[i];
    }
   }
   cout<<"Maximum element is :"<<max<<endl;

   for(int i=0; i<size; i++){
    if(arr[i]<min){
        min=arr[i];
    }
   }
   cout<<"Minimum element is :"<<min<<endl;



    return 0;
 }