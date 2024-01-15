#include<iostream>
using namespace std;
void rous(int num1,int num2)
{
    cout<<num1<<endl<<num2<<endl;
}
int add(int n1,int n2){
    rous(n1,n2) ;
    int sum = n1+n2 ;
    return sum ;
}
int mul(int q , int s){
    int mul = q*s;
    return mul ;
}
int main(){
    int n = 6 ; 
    int m = 7 ; 
    cout<<"The values are: "<<endl;
    cout<<add(n,m)<<endl;
    cout<<mul(n,m)<<endl;
    return 0 ;
}