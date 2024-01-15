// #include<iostream>
// using namespace std ; 
// // class person
// // {
// //     public:
// //     void print(int a , int b)
// //     {
// //         cout<<"Multiplication of the numbers are "<<a*b<<endl ; 
// //     }
// //     void print(int a , int b , int c , int d , int e)
// //     {
// //         cout<<"Addition of the numbers are "<<(a+b+c+d+e)<<endl;
// //     }
// // };
// // int main()
// // {
// //     person obj ; 
// //     obj.print(10,20) ; 
// //     obj.print(10,20,30,40,50) ;
// //     return 0 ; 
// // }
// // class person
// // {
// //     private:
// //     int a , b ;
// //     public:
// //     person(){} ; 
// //     person(int a , int b)
// //     {
// //         this->a = a ; 
// //         this->b = b ; 
// //     }
// //     person operator + (person obj1)
// //     {
// //         person obj6 ; 
// //         obj6.a = a+obj1.a ; 
// //         obj6.b = b+obj1.b  ; 
// //         return obj6 ; 
// //     }
// //     void display() 
// //     {
// //         cout<<a<<" "<<b<<endl;
// //     }
// // };
// // int main()
// // {
// //     person obj(5,6) , obj2(6,5) ; 
// //     person obj3 ; 
// //     obj3 = obj+obj2 ; 
// //     obj3.display() ; 
// // }
// class calculator  ; 
// class person
// {
//     private:
//     int a ; 
//     int b ; 
//     // friend person sumcomplex(person o1 , person o2) ;
//     friend class calculator ;
//     public:
//     void setnumber(int n1 , int n2)
//     {
//         a = n1 ; 
//         b = n2 ; 
//     }
//     person(){} ; //default constructor 
//     person(int a , int b)
//     {
//         this->a = a ; 
//         this->b = b ; 
//     }
//     void display()
//     {
//         cout<<"The value are :- "<<a<<" and "<<b<<endl;
//     }
// };
// // person sumcomplex(person o1 , person o2)
// // {
// //     person obj3 ;
// //     obj3.a = o1.a+o2.a ;
// //     obj3.b = o1.b+o2.b ; 
// //     return obj3 ; 
// // }
// // int main()
// // {
// //     person obj1(11,50) , obj2(12,45) ; 
// //     person obj3 ; 
// //     obj3 = sumcomplex(obj1,obj2) ; 
// //     obj3.display() ; 
// // }
// class calculator
// {
//     public:
//     int realsum(person ,person ) ; 
//     int realsumcomplex(person , person );
// };
// int calculator :: realsum(person o1 , person o2)
// {
//     return (o1.a + o2.a) ; 
// }
// int calculator :: realsumcomplex(person o1 , person o2)
// {
//     return (o1.b + o2.b) ; 
// }
// int main()
// {
//     person obj1(5,6) , obj2(10,20) ; 
//     calculator calc ; 
//     int res = calc.realsum(obj1,obj2) ; 
//     int res1 = calc.realsumcomplex(obj1 , obj2) ; 
//     cout<<res<<endl;
//     cout<<res1<<endl;
// }
#include<iostream>
using namespace std ; 
class person
{
    public:
    virtual void print()
    {
        cout<<"The function of the base class is called "<<endl;
    }
};
class pug : public person
{
    public:
    void print()
    {
        cout<<"The function of the derived class is called "<<endl;
    }
};
int main()
{
    person* obj ; 
    pug obj1 ; 
    obj = &obj1 ; 
    obj->print() ; 
}