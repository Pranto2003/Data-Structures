#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the arrays: ";
    cin >> size;

    int arr1[size];
    int arr2[size];
    int newSize=size*2;
    int mergedArray[newSize];

    cout << "Enter the elements of the first array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the elements of the second array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr2[i];
    }



    // Merge the arrays
    for (int i = 0; i < size; i++)
    {
        mergedArray[i] = arr1[i];
    }
    for (int i = 0; i < size; i++)
    {
        mergedArray[i + size] = arr2[i];
    }




    cout << "Merged array:" << endl;
    for (int i = 0; i <newSize; i++)
    {
        cout << mergedArray[i] << " ";
    }
    cout << endl;
    cout<<"Array in reverse :"<<endl;
    for(int i=newSize-1; i>=0; i--)
    {
        cout<<mergedArray[i]<<" ";
    }
    cout<<endl;

    return 0;
}

