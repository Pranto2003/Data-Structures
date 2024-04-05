#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int size;
    cout<<"Pranto Goswamee"<<endl;
    cout<<"22-49146-3"<<endl;
    cout<<"Data Structure Lab"<<endl;
    cout<<"----------------------"<<endl;
    cout << "Enter the size of array: " << endl;
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(&arr[i], &arr[min]);
    }

    cout << "Sorted array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
