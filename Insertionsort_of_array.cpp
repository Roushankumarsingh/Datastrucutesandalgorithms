#include<iostream>
using namespace std ; 
void swap(int &a , int&b) 
{
    int temp ; 
    temp = a ;
    a = b ; 
    b = temp ;
}
void insertionsort(int array[],int size){
    int i , j  ; 
    for(i=1 ; i<size ; i++){
        int temp = array[i] ; 
        j = i-1 ; 
        while(j>=0 && array[j]>temp){
            array[j+1] = array[j] ;
            j = j-1 ;
        }
        array[j+1] = temp ;
    }
}
void printarr(int array[],int size){
    int i ; 
    for(i=0;i<size;i++){
        cout<<array[i]<<" " ;
    }
}
int main(){
    int i , n  ; 
    int arr[50] ;
    cout<<"Enter the number of elemnts"<<endl;
    cin>>n ; 
    cout<<"Enter the array "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i] ;
    }
    cout<<"Before sorting the array looks like"<<endl;
    printarr(arr,n) ;
    insertionsort(arr,n) ; 
    cout<<"After sorting of the program"<<endl;
    printarr(arr,n) ;
    return 0 ;
}