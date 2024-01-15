#include<iostream>
using namespace std ;
struct node
{
    int data ;
    node* left ;
    node* right ;
};
void add_node(struct node** root , int value)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node)) ; 
    newnode->data = value ; 
    newnode->left = NULL ; 
    newnode->right = nullptr ; 
    if(*root == NULL)
    {
        *root = newnode;
        return ;
    }
    struct node* temp = *root ;
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
        else if(temp->data < value)
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
void Inorder_Traversal(node* root)
{
    if(root == NULL)
    {
        return ; 
    }
    else
    {
        Inorder_Traversal(root->left) ; 
        cout<<root->data<<" " ;
        Inorder_Traversal(root->right) ; 
    }
}
struct node* findminimum(node* root)
{
    if(root->left == NULL)
    {
        return root ; 
    }
    return findminimum(root->left) ; 
}
struct node* deletenode(struct node* root , int value)
{
    if(root == NULL)
    {
        cout<<"Element not found "<<endl;
        return 0 ; 
    }
    else if(root->data > value)
    {
        root->left = deletenode(root->left , value);
        // return ;
    }
    else if(root->data < value)
    {
        root->right = deletenode(root->right , value) ; 
        // return ;
    }
    else
    {
        if(root->left == NULL && root->right == NULL)
        {
            root = NULL ; 
            // return ; 
        }
        else if(root->left == NULL)
        {
            root = root->right ; 
        }
        else if(root->right == NULL)
        {
            root = root->left ; 
        }
        else 
        {
            struct node* temp = findminimum(root->right) ; 
            temp->data = root->data ; 
            root->right = deletenode(root->right , temp->data) ; 
        }
    }
    return root ;
}
int search_element(node* root , int value)
{
    if(root == NULL)
    {
        return 0 ;
    }
    else if(root->data == value)
    {
        return 1 ;
    }
    else if(root->data > value)
    {
        search_element(root->left ,value) ; 
    }
    else 
    {
        search_element(root->right , value) ; 
    }
    return 0 ; 
}
int main()
{
    struct node* root = NULL ; 
    int n , i  , element ; 
    cin>>n ; 
    for(i=0;i<n;i++)
    {
        cin>>element ; 
        add_node(&root , element) ; 
    }
    Inorder_Traversal(root) ; 
    int data ; 
    cin>>data ; 
    deletenode(root , data) ; 
    Inorder_Traversal(root) ; 
    int data1 ;
    cin>>data1;
    if(search_element(root , data))
    {
        cout<<"Element is Found "<<endl;
    }
    else
    {
        cout<<"Element is not found "<<endl;
    }
}