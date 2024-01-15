#include<iostream>
using namespace std ; 
#include<cstdlib>
struct bnode
{
    int data ; 
    bnode* left , *right ; 
};
void add_node(bnode** root , int value)
{
    bnode* newnode = (bnode*)malloc(sizeof(bnode));
    newnode->data = value ; 
    newnode->left = NULL;
    newnode->right = NULL ; 
    newnode->right = NULL ; 
    if(*root == NULL)
    {
        *root = newnode ;
        return ; 
    }
    bnode *ptr = *root ; 
    while(1)
    {
        if(ptr->data > value)
        {
            if(ptr->left == NULL)
            {
               ptr->left = newnode ; 
                return ; 
            }
             ptr = ptr->left ; 
        }
        else
        {
            if(ptr->right == NULL)
            {
               ptr->right = newnode ; 
               return ;
            }
            ptr = ptr->right ; 
    }
    }
    return ; 
}
void inorder_traversal(bnode* root)
{
    if(root == NULL)
    {
        return ; 
    }
    inorder_traversal(root->left);
    cout<<root->data<<" " ;
    inorder_traversal(root->right) ; 
}
int main()
{
    bnode* root = NULL ; 
    int n , i , temp ;
    cin>>n ;
    for(i=0;i<n;i++)
    {
        cin>>temp ; 
        add_node(&root , temp) ; 
    }
    cout<<"Inorder Traversal of the code is "<<endl;
    inorder_traversal(root) ; 
}