#include<iostream>
using namespace std ;
void merge(int arr[],int l,int mid,int h)
{
    int n1 = mid-l+1 ; 
    int n2 = h-mid ; 
    int a[n1] ; 
    int b[n2] ; // making two temporary array 
    // int i=0 ; 
    for(int i=0;i<n1;i++)
    {
        a[i] = arr[l+i] ;  // assigning value to these array 
    }
    for(int i=0;i<n2 ; i++)
    {
        b[i] = arr[mid+1+i]; // assigning to the value of the second array from the topmost array where element is divided and get added
    }
    int i=0, j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j]) // for making each and every element sorted and put in to the main array ;
        {
            arr[k] = a[i] ; 
            k++,i++;
        }
        else
        {
            arr[k] = b[j] ; 
            k++,j++ ; 
        }
    }
    while(i<n1)
    {
        arr[k] = a[i] ; 
        k++,i++;
    }
    while(j<n2)
    {
        arr[k] = b[j] ; 
        k++,j++ ; 
    }
}
void mergesort(int arr[] , int l , int h)
{
    if(l<h)
    {
        int mid = (l+h)/2 ; 
        mergesort(arr,l,mid) ; 
        mergesort(arr,mid+1,h) ; 
        merge(arr,l,mid,h) ; 
    }
}
int main()
{
    cout<<"Enter the number of elements of the array "<<endl;
    int n ; 
    cin>>n ; 
    int i , arr[n] ; 
    cout<<"Enter the elments of the array "<<endl;
    for(i=0 ; i<n ; i++)
    {
        cin>>arr[i] ; 
    }
    mergesort(arr,0,n) ; 
    for(i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" "  ; 
    }
    // int arr[] = {5,4,3,2,1} ; 
    // mergesort(arr,0,4);
    // for(int i=0;i<5;i++)
    // {
    //     cout<<arr[i]<<" " ;
    // }
}