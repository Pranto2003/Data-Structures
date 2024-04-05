#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of array :" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the elements in array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int number;
    cout << " Enter the number :" << endl;
    cin >> number;
    for (int i = 0; i < size; i++)
    {

        if (number > arr[i])
        {
            number = number - arr[i];
            cout << "Add :" << arr[i] << " of index " << i << endl;
            continue;
        }
    }

    return 0;
}