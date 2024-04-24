#include <iostream>
using namespace std;
int main()
{
    int arr1[5],arr2[5];
    int arr3[10];
    int index=0;
    cout<<"Enter the elements in array 1:"<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>arr1[i];
    }
    cout<<endl;
    cout<<"Enter the elements in array 2:"<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>arr2[i];
    }
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(arr1[i]==arr2[j])
            {
                arr3[index]=arr1[i];
                index++;
                break;
            }
        }
    }
cout<<"Common elements :"<<endl;
    for(int i=0; i<index; i++)
    {
        cout<<arr3[i]<<" ";
    }
    if(index==0)
    {
        cout<<"No common elements "<<endl;
    }



    return 0;
}
