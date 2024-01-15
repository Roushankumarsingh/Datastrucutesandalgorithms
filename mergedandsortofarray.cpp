#include<iostream>
using namespace std ; 
int main(){
    int n,m,i,arr[400],ar[400],mergedarr[400] , size , j ;
    cout<<"Enter the size of the first array "<<endl;
    cin>>n;
    cout<<"Enter the element of the first array "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i] ;
    }
    cout<<"Enter the size of the second array "<<endl;
    cin>>m ; 
    cout<<"Enter the element of the second array "<<endl;
    for(i=0;i<m;i++){
        cin>>ar[i] ;
    }
    size = m+n;
    for(i=0;i<n;i++){
        mergedarr[i] = arr[i] ;
    }
    for(i=0;i<m;i++){
        mergedarr[n+i] = ar[i];
    }
    for(i=0;i<size;i++){
        cout<<mergedarr[i]<<" " ;
    }
    cout<<endl;
    cout<<"Array after sorting and merged:- "<<endl;
    for(i=0;i<size ; i++){
        for(j=i+1;j<size;j++){
            if(mergedarr[i]>mergedarr[j]){
                int sort = mergedarr[i] ;
                mergedarr[i] = mergedarr[j] ;
                mergedarr[j] = sort ;
            }
        }
        cout<<mergedarr[i]<<" " ;
    }
    return 0 ;
}