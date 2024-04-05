#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter total row numbers :" << endl;
    cin >> row;
    col = row;
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
            
        }
    }
   

    return 0;
}