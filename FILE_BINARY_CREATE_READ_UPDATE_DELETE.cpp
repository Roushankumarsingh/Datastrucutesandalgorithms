#include<iostream>
using namespace std ; 
#include<fstream>
#include<cstring>
#include<cmath>
#include<climits>
class Employee
{
    public:
    int id ; 
    char name[80] ; 
    char addr[100] ; 
    Employee(){} ; 
    void setnumber(int _id , string _name , string _addr)
    {
        id = _id ; 
        strcpy(name , _name.c_str()) ; 
        strcpy(addr , _addr.c_str()) ; 
    }
    void display()
    {
        cout<<"ID is :-"<<id<<"   "<< "Name :- "<<name<<"  "<<"Address is:- "<<addr<<endl; 
    }
};
void create(Employee obj)
{
    ofstream f ; 
    f.open("roushan.dat" , ios::binary | ios::app);
    f.write((char*)&obj , sizeof(obj)) ; 
    f.close() ;
}
void read()
{
    Employee obj ; 
    ifstream f("roushan.dat" , ios::binary);
    while(f.read((char*)&obj , sizeof(obj))) obj.display() ; 
    f.close() ; 
}
bool update(int id , string addr)
{
    bool found = false ; 
    Employee obj ; 
    fstream f("roushan.dat", ios::binary | ios::in | ios::out) ; 
    while(f.read((char*)&obj , sizeof(obj)))
    {
        if(obj.id == id)
        {
            found = true ; 
            strcpy(obj.addr , addr.c_str()) ; 
            f.seekg(f.tellg() - static_cast<long>(sizeof(obj)), ios::beg) ; 
            f.write((char*)&obj , sizeof(obj)) ; 
            break ; 
        }
    }
    f.close() ; 
    return found ; 
}
void del(int id)
{
    Employee obj ; 
    ifstream f("roushan.dat" , ios::binary) ; 
    ofstream temp("temp.dat",ios::binary) ; 
    while(f.read((char*)&obj , sizeof(obj)))
    {
        if(obj.id != id)
        {
            temp.write((char*)&obj , sizeof(obj)) ; 
        }
    }
    f.close() ; 
    temp.close() ; 
    remove("roushan.dat") ;
    rename("temp.dat" , "roushan.dat") ; 
}
int main()
{
    Employee a ; 
    a.setnumber(1 , "Roushan kumar singh " , "Sasaram ") ; 
    Employee b ; 
    b.setnumber(2 , "Yara singh " , "patna ") ; 
    // create(a) ; 
    // create(b);
    // read() ;
    // update(2,"Sasaram") ; 
    // read() ;
    del(2) ; 
    read() ;
}