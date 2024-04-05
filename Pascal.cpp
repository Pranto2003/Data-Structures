#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter total row numbers :" << endl;
    cin >> row;
    col = row + 2;
    int arr[row][col];
    int arr2[row][col];
    cout << "Enter the elements in array :" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j > 0 && j < col)
            {
                arr2[i][j] += arr[i][j];
            }
        }
    }
    cout << "PASCAL ARRAY :" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}