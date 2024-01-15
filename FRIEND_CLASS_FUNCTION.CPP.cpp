#include<iostream>
using namespace std  ;
// class complex 
// {
//     private:
//     int a , b ; 
//     friend class calculator ; //making class calculator friend to complex class 
//     public:
//     void setnumber(int n1 , int n2)
//     {
//         a = n1 ; 
//         b = n2 ; 
//     }
//     complex(){} ; 
//     complex(int a , int b)
//     {
//         this->a = a ; 
//         this->b = b ; 
//     }
//     void display()
//     {
//         cout<<a<<" "<<b<<endl;
//     }
// };
// class calculator
// {
//     public:
//     int realsum(complex  ,complex );
//     int realsumcomplex(complex , complex) ; 
// };
// int calculator :: realsum(complex o1 , complex o2)
// {
//         return o1.a+o2.a ; 
// }
// int calculator :: realsumcomplex(complex o1 , complex o2)
// {
//         return o1.b+o2.b ; 
// }
// int main()
// {
//     complex obj1 , obj2 ;
//     obj1.setnumber(1,4) ; 
//     obj2.setnumber(5,8) ; 
//     obj1.display() ; 
//     obj2.display() ; 
//     calculator calc ; 
//     int res = calc.realsum(obj1,obj2) ; 
//     int res1 = calc.realsumcomplex(obj1,obj2) ; 
//     cout<<res<<endl; 
//     cout<<res1<<endl;
// }
class distanc
{
    private:
    int a , b ; 
    friend distanc realsum(distanc o1 , distanc o2) ; 
    public:
    void setnumber(int n1 , int n2)
    {
        a= n1 ;
        b = n2 ; 
    }
    void display()
    {
        cout<<a<<" " <<b<<endl;
    }
};
distanc realsum(distanc o1 , distanc o2)
{
    distanc o3 ; 
    o3.setnumber((o1.a+o2.a), (o1.b+o2.b)) ; 
    return o3 ; 
}
int main()
{
    distanc obj1 ,obj2 ,sum; 
    obj1.setnumber(1,4) ; 
    obj2.setnumber(5,8) ; 
    obj1.display() ; 
    obj2.display() ;
    sum = realsum(obj1,obj2) ; 
    sum.display() ; 
}