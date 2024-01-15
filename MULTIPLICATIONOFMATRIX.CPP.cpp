#include<iostream>
using namespace std ; 
int main()
{
    int i,j,k , arr[500][500] ,ar[500][500] , mul[500][500] ,row1,column1,row2,column2;
    cout<<"Enter the size of the row"<<endl;
    cin>>row1 ; 
    cout<<"Enter the size of the column "<<endl;
    cin>>column1 ; 
    for(i=0;i<row1;i++){
        for(j=0;j<column1;j++){
            cin>>arr[i][j] ; 
        }
    }
    cout<<"Enter the size of the row 2"<<endl;
    cin>>row2 ; 
    cout<<"Enter the size of the column2"<<endl;
    cin>>column2 ;
    for(i=0;i<row2;i++){
        for(j=0;j<column2;j++){
            cin>>ar[i][j] ;
        }
    }
    cout<<"First array"<<endl; ; //first array input given
    for(i=0;i<row1;i++){
        for(j=0;j<column1;j++){
            cout<<arr[i][j]<<" " ; 
        }
        cout<<endl;
    }
    cout<<"Second array: "<<endl;
    for(i=0;i<row2;i++){
        for(j=0;j<column2;j++){
            cout<<ar[i][j]<<" " ;
        }
        cout<<endl;
    }
    if(row1==column2){
        for(i=0;i<row1;i++){
            for(j=0;j<column2 ; j++){
            mul[i][j] = 0 ;
         
        for(k=0;k<column1;k++){
            mul[i][j] += arr[i][k]*ar[k][j] ; 
        }
            }
        }
        cout<<"After multiplication the matrix becomes"<<endl;
        for(i=0;i<row1;i++){
            for(j=0;j<column2 ; j++){
                cout<<mul[i][j] <<" " ;
            }
            cout<<endl;
        }
    }
    
    
}