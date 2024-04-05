#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of array :" << endl;
    cin >> size;
    int arr[size][size];
    int arr2[size][size];
    int arr3[size][size];
    cout << "Enter the elements in array :" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr2[i][j] = arr[j][i];
        }
    }
    cout << "The array after  reverse 90 degree clockwise roatation :" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int temp;
            if (i == 0)
            {
                temp = size - 1;
            }
            else if (i == size - 1)
            {
                temp = 0;
            }
            else
            {
                temp = 1;
            }

            arr3[temp][j] = arr2[i][j];
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}