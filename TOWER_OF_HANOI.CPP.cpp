#include<iostream>
using namespace std ; 
void TOH(int n , char sou , char aux , char des)
{
    if(n==1)
    {
        cout<<"Discs Move "<<n<<" from "<<sou<<" to "<<des<<endl;
        return ; 
    }
    else
    {
        TOH(n-1 , sou,des,aux) ; 
        cout<<"Discs Move "<<n<<" from "<<sou<<" to "<<des<<endl;
        TOH(n-1 ,aux,sou,des) ; 
    }
}
int main()
{
    cout<<"Enter the number of the Discs "<<endl;
    int n ; 
    cin>>n ; 
    TOH(n,'A','B','C') ; 
    return 0 ; 
}