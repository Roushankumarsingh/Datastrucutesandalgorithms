#include<iostream>
using namespace std ; 
#include<algorithm>
#include<cmath>

int fibonacci(int n) {
    if((n==0) || (n==1)){
        return n ;
    }else{
        return fibonacci(n-1) + fibonacci(n-2) ;
    }
}
int main(){
    int n , i ; 
    cout<<"Enter the number to be loop rotate"<<endl;
    cin>>n ; 
    cout<<"Fibonacci Series: "<<endl;
    for(i=0;i<n;i++){
        cout<<fibonacci(i)<<" " ;
    }
    return 0 ;
}