#include<iostream>
using namespace std;
int main(){
    int n, m , i , j ;
    int arr[50][50] , ar[50][50] , sum [50][50] ;
    cin>>n>>m ; 
    cout<<"Enter the input of the 1st array "<<endl;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>arr[i][j] ;
        }
    }
    cout<<"Enter the element for the 2nd array "<<endl;
    for(int i=0;i<n ;i++){
        for(int j=0 ; j<m ; j++){
            cin>>ar[i][j];
        }
    }
    cout<<"The sum of the both of the array are: "<<endl;
    for(int i=0 ; i<n;i++){
        for(int j=0 ; j<m ; j++){
            sum[i][j] = arr[i][j] + ar[i][j] ;
        }
    }
    for(int i=0;i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cout<<sum[i][j]<<" " ;
        }
        cout<<endl;
    }
}