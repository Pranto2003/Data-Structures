#include <iostream>
using namespace std;
class Car
{
protected:
    string model;
    int price;

public:
    string modelName;
    int valueofcar;
    void setModel(string modelName)
    {
        model = modelName;
    }
    void getModel()
    {
        cout << "The model name is :" << model << endl;
    }
    void setPrice(int valueofcar)
    {
        price = valueofcar;
    }
    void getPrice()
    {
        cout << "The price of the car is :" << price << endl;
    }
};
class Bike:protected Car{
    private:
    int  bikeNumber;
    public :
        int bikecounter;
        void setbikecounter(int bikecounter,int price,string model){
        bikeNumber = bikecounter;
        setModel(model);
        setPrice(price);
        } 
        void getbikecounter(){
        cout << "Bike number :" << bikeNumber << endl;
        getModel();
        getPrice();
        }
        
};
int main()
{
        Bike b;
        b.setbikecounter(5,2000,"R15");
        b.getbikecounter();
        return 0;
}