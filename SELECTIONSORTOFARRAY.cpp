#include<iostream>
using namespace std ; 
void swap(int &a , int &b){
    int temp = a ; 
    a = b ; 
    b = temp ;
}
void selectionsort(int array[],int size){
    int i , j ,minimum; 
    for(i=0;i<size-1;i++){
        for(j=i+1 ; j<size ; j++){
            if(array[i]>array[j]){
                swap(array[i],array[j]) ; 
            }
        }
    }
}
void printarr(int array[],int size){
    int i  ; 
    for(i=0;i<size ;i++){
        cout<<array[i]<<" " ;
    }
}
int main(){
    int i , n ;
    cout<<"Enter the number of elements "<<endl;
    cin>>n ; 
    int arr[50] ;
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i] ;
    }
    cout<<"Before insertion the array is "<<endl;
    printarr(arr,n) ;
    selectionsort(arr,n) ;
    cout<<"After Sorting of the array "<<endl;
    printarr(arr,n) ;
    return 0 ;
}