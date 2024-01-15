#include<iostream>
using namespace std ;
int main(){
    int n ; 
    cout<<"Enter the value of the number in array"<<endl;
    cin>>n ;
    int arr[n] ; 
    cout<<"Enter the element  of the array "<<endl;
    for(int i= 0 ;i<n ;i++){
        cin>>arr[i] ;
    }
    for(int i=0 ; i<n ; i++){
        for(int j= i+1 ; j<n ; j++){
            if(arr[i]>arr[j]){
                int sort = arr[i] ;
                arr[i] = arr[j] ;
                arr[j] = sort ; 
            }
        }
    }
    cout<<"After sorting the array are in such a way "<<endl;
    for(int i=0 ; i< n ; i++){
        cout<<arr[i] <<" " ;
    }
    return 0 ;
}