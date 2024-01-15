#include<iostream>
using namespace std ; 
int main(){
    int year , originalyear ; 
    cout<<"Enter a year "<<endl;
    cin>>year ; 
    originalyear = year ; 
    if(originalyear % 400 == 0){
        cout<<originalyear<<" The year is leap year "<<endl;
    }
    else if(originalyear % 100 == 0 ){
        cout<<originalyear<<" The year is not leap year "<<endl;
    }
    else if(originalyear % 4 == 0 ){
        cout<<originalyear<<" The year is leap year"<<endl;
    }
    else{
        cout<<"The year is not leap year" <<endl;
    }
}