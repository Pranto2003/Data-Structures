#include <iostream>
using namespace std;
void encode(string s, int j){
    int length=s.length();
    for(int i=0; i<length; i++){
        char a=s[i];
        a+=j;
        cout<<a<<" ";
    }
    cout<<endl;
}
int main(){
    int number;
    string sentence;
    int increase;
    cout<<"Pranto Goswamee"<<endl;
    cout<<"22-49146-3"<<endl;
    cout<<"Data Structure Lab"<<endl;
    cout<<"----------------------"<<endl;
    cout<<"How many times you want to cipher :"<<endl;
    cin>>number;
    cin.ignore();
    for(int i=0; i<number; i++){
    cout<<"Enter the sentence "<<endl;
    getline(cin,sentence);
    cout<<"Enter number by which you want to increment"<<endl;
    cin>>increase;
    encode(sentence,increase);
    cin.ignore();
    }
   



    return 0;
}