#include <iostream>
using namespace std;
int main()
{
    int ammount;
    int thousandCounter=0,fivehundredCounter=0,twohundredCounter=0,onehundredCounter=0,fiftyCounter=0,twentyCounter=0,tenCounter=0,fiveCounter=0,twoCounter=0,oneCounter=0;
    cout << "Enter your ammount: " ;
    cin >> ammount;

    while (ammount != 0)
    {
        if (ammount >= 1000)
        {
            ammount = ammount - 1000;
            thousandCounter++;
            continue;
        }


        if (ammount >= 500)
        {
            ammount = ammount - 500;
            fivehundredCounter++;
            continue;
        }
        if (ammount >= 200)
        {
            ammount = ammount - 200;
            twohundredCounter++;
            continue;
        }
        if (ammount >= 100)
        {
            ammount = ammount - 100;
            onehundredCounter++;
            continue;
        }
        if (ammount >= 50)
        {
            ammount = ammount - 50;
            fiftyCounter++;
            continue;
        }
        if (ammount >= 20)
        {
            ammount = ammount - 20;
            twentyCounter++;
            continue;
        }
        if (ammount >= 10)
        {
            ammount = ammount - 10;
            tenCounter++;
            continue;
        }
        if (ammount >= 5)
        {
            ammount = ammount - 5;
            fiveCounter++;
            continue;
        }
        if (ammount >= 2)
        {
            ammount = ammount - 2;
            twoCounter++;
            continue;
        }
        if (ammount >= 1)
        {
            ammount = ammount - 1;
            oneCounter++;
            continue;
        }



    }

    cout << "Thousand note : " << thousandCounter << endl;
    cout << "500 note : " << fivehundredCounter << endl;
    cout << "200 note : " << twohundredCounter << endl;
    cout << "100 note : " << onehundredCounter << endl;
    cout << "50 note : " << fiftyCounter << endl;
    cout << "20 note : " << twentyCounter << endl;
    cout << "10 note : " << tenCounter << endl;
    cout << "5 note : " << fiveCounter << endl;
    cout << "2 note : " << twoCounter << endl;
    cout << "1 note : " << oneCounter << endl;
    return 0;
}
