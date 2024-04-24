#include <iostream>
using namespace std;
int main(){
int row,column;
cout<<"Pranto Goswamee"<<endl;
cout<<"22-49146-3"<<endl;
cout<<"Data Structure Lab"<<endl;
cout<<"----------------------"<<endl;
cout<<"Enter the row numbers :"<<endl;
cin>>row;
cout<<"Enter the column numbers :"<<endl;
cin>>column;
int arr1[row][column];
int arr2[row][column];
int arr[row][column];
cout<<"Enter the elements in array 1 :"<<endl;
for(int i=0; i<row; i++){
    for(int j=0; j<column; j++){
        cin>>arr1[i][j];
    }
}
cout<<endl;
cout<<"Enter the elements in array 2 :"<<endl;
for(int i=0; i<row; i++){
    for(int j=0; j<column; j++){
        cin>>arr2[i][j];
    }
}
cout<<endl;
for(int i=0; i<row; i++){
    for(int j=0; j<column; j++){
        arr[i][j]=arr1[i][j]*arr2[i][j];
    }
}
cout<<"The array after multiplication is :"<<endl;
for(int i=0; i<row; i++){
    for(int j=0; j<column; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}


return 0;
}

