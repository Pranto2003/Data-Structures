#include <iostream>
using namespace std;
int main(){
   int size;
   cout<<"Enter the size of array :"<<endl;
   cin>>size;
   int arr[size];

   cout<<"Enter the elements in array :"<<endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout<<endl;
    cout<<"Prime Numbers :"<<endl;
    for(int i=0; i<size; i++){
        bool flag=false;
        for(int j=2; j<arr[i]; j++){
            if(arr[i]%j==0){
                flag=true;
                break;;
            }
            else{
                flag=false;
                break;
            }
            
        }
        if(!flag){
            cout<<arr[i]<<" ";
        }
    }


    return 0;
}