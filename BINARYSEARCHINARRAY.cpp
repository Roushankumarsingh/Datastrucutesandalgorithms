#include<iostream>
using namespace std ; 
int main(){
    int i, n , st , end , mid , tgt ,arr[50],flag=0; 
    cout<<"Enter the number of elements "<<endl;
    cin>>n ; 
    cout<<"Enter the elements of the array ; "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i] ; 
    }
    st=0;
    end = n-1 ;
    cout<<"Enter the target you want to search"<<endl;
    cin>>tgt ; 
    for(i=st ; i<end ; i++){
        mid = (st+end)/2 ; 
        if(arr[mid]==tgt){
            cout<<"Element is found at index "<<mid<<endl;
            flag=1 ;
            break;
        }
        else if(tgt<arr[mid]){
            end = mid - 1 ;  
        }
        else if(tgt>arr[mid]){
            st = mid+1 ; 
        }
    }
    if(flag=0){
        cout<<"Target you enter is not in the list"<<endl;
    }
}