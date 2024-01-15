#include<iostream>
using namespace std ; 
class power
{
    public:
    int n ; 
    power(){} ; 
    power(int n1)
    {
        n = n1;
    }
    void display()
    {
        cout<<"Power :- "<<n ; 
    }
};
class printer : virtual public power
{
    public:
    string name ; 
    printer(){} ; 
    printer(int n1 , string s) : power(n1)
    {
        name = s ; 
    }
    void dis()
    {
        cout<<"Printer :- "<<name<<endl;
    }
};
class scanner : virtual public power
{
    public :
    string nam ; 
    scanner(){} ; 
    scanner(int n1 , string r) : power(n1)
    {
        nam = r ; 
    }
    void disp()
    {
        cout<<"Scanner :-"<<nam<<endl;
    }
};
class Copier : public printer , public scanner 
{
    public:
    Copier(){} ;
    Copier(int n1 ,string s , string r) : power(n1)
    {
        name = s ; 
        nam = r ; 
    }
    void print()
    {
        power::display() ; 
        cout<<endl;
        cout<<"Scanner :- "<<name<<" "<<"Printer :- "<<nam<<endl;
        // printer::dis() ; 
        // scanner::disp() ; 
    }
};
int main()
{
    int choice ; 
    cin>>choice ; 
    if(choice == 1)
    {
        int n ; 
        cin>>n ; 
        string name ;
        cin>>name ; 
        string nam ; 
        cin>>nam;
        Copier obj(n,name , nam) ; 
        obj.print() ; 
    }
    else if(choice == 2)
    {
        int n ; 
        cin>>n ;
        string name ; 
        cin>>name ;
        scanner obj1(n,name) ; 
        obj1.disp();
    }
    else if(choice == 3)
    {
        int n ; 
        cin>>n ; 
        string nam;
        cin>>nam ; 
        printer obj2(n , nam) ;
        obj2.dis() ; 
    }
    else
    {
        cout<<"Invalid choice "<<endl;
    }
}