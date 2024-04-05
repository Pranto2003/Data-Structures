#include <iostream>
#include <stack>
using namespace std;
void previousSmallerElement(int arr[],int size){
    stack<int> st;
    for (int i = 0; i < size; i++){
        //TODO-> if the current element is smaller than the 
        //TODO-> top element of stack and if the stack is not empty then
        //TODO-> starting poping till the stack become empty
        while(!st.empty() && st.top()>arr[i]){
            st.pop();
        }
        //TODO-> If the stack is empty then print -1
        if(st.empty()){
            cout << -1 <<" ";
        }
        //TODO->   If the top element of stack is smaller than 
        //TODO-> the current element then print the top element
        //TODO-> and push the current element in the stack
        else{
            cout << st.top() <<" ";
        }
        st.push(arr[i]);
    }
}
int main(){
    int size;
    cout << "Enter the size  of array :" << endl;
    cin >> size;
    int array[size];
    //TODO->  Taking input in array from the user
    cout << "Enter the elements in array :" << endl;
    for (int i = 0; i < size; i++){
        cin >> array[i];
    }
    //TODO-> Displaying the array after taking input
    cout << "Here is the array :" << endl;
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    cout << endl;
    //TODO-> Calling the function
    previousSmallerElement(array,size);
    return 0;
}