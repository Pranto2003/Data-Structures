#include <iostream>
using namespace std;
int main(){
int size;
cout<<"Pranto Goswamee"<<endl;
cout<<"22-49146-3"<<endl;
cout<<"Data Structure Lab"<<endl;
cout<<"----------------------"<<endl;
cout<<"Enter the size of array :"<<endl;
cin>>size;
int arr[size];
cout<<"Enter the elements of array :"<<endl;
for(int i=0; i<size; i++){
    cin>>arr[i];
}

for(int i=1; i<size; i++){
    int temp=arr[i];
    int j=i-1;

    while(j>=0 && arr[j]>temp){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
}

cout<<"The array after sorting :"<<endl;
for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
}


return 0;
}
