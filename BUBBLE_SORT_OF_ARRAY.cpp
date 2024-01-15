#include<iostream>
using namespace std ; 
void swap(int &a , int &b)
{
    int temp ; 
    temp = a ; 
    a = b ; 
    b = temp ; 
}
void bubblesort(int array[],int size){
    int i , j ;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-1;j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]) ; 
            }
        }
    }
}
void printarr(int array[],int size){
    int i ; 
    for(i=0;i<size ; i++){
        cout<<array[i]<<" " ;
    }
}
int main(){
    int i , n ,arr[50] ; 
    cout<<"Enter the elemetns of the array "<<endl;
    cin>>n ; 
    cout<<"Enter the elements of the array " <<endl;
    for(i=0 ; i <n ; i++){
        cin>>arr[i] ; 
    }
    cout<<"Before sorting the array are"<<endl;
    printarr(arr,n) ; 
    bubblesort(arr,n) ; 
    cout<<"After sorting of the array "<<endl;
    printarr(arr,n) ; 
}