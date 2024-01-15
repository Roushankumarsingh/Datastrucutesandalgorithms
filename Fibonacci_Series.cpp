#include<iostream>
using namespace std ; 
int main(){
    int num , originalnum , n1 = 0 , n2 = 1 , next_term ; 
    cout<<"Enter the number of elements "<<endl;
    cin>>num ; 
    originalnum = num ; 
    cout<<"Finonacci Series is " ; 
    cout<<n1<<" "<<n2<<" ";
    for(int i= 0 ; i<=originalnum ; i++){
        next_term = n1+n2 ; 
        n1 = n2 ; 
        n2 = next_term ; 
        cout<<next_term<<" " ; 
    }
    return 0 ;
}