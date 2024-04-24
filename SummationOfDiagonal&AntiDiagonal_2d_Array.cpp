#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Pranto Goswamee"<<endl;
cout<<"22-49146-3"<<endl;
cout<<"Data Structure Lab"<<endl;
cout<<"----------------------"<<endl;
cout<<"Enter the size of row and column :"<<endl;
cin>>n;
int arr[n][n];
int sum=0;
cout<<endl;
cout<<"Enter the elements in array :"<<endl;
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cin>>arr[i][j];
    }
}
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        if((i==j)||(i+j==n-1)){
            sum+=arr[i][j];
        }
    }
}

cout<<"The summation of diagonal and anti diagonal elements is :"<<sum<<endl;


return 0;
}
