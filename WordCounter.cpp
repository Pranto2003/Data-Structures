#include <iostream>
using namespace std;
int main(){
    string sentence;
    cout << "Enter the sentence :" << endl;
    getline(cin, sentence);
    int length = sentence.length();
    int count = 1;
    for (int i = 0; i < length; i++){
        if(sentence[i]==' '){
            count++;
        }
    }
    cout << "There are " << count << " words" << endl;
    return 0;
}