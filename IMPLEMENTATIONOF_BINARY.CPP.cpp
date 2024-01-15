#include<iostream>
using namespace std ;
struct node
{
    int data ; 
    node* left ;
    node* right ; 
};
struct node* create()
{
    int data ;
    cin>>data;
    struct node* newnode = new node ;
    if(data == -1)
    {
        return 0 ;
    }
    newnode->data = data ; 
    cout<<"Enter the left child "<<data<<endl;
    newnode->left = create() ; 
    cout<<"Enter the right child "<<data<<endl;
    newnode->right = create() ; 
    return newnode ;
}
int main()
{
    struct node* root = NULL ; 
    // int value ; 
    // cin>>value ; 
    root = create() ; 
}