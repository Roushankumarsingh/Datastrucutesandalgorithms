#include<iostream>
using namespace std ; 
int main(){
    int i , n , pos , val ; 
    cout<<"Enter the size of the array "<<endl;
    cin>>n ; 
    int arr[100] ; 
    for(i = 0 ; i< n ; i++){
        cin>>arr[i] ;
    }
    cout<<"The position of the element in the array"<<endl;
    cin>>pos ; 
    cout<<"Enter the value of the element "<<endl;
    cin>>val ; 
    for(i =n-1 ;i>=pos-1 ; i--){
        arr[i+1] = arr[i] ; 
    }
    arr[pos-1] = val ;
    for(i = 0 ;i<n+1 ; i++){
        cout<<arr[i]<<" " ;
    }
}