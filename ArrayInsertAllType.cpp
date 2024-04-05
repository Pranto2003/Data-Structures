#include <iostream>
using namespace std;
void displayArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertValue(int arr[], int &size, int value, int index){
    for(int i=size-1; i>=index; i--){
        arr[i+1]=arr[i];
    }
    arr[index]=value;
    size++;
    
}
int main(){
    int arr[20]={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    cout<<"Given Array :"<<endl;
    displayArray(arr, size);
    insertValue(arr,size,100,size);
    insertValue(arr,size,200,4);
    insertValue(arr,size,300,0);
    cout<<"Output after addition :"<<endl;
    displayArray(arr, size);



    return 0;
}