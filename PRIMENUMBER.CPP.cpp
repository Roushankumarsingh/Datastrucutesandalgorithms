#include<iostream>
using namespace std ; 
int main(){
    int num , originalnum , flag = 0 ;
    cout<<"Enter a number "<<endl;
    cin>>num ;
    originalnum = num ;
    for(int i = 2 ; i<originalnum;i++){
        if(originalnum % i == 0){
            cout<<originalnum<<" The number is not prime "<<endl;
            flag = 1 ;
            break;
        }
    }
    if(flag==0){
        cout<<num<<" The number is prime "<<endl;
    }else{
        cout<<num<<" The number is not prime"<<endl;
    }
    return 0 ;
}