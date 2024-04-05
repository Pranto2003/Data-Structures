#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array :"<<endl;
    cin>>size;
    int arr[size];

    //taking input from the user
    cout<<"Enter the elements in array :"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<endl;

    //showing the array after taking input
    cout<<"The array is :"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    //applying the bubble sort algorithm
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

   //showing the output after implementing bubble sort
    cout<<"The sorted array is :"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}