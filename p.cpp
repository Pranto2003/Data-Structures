#include <iostream>
using namespace std;
int main()
{
    int row1, col1, row2, col2;
    cout << "Enter the row for the first array" << endl;
    cin >> row1;
    cout << "Enter the column for the first array" << endl;
    cin >> col1;
    cout << "Enter the row for the second array" << endl;
    cin >> row2;
    cout << "Enter the column for the second array" << endl;
    cin >> col2;

    int arr1[row1][col1];
    int arr2[row2][col2];
    int row3 = row1, col3 = col1;
    int arr3[row3][col3];
    //! Taking input from the user ...
    cout << "Enter the elements in array1 :" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "Enter the elements in array2 :" << endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < row3; i++)
    {
        for (int j = 0; j < col3; j++)
        {
            arr3[i][j] = 0;
        }
    }

    //! The last process for output ...
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < row2; j++)
        {
            for (int k = 0; k < col3; k++)
            {
                arr3[i][k] += arr1[i][j] * arr2[j][k];
            }
        }
    }
    // TODO: Displaying the output ...
    cout << "The array after multiplication :" << endl;
    for (int i = 0; i < row3; i++)
    {
        for (int j = 0; j < col3; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}