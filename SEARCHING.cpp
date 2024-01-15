#include<iostream>
using namespace std ;
int main(){
    int size , i , num ,flag = 0 ;
    cout<<"Enter the size of the array ";
    cin>>size ; 
    int arr[2000] ;
    for(i=0;i<size;i++){
        cin>>arr[i] ;
    }
    cout<<"Enter the element to be searched in the array "<<endl;
    cin>>num ; 
    for(i=0;i<size;i++){
        if(arr[i]==num){
            cout<<num<<" Number is present in the array at index " << i <<endl;
            flag = 1 ;
            break ; 
        }
    }
    if(flag==1){
        cout<<"value is available "<<endl;
    }else{
        cout<<"Value is not available"<<endl;
    }
}