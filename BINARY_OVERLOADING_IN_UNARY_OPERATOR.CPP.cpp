#include<iostream>
using namespace std ;
class distanc
{
    private:
    int feet , inch ; 
    public:
    void setnumber(int n1 , int n2)
    {
        feet = n1 ; 
        inch = n2 ; 
    }
    distanc(){} ; 
    distanc(int a, int b)
    {
        this->feet = a ; 
        this->inch = b ; 
    }
    distanc operator +(distanc &obj2)
    {
        distanc obj3 ;
        obj3.feet = this->feet + obj2.feet ; 
        obj3.inch = this->inch + obj2.inch ;
        return obj3 ; 
    }
    void display()
    {
        cout<<"The distance is:- "<<feet<<"'"<<inch<<endl;
    }
};
int main()
{
    distanc obj1 ; 
    obj1.setnumber(6,4) ; 
    obj1.display() ; 
    distanc obj2(12,7) ; 
    obj2.display() ;
    distanc obj3;
    obj3 = obj1+obj2 ; 
    obj3.display() ; 
}