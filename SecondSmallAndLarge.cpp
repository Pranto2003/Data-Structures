#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array :"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements in array :"<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
   cout<<"The second largest :"<<arr[size-2]<<endl;
   cout<<"The second smallest :"<<arr[1]<<endl;

    return 0;
}
