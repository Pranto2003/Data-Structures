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

    int element;
    cout << "Enter an element to insert: "<<endl;
    cin >> element;

    int newSize = size + 1;
    int newArr[newSize];

    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }
    newArr[newSize - 1] = element;

    cout << "After inserting the last element:"<<endl;
    for (int i = 0; i < newSize; i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;

    return 0;
}

