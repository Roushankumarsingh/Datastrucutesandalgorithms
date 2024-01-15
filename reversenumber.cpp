#include<iostream>
using namespace std;
int main(){
    int num , originalnum , rem , reverse = 0 ;
    cout<<"Enter a number "<<endl;
    cin>>num ; 
    originalnum = num ;
    while(originalnum !=0){
        rem = originalnum % 10 ;
        reverse = reverse*10 + rem ;
        originalnum = originalnum / 10 ;
    }
    cout<<"The reverse of the number is "<<reverse<<endl;
}