//types_of_inheritance
//1.single_inheritance
//2.multiple_inheritance
//3.multilevel_inheritance
//4.hybrid_inheritance
//5.hierarchical_inheritance
#include<iostream>
using namespace std ; 
// class A
// {
//     public:
//     void display()
//     {
//         cout<<"Class A is called "<<endl;
//     }
// };
// class B : public A
// {
//     public:
//     void display()
//     {
//         cout<<"Class B is called "<<endl;
//     }
// };
// int main()
// {
//     B obj ; 
//     obj.A::display() ; 
//     obj.B::display() ;//IF THERE EXITS SAME NAME THEN SCOPE RESOLUTION OPERATOR IS USED 
// }//EXAMPLE OF SINGLE INHERITANCE && multilevel inheritance 
class A
{
    public:
    void display()
    {
        cout<<"Class A is called "<<endl;
    }
};
class B 
{
    public:
    void display()
    {
        cout<<"Class B is called "<<endl;
    }
};
class C : public B , public A
{
    public:
    void display()
    {
        cout<<"Class C is called "<<endl;
    }
};
int main()
{
    C obj ; 
    obj.A::display();
    obj.B::display() ; 
    obj.C::display() ; 
}