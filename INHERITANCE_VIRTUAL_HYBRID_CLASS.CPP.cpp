#include<iostream>
using namespace std ; 
// #include<cstring>
class A 
{
    public:
    int roll ; 
    char name[90]; 
    void get()
    {
        cout<<"Enter the roll of the student :- "<<endl;
        cin>>roll ; 
        cout<<"Enter the name of the student :- "<<endl;
        cin>>name ; 
    }
    void display() 
    {
        cout<<"Roll is :- "<<roll<<endl<<"Name is :- "<<name<<endl;
    }
};
class B : virtual public A 
{
    public:
    int marks1 ; 
    int marks2 ; 
    void get_b()
    {
        cout<<"Enter the marks of the physics subject : - "<<endl;
        cin>>marks1 ; 
        cout<<"Enter the marks of the maths subject :- "<<endl;
        cin>>marks2 ; 
    }
    void disp()
    {
        cout<<"Marks of physics is :- "<<marks1<<endl<<"marks of maths is :- "<<marks2 <<endl; 
    }
};
class C : virtual public A 
{
    public:
    int marks3 ; 
    int marks4 ; 
    void get_c()
    {
        cout<<"Enter the External marks of the physics : - "<<endl;
        cin>>marks3 ; 
        cout<<"Enter the external marks of the maths :- "<<endl;
        cin>>marks4 ; 
    }
    void dis()
        {
            cout<<"External marks of physics is :- "<<marks3 <<endl<<"External marks of the maths is :- "<<marks4<<endl;
        }
};
class D : public B , public C 
{
    public:
    int res1;
    int res2 ; 
    void dislay()
    {
        res1 = marks1+marks3 ; 
        res2 = marks2+marks4 ; 
        cout<<"Total marks of the physics is :-"<<res1 <<endl;
        cout<<"Total marks of the maths is :- "<<res2<<endl;
    }
};
int main()
{
    D obj ; 
    obj.A::get() ; 
    obj.display() ; 
    obj.get_b() ; 
    obj.disp() ; 
    obj.get_c() ; 
    obj.dis() ; 
    obj.dislay() ; 
    // obj.marks5 = 
}