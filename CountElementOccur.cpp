#include <iostream>
using namespace std;

int main() {
   int arr[10];
   cout<<"Enter the elements in array :"<<endl;
   for(int i=0; i<10; i++){
    cin>>arr[i];
   }
    for (int i = 0; i <10; i++) {
        int count = 1;
        if (arr[i] == -1) {
            continue;
        }


        for (int j = i + 1; j <10; j++) {
            if (arr[j] == arr[i]) {
                count++;
                arr[j] = -1;
            }
        }


        cout << "Element " << arr[i] << " occurs " << count << " times"<<endl;
    }

    return 0;
}
