#include<iostream>
using namespace std; 
struct node
{
    int data ; 
    node* left , *right ; 
    node(int value)
    {
        data = value ; 
        left = right = NULL ; 
    }
};
void printInorder(node* root)
{
    if(root == NULL)
    {
        return ;
    }
    printInorder(root->left) ; 
    printInorder(root->right)  ;
    cout<<root->data<<" " ;
}
int main()
{
    node* root = new node(1) ; 
    root->left = new node(2) ; 
    root->right = new node(3) ;
    root->left->left = new node(4) ; 
    root->left->right = new node(5) ;
    root->right->right = new node(6) ; 
    cout<<"Traversal of the Inorder in Tree is "<<endl;
    printInorder(root) ; 
}