#include <iostream>
using namespace std;
void displayArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void deleteArray(int arr[], int &size, int value){
    for(int i=0; i<size; i++){
        if(arr[i]==value){
            for(int j=i; j<size-1; j++){
                 arr[j]=arr[j+1];
            }
            size--;
            break;
        }
    }
    
}
int main(){
   int arr[20]={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    cout<<"Given Array :"<<endl;
    displayArray(arr, size);
    deleteArray(arr,size,10);
    deleteArray(arr,size,5);
    deleteArray(arr,size,1);
    displayArray(arr, size);

    return 0;
}