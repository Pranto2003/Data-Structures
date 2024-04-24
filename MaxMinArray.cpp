#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array :"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements :"<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    int Evenmax=arr[0];
    int  Evenmin=arr[0];
    for(int i=0; i<size; i++)
    {
        if(arr[i]%2==0)
        {
            if(arr[i]>Evenmax)
            {
                Evenmax=arr[i];
            }


            if(arr[i]<Evenmin)
            {
                Evenmin=arr[i];
            }
        }
    }
    cout<<"Maximum element of even numbers :"<<Evenmax<<endl;
    cout<<"Minimum element of even numbers :"<<Evenmin<<endl;

    int Oddmax=arr[0];
    int  Oddmin=arr[0];

    for(int i=0; i<size; i++)
    {

        if(arr[i]%2!=0)
        {
            if(arr[i]>Oddmax)
            {
                Oddmax=arr[i];
            }


            if(arr[i]<Oddmin)
            {
                Oddmin=arr[i];
            }
        }

    }
    cout<<"Maximum element of odd numbers :"<<Oddmax<<endl;
    cout<<"Minimum element of odd numbers:"<<Oddmin<<endl;

    return 0;
}
