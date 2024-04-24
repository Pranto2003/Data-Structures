#include <iostream>
using namespace std;
int main(){
int sum=0;
int row,column;
cout<<"Pranto Goswamee"<<endl;
cout<<"22-49146-3"<<endl;
cout<<"Data Structure Lab"<<endl;
cout<<"----------------------"<<endl;
cout<<"Enter the numbers of row :"<<endl;
cin>>row;
cout<<"Enter the numbers of column :"<<endl;
cin>>column;
int arr[row][column];
cout<<endl;
cout<<"Enter the elements in array :"<<endl;
for(int i=0; i<row; i++){
    for(int j=0; j<column; j++){
        cin>>arr[i][j];
    }
}
for(int i=0; i<row; i++){
    for(int j=0; j<column; j++){
       if((i==0)||(i==row-1)||(j==column-1)||(j==0)){
        sum+=arr[i][j];
       }
    }
}

cout<<"The Summation of boundary elements is :"<<sum<<endl;



return 0;
}
