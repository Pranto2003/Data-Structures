#include <iostream>
using namespace std;
int main(){
   int size;
   cout<<"Enter the size of the array :"<<endl;
   cin>>size;
   int arr1[size];
   int arr2[size];
   cout<<"Enter the elements of 1st array in sorted way :"<<endl;
   for(int i=0; i<size; i++){
    cin>>arr1[i];
   }
   cout<<"Enter the elements of 2nd array in sorted way :"<<endl;
   for(int i=0; i<size; i++){
    cin>>arr2[i];
   }

   cout<<"Elements of 1st array :"<<endl;
   for(int i=0; i<size; i++){
    cout<<arr1[i]<<" ";
   }
   cout<<endl;
    cout<<"Elements of 2nd array :"<<endl;
   for(int i=0; i<size; i++){
    cout<<arr2[i]<<" ";
   }
   cout<<endl;
   
   int newSize=size+size;
   int arr3[newSize];
   for(int i=0; i<newSize; i++){
    if(i<5){
        arr3[i]=arr1[i];
    }
    if(i>5){
        arr3[i]=arr2[i];
    }
   }

   cout<<"Now our last full array is :"<<endl;
   for(int i=0; i<newSize; i++){
    cout<<arr3[i]<<" ";
   }

    return 0;
}