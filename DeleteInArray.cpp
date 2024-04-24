#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements in the array:"<<endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "After deleting the last element:"<<endl;
    for (int i = 0; i < size - 1; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}
