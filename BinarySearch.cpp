#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key)
{
    int s=0;
    int e=size;

    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return -1;

}


int main()
{
    int size,key;
    cout<<"Pranto Goswamee"<<endl;
    cout<<"22-49146-3"<<endl;
    cout<<"Data Structure Lab"<<endl;
    cout<<"----------------------"<<endl;
    cout<<"Enter the size of array :"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array :"<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Which element do you want to search ?"<<endl;
    cin>>key;
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
    cout<<"The Sorted Array is :"<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Array index of the element :"<<binarySearch(arr,size,key)<<endl;

    return 0;
}
