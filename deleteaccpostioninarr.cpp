#include<iostream>
using namespace std ;
int main()
{
    int arr[2000] , i , pos , n ;
    cout<<"Enter the size of the array"<<endl;
    cin>>n ; 
    for(i=0;i<n;i++){
        cin>>arr[i] ;
    }
    cout<<"Enter the positon to be deleted"<<endl;
    cin>>pos ; 
    for(i=pos;i<n ; i++){
        arr[i] = arr[i+1] ;
    }
    if(pos>n){
        cout<<"Positon is invlaid "<<endl;
    }
    else{
        cout<<"After deletion the array becomes"<<endl;
        for(i=0;i<n-1;i++){
            cout<<arr[i]<<" " ; 
        }
    }
    return 0 ;
}