#include <iostream>
using namespace std;
int main(){
int arr[3][4];
int transpose[4][3];
cout<<"Enter the elements in array :"<<endl;
for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
        cin>>arr[i][j];
    }
}
cout<<"Transpose matrix :"<<endl;
for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
        transpose[j][i]=arr[i][j];
    }
}
cout<<"Transpose matrix :"<<endl;
for(int i=0; i<4; i++){
    for(int j=0; j<3; j++){
        cout<<transpose[i][j]<<" ";
    }
}



return 0;
}
