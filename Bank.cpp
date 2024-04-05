#include <iostream>
using namespace std;
class Account
{
protected:
    string name;
    string nid;
    int age;

public:
    Account(string name, string nid, int age)
    {
        this->name = name;
        this->nid = nid;
        this->age = age;
    }
    void getAccount()
    {
        cout << this->name << endl;
        cout << this->nid << endl;
        cout << this->age << endl;
    }
};
class Savings : protected Account
{
private:
    float deposit = 0;

public:
    Savings(string name, string nid, int age, float deposit)
    {
        this->name = name;
        this->nid = nid;
        this->age = age;
        this->deposit +=deposit;
    }
    void getSavings()
    {
        this->getAccount();
    }

    float ammount()
    {
        return this->deposit;
    }
};

class Loan : protected Savings
{
private:
    float loanammount = 0;

public:
    Loan(string name, string nid, int age, float loanammount)
    {
        this->name = name;
        this->nid = nid;
        this->age = age;
        if (loanammount < this->ammount())
        {
            this->loanammount = +loanammount;
        }
    }
    void getLoan()
    {
        this->getAccount();
        cout << this->loanammount << endl;
    }
};
int main()
{
    string name, nid;
    int age;
    float loanammount, deposit;
    int choice;
    while (true)
    {
        cout << "Welcome to Business bank" << endl;
        cout << "1.Open Account " << endl;
        cout << "2. Start savings" << endl;
        cout << "3.Take Loan" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "1.Open Account " << endl;
            cout << "Enter your name :" << endl;
            cin >> name;
            cout << "Enter you NID :" << endl;
            cin >> nid;
            cout << "Enter your age :" << endl;
            cin >> age;
            Account acc(name, nid, age);
            acc.getAccount();
            break;
        case 2:
            cout << "2. Start savings" << endl;
            cout << "Enter your name :" << endl;
            cin >> name;
            cout << "Enter you NID :" << endl;
            cin >> nid;
            cout << "Enter your age :" << endl;
            cin >> age;
            for (int i = 0; i < 12; i++)
            {
                cout << "Enter the ammount for " << i << " month :" << endl;
                cin >> deposit;
                deposit +=deposit;
            }
            Savings sav(name, nid, age, deposit);
            sav.getSavings();
            break;

        case 3:
            cout << " 3. Take Loan" << endl;
            cout << "Enter your name :" << endl;
            cin >> name;
            cout << "Enter you NID :" << endl;
            cin >> nid;
            cout << "Enter your age :" << endl;
            cin >> age;
            cout << "How much do you want t o take loan :" << endl;
            cin >> loanammount;
            Loan loan(name, nid, age, loanammount);
            loan.getLoan();
            break;

        case 4:
            return 0;
            break;

        default:
            cout << "Invalid Choice" << endl;
            break;
        }

        return 0;
    }
}