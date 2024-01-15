#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
#include<stdio.h>
using namespace std ; 
class Employee{
    public:
    int id ; 
    char name[50] ;
    char addr[100] ;
    // string name ; 
    // string addr ; 
    Employee()
    {
        // cout<<"default constructor is called "<<endl;
    }
    Employee(int _id , string _name , string _addr)
    {
        id = _id ; 
        // name = _name.c_str() ; 
        // addr = _addr.c_str() ;
        strcpy(name,_name.c_str()) ; 
        strcpy(addr,_addr.c_str()) ; 
    }
    void show()
    {
        cout<<"Id is "<<id<<endl<<"Name is "<<name<<endl<<"Address is "<<addr<<endl;
    }
};
void create(Employee obj)
{
    ofstream myfile ; 
    myfile.open("Roushankumarsingh.dat",ios::binary | ios::app);
    myfile.write((char*)&obj , sizeof(obj)) ;
    myfile.close() ; 
}
void read()
{
    Employee obj ; 
    ifstream myfile ; 
    myfile.open("Roushankumarsingh.dat",ios::binary) ; 
    while(myfile.read((char*)&obj , sizeof(obj)))
    {
        obj.show() ; 
    }
    myfile.close() ; 
}
// bool update(int id)
// {
//     bool found = false ; 
//     Employee obj ; 
//     fstream myfile ; 
//     myfile.open("Roushankumarsingh.dat",ios::in | ios::out | ios::binary) ; 
//     while(myfile.read((char*)&obj ,sizeof(obj)))
//     {
//         if(obj.id = id)
//         {
//             found = true ; 
//             strcpy(obj.addr , addr.c_str()) ; 
//             myfile.seekg(myfile.tellg()-sizeof(obj) , ios::beg) ; 
//             myfile.write((char*)&obj , sizeof(obj)) ; 
//             break ; 
//         }
//     }
//     // return found ;
// }
void del(int id)
{
    Employee obj ;
    ifstream myfile ; 
    myfile.open("Roushankumarsingh.dat",ios::binary) ;
    ofstream temp("details.dat",ios::binary) ;
    while(myfile.read((char*)&obj ,sizeof(obj)))
    {
        if(obj.id != id)
        {
            temp.write((char*)&obj ,sizeof(obj)) ; 
        }
    }
    myfile.close() ; 
    temp.close() ; 
    remove("Roushankumarsingh.dat") ; 
    rename("details.dat","Roushankumarsingh.dat") ; 
}
void update(int id ,string addr)
{
    Employee obj ;
    int flag = 0 ; 
    fstream myfile("Roushankumarsingh.dat",ios::binary);
    myfile.seekg(0) ;
    while(myfile.read((char*)&obj , sizeof(obj)))
    {
        if(obj.id == id)
        {
            int flag = 1 ; 
            strcpy(obj.addr , addr.c_str()) ; 
            myfile.seekp(-sizeof(obj) , ios::beg) ; 
            myfile.write((char*)&obj , sizeof(obj)) ; 
        }
    }
    if(flag==0)
    {
        cout<<"ID is not found in this file"<<endl;
    }
    myfile.close() ; 
}
int main()
{
    Employee a(1 , "Roushan kumar singh","sasaram") ; 
    Employee b(2,"Utkarsh singh ","chapra");
    // a.show();
    // b.show();
    // create(a) ; 
    // create(b) ; 
    // read() ; 
    // read() ;https://www.onlinegdb.com/#tab-stdin 
    // del(2) ; 
    // read() ; 
    // del(12209740) ; 
    // read() ; 
    // create(a) ;
    // create(b) ;
    // read() ;
    update(2,"Chandigarh") ;
    read() ;
}