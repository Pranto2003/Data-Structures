#include <iostream>
using namespace std;
int main(){
int arr[3][4];
int transpose[4][3];
cout<<"Pranto Goswamee"<<endl;
cout<<"22-49146-3"<<endl;
cout<<"Data Structure Lab"<<endl;
cout<<"----------------------"<<endl;
cout<<"Enter the elements in array :"<<endl;
for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
        cin>>arr[i][j];
    }
}
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
    cout<<endl;
}



return 0;
}


