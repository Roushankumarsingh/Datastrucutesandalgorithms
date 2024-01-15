#include<iostream>
using namespace std; 
class weight
{
    private:
    int kg ; 
    public:
    weight()
    {
        // kg = 0 ; 
    }
    weight(int x)
    {
        kg = x ; 
    }
    void printweight()
    {
        cout<<"The weight in kg is "<<kg<<endl;
    }
    weight operator ++()
    {
        weight temp ; 
        temp.kg = ++kg ; 
        return temp ;
        //kg++ ; 
    }
    weight operator ++(int)
    {
        weight temp ; 
        temp.kg = kg++ ; 
        return temp ; 
    }
    weight operator -- ()
    {
        weight temp ; 
        temp.kg = --kg ; 
        return temp ; 
    }
    weight operator --(int)
    {
        weight temp ;
        temp.kg = kg-- ; 
        return temp ; 
    }
};
int main()
{
    weight a , b ;
    a = ++b ; 
    ++a ; 
    a.printweight() ; 
    b = --a ; 
    b++ ; 
    b.printweight() ; 
}