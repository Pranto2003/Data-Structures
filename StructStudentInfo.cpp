#include <iostream>
using namespace std;
struct Students{
    int uniqueId;
    int numbersOfCreditCompleted;
    float cgpa;
};
int main(){
   Students stu[10];
   cout<<"Pranto Goswamee"<<endl;
   cout<<"22-49146-3"<<endl;
   cout<<"Data Structure Lab"<<endl;
   cout<<"----------------------"<<endl;
   cout<<"Enter the students infos "<<endl;
   for(int i=0; i<10; i++){
    cout<<"Enter the ID :"<<endl;
    cin>>stu[i].uniqueId;
    cout<<"Enter how many credit completed :"<<endl;
    cin>>stu[i].numbersOfCreditCompleted;
    cout<<"Enter the cgpa :"<<endl;
    cin>>stu[i].cgpa;
   }

   cout<<"Here are the list of students who scored more than 3.75 and who has already complete 50 credits :"<<endl;
   for(int i=0; i<10; i++){
    if(stu[i].numbersOfCreditCompleted>50 && stu[i].cgpa>=3.75){
        cout<<"ID :"<<stu[i].uniqueId<<endl;
        cout<<"Credit completed :"<<stu[i].numbersOfCreditCompleted<<endl;
        cout<<"Cgpa :"<<stu[i].cgpa<<endl;
    }
   }


    return 0;
}