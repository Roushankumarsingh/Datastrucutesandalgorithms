#include<iostream>
using namespace std ;
class A 
{
    public:
    void display()
    {
        cout<<"A display is called "<<endl;
    }
};
class B 
{
    public:
    void display()
    {
        cout<<"B display is called "<<endl;
    }
};
class C : public A , public B 
{
    public:
    // void display()
    // {
    //     // cout<<"C display is called "<<endl;
    // }
    void display()
    {
        A::display() ; 
        B::display() ; 
    }
};
int main()
{
    C obj ; 
    // obj.display() ; // by default C display is called because in display arguments are over there in Class c
    // if we have to display A then we have two technique one is in main ad anothe is in Class C function both have the same value 
    obj.A::display() ;//by direct calling 
    obj.B::display() ;
    obj.display() ; 
}