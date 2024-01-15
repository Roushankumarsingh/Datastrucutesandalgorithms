#include<iostream>
using namespace std ;
int main(){
    int arr[50] , size  ,i , inselem ; 
    cout<<"Enter the size of the element " ; 
    cin>>size ; 
    for(i=0 ; i<size ; i++){
        cin>>arr[i] ;
    }
    cout<<"Enter the number to insert in the array ";
    cin>>inselem ; 
    arr[i] = inselem ; 
    for(i=0 ; i<(size+1) ; i++){
        cout<<arr[i]<<" " ;
    }
    return 0 ;
}