#include<iostream>
using namespace std ; 
void swap(int arr[] , int i , int j)
{
    int temp = arr[i] ; 
    arr[i] = arr[j] ; 
    arr[j] = temp ; 
}
int partition(int arr[] , int l , int h)
{
    // int pivot = a[l] ; 
    // int start = a[l] ; 
    // int end = a[h] ; 
    // while(start<end)
    // {
    //     while(start <= pivot)
    //     {
    //         start++;
    //     }
    //     while(end>=pivot)
    //     {
    //         end-- ; 
    //     }
    //     if(start<end)
    //     {
    //         swap(a[start] ,a[end]) ; 
    //     }
    // }
    // swap(a[l] ,a[end]);
    // return end ; 
    int pivot = arr[h]  ;
    int i = l-1 ; 
    for(int j=l ; j<h ; j++)
    {
        if(arr[j]<=pivot)
        {
            i++ ; 
            swap(arr,i,j) ; 
        }
    }
    swap(arr,i+1,h) ; 
    return i+1 ; 
}
void quicksort(int arr[] , int l , int h)
{
    if(l<h)
    {
        int part = partition(arr,l,h);
        quicksort(arr,l,part - 1) ; 
        quicksort(arr,part + 1,h) ; 
    }
}
int main()
{
    cout<<"Enter the number of elements of the array"<<endl;
    int n ; 
    cin>>n;
    int arr[n] ; 
    for(int i=0 ; i<n;i++)
    {
        cin>>arr[i] ; 
    }
    quicksort(arr,0,n) ;
    for(int i=0 ; i<n;i++)
    {
        cout<<arr[i]<<" " ; 
    }
}