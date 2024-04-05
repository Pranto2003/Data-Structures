#include <iostream>
using namespace std;
int main(){
   int size;
   cout<<"Enter the size of array :"<<endl;
   cin>>size;
   int arr[size];

   //Taking the elements of array from the user
   cout<<"Enter the elements :"<<endl;
   for(int i=0; i<size; i++){
     cin>>arr[i];
   }

   //Displaying the array
   for(int i=0; i<size; i++){
     cout<<arr[i]<<" ";
   }
   cout<<endl;
   
   //Removing the duplicate elements
   for(int i=0; i<size-1; i++){
     if(arr[i]==arr[i+1]){
        arr[i]=arr[i+1];
        
     }
   }

   //Displaying the array after removing the duplicates
   for(int i=0; i<size; i++){
     cout<<arr[i]<<" ";
   }

    return 0;
}