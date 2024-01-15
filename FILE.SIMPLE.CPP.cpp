#include<string>
#include<fstream>
#include<iostream>
using namespace std ; 
int main()
{
    fstream myfile ; 
    myfile.open("Roushankumarsingh.txt",ios::out);
    if(myfile)
    {
        myfile<<"This is Roushan kumar singh"<<endl;
        myfile<<"Roushan kumar singh is the best in the world"<<endl;
        myfile.close() ;
    }
    myfile.open("Roushankumarsingh.txt",ios::out | ios::app);
    if(myfile.is_open())
    {
        myfile<<"the only person who changed my life is "<<endl;
        myfile<<"I can not expose his/her name "<<endl;
        myfile.close() ;
    }
    myfile.open("Roushankumarsingh.txt",ios::in);
    if(myfile)
    {
        string line;
        while(getline(myfile,line))
        {
            cout<<line<<endl;
        }
    }
    myfile.close() ;
    cout<<"The current position of the last word of the file : "<<myfile.tellp() <<endl;
    cout<<myfile.tellg() ;
}