#include<iostream>
using namespace std;
int main(){
    int num , originalnum , rem , result = 0 ;
    cout<<"Enter a number "<<endl;
    cin>>num ; 
    originalnum = num ; 
    while(originalnum != 0 ){
        rem = originalnum %10 ;
        result = result + rem*rem*rem ; 
        originalnum = originalnum/10 ;
    }
    if(result ==num){
        cout<<num<<" The number is armstrong"<<endl;
    }
    else{
        cout<<num<<" The number is not armstrong"<<endl;
    }
}