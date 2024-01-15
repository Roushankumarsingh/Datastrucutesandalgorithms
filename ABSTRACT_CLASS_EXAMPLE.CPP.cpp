#include<iostream>
using namespace std ; 
class data
{
    public:
    virtual void display() = 0 ; 
};
class accountant : public data 
{
    public:
    void display() 
    {
        cout<<"This is the function of the accountant class "<<endl;
    }
};
class manager:public data 
{
    public:
    void display()
    {
        cout<<"This is the function of the manager class "<<endl;
    }
};
class similar : public data
{
    public:
    void display()
    {
        cout<<"This is the function of the similar class "<<endl;
    }
};
int main()
{
    // cout<<"This is the example of abstract class "<<endl;
    // accountant obj  ; 
    // obj.display() ;
    // manager obj1 ; 
    // obj1.display() ; 
    // similar obj2 ; 
    // obj2.display() ; 
    // return 0 ; 
    data *base ;
    similar obj ; 
    base = &obj ; 
    base->display() ;// in abstract class we cannot create object of the base class but we can create pointer of the abstract class
    accountant obj1 ; 
    data *base1 ; 
    base1 = &obj1;
    base1->display() ; 
}