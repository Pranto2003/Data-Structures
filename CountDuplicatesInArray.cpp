#include <iostream>
using namespace std;
int main(){
   int size;
   cout<<"Enter the size of the array :"<<endl;
   cin>>size;
   int arr[size];
   int count=0;

   for(int i=0; i<size; i++){
    cin>>arr[i];
   }
   for (int i = 0; i < size-1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
   }

   cout<<"Total duplicates :"<<count<<endl;

    return 0;
}