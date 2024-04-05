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
        cout << "Name: " << this->name << endl;
        cout << "NID: " << this->nid << endl;
        cout << "Age: " << this->age << endl;
    }
};

class Savings : public Account
{
private:
    float deposit = 0;

public:
    Savings(string name, string nid, int age) : Account(name, nid, age) {}

    void addDeposit(float amount)
    {
        this->deposit += amount;
    }

    void getSavings()
    {
        this->getAccount();
        cout << "Total deposit: " << this->deposit << endl;
    }

    float amount()
    {
        return this->deposit;
    }
};

class Loan : public Account
{
private:
    float loanAmount = 0;

public:
    Loan(string name, string nid, int age, float loanAmount)
        : Account(name, nid, age)
    {
        if (loanAmount > 0)
        {
            this->loanAmount = loanAmount;
        }
    }

    void getLoan()
    {
        this->getAccount();
        cout << "Loan amount: " << this->loanAmount << endl;
    }
};

int main()
{
    string name, nid;
    int age;
    float loanAmount, deposit;
    int choice;

    while (true)
    {
        cout << "Welcome to Business bank" << endl;
        cout << "1. Open Account " << endl;
        cout << "2. Start savings" << endl;
        cout << "3. Take Loan" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "1. Open Account " << endl;
            cout << "Enter your name: ";
            cin >> name;
            cout << "Enter your NID: ";
            cin >> nid;
            cout << "Enter your age: ";
            cin >> age;
            Account acc(name, nid, age);
            acc.getAccount();
            break;

        case 2:
            cout << "2. Start savings" << endl;
            cout << "Enter your name: ";
            cin >> name;
            cout << "Enter your NID: ";
            cin >> nid;
            cout << "Enter your age: ";
            cin >> age;
            cout << "Enter how much money you want to Deposit now?" << endl;
            cin >> deposit;
            Savings sav(name, nid, age);
            sav.addDeposit(deposit);
            sav.getSavings();
            break;
        }
    }
}
