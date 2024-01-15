#include<iostream>
using namespace std;
class A 
{
    public:
    void display()
    {
        cout<<"Hi , Roushan !! "<<endl;
        cout<<"How are you "<<endl;
    }
};
class B : virtual public A //virtual keyword is used to choose one way automatically 
{
    public:
    void dis()
    {
        cout<<"I am Utkarsh "<<endl;
    }
};
class C : virtual public A // we have to make both of the class that is inherited from a and b and c class inherit class d so compiler gets confused 
{ 
    public:
    void disp()
    {
        cout<<"We are best friends "<<endl;
    }
};
class D : public B , public C 
{
    public:
    void displ()
    {
        cout<<"I am choti pyarri bachi"<<endl;
    }
};
int main()
{
    D obj ; 
    obj.display() ; 
    obj.dis() ; 
    obj.disp() ; 
    obj.displ() ; 
}