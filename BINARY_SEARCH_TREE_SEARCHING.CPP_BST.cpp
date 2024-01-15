// You are using GCC
#include<iostream>
using namespace std;
struct node
{
    int data ; 
    node* left , *right ; 
};
void add_node(node** root , int value)
{
    node* newnode = new node ; 
    newnode->data = value ; 
    newnode->right = NULL ; 
    newnode->left = NULL ;
    if(*root == NULL)
    {
        *root = newnode ; 
        return ; 
    }
    node* temp = *root ; 
    while(1)
    {
        if(temp->data > value)
        {
            if(temp->left == NULL)
            {
                temp->left = newnode ; 
                return ; 
            }
            temp = temp->left ; 
        }
        else
        {
            if(temp->right == NULL)
            {
                temp->right = newnode ; 
                return ; 
            }
            temp = temp->right ;
        }
    }
    return ; 
}
void inorder_traversal(node* root)
{
    if(root == NULL)
    {
        return ; 
    }
    else
    {
        inorder_traversal(root->left) ; 
        cout<<root->data<<" " ; 
        inorder_traversal(root->right) ; 
    }
}
int search_element(node* root , int data)
{
    if(root == NULL)
    {
        return 0 ; 
    }
    else if(root->data == data)
    {
        return 1 ; 
    }
    else if(root->data > data)
    {
        search_element(root->left  , data) ; 
    }
    else
    {
        search_element(root->right , data) ; 
    }
    return 0;
}
int main()
{
    node* root = NULL ; 
    int n , i ,element ; 
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>element ; 
        add_node(&root , element) ; 
    }
    cout<<"Inorder Traversal of the Binary Search Tree is "<<endl;
    inorder_traversal(root) ;
    cout<<endl;
    int data ;
    cout<<"Enter the data to be searched in the node of the tree "<<endl;
    cin>>data ; 
    if(search_element(root , data))
    {
        cout<<"Element is Found in the node of the root "<<endl;
    }
    else
    {
        cout<<"Element is not Found in the node of the root"<<endl;
    }
}