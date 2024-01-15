#include<iostream>
using namespace std ; 
#include<string>
#include<cmath>
#include<iomanip>
class cars{
    private:
    string company_name ; 
    string model_name ; 
    string fuel_type ; 
    float milage ; 
    double price ; 
    public:
    cars()
    {
        cout<<"Default constructor is called "<<endl;
    }
    cars(string cname ,string mname ,string fuel , float milage_ , double price_)
    {
        cout<<"Parametrised constructor is called "<<endl;
        company_name = cname ; 
        model_name = mname ; 
        fuel_type = fuel ; 
        milage = milage_ ; 
        price = price_ ; 
    }
    cars(cars &obj)
    {
        cout<<"Copy constructor is called" <<endl;
        company_name = obj.company_name ; 
        model_name = obj.model_name ; 
        fuel_type = obj.fuel_type ; 
        milage = obj.milage ; 
        price = obj.price ;
    }
    void setdata(string cname ,string mname ,string fuel , float milage_ , double price_ ){
        company_name = cname ; 
        model_name = mname ; 
        fuel_type = fuel ; 
        milage = milage_ ; 
        price = price_ ; 
    }
    void display(){
        cout<<"Car properties "<<endl;
        cout<<"Company name of the car is "<<company_name<<endl;
        cout<<"Model name of the car is "<<model_name<<endl;
        cout<<"Fuel used in the car is "<<fuel_type<<endl;
        cout<<"Milage of the car is in km "<<milage <<endl;
        cout<<"The price of the car is "<<price<<endl<<endl<<endl;
    }
    ~cars(){
        cout<<"Default constructor is called "<<endl;
    }
};
int main()
{
    cars car1 ; 
    car1.setdata("Toyota" , "Mercedes","Diesel",10 , 100000000);
    car1.display() ; 
    cars car2("Toyota","Fortuner","Diesel",15.5 , 100472354);
    car2.display() ;
    cars car3 = car1 ; 
    car3.display() ; 
}