#include <iostream>
using namespace std;
int main(){
int arr[10];
int count=0;
int element;
cout<<"Enter the elements in array :"<<endl;
for(int i=0; i<10; i++){
    cin>>arr[i];
}
cout<<"Enter the element to search in array :"<<endl;
cin>>element;
for(int i=0; i<10; i++){
    if(element==arr[i]){
        count++;
    }
}
cout<<element<<" occurs "<<count<<" times "<<endl;



return 0;
}
