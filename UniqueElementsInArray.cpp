#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;

    int arr[size];
    

    cout<<"Enter the elements in array :"<<endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++) {
        bool flag = true;

        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                flag = false;
                
            }
        }

        if (flag) {
            cout << arr[i] << " ";
        }
    }



    return 0;
}
