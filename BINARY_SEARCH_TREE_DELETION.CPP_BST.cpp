#include<iostream>
using namespace std ; 
struct node
{
    int data ; 
    node* left ,*right ; 
};
void add_node(node** root , int value)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node)) ; 
    newnode->data = value ; 
    newnode->left = NULL ;
    newnode->right = NULL ;
    if(*root == NULL)
    {
        *root = newnode ; 
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
    inorder_traversal(root->left) ; 
    cout<<root->data<<" "; 
    inorder_traversal(root->right) ; 
}
struct node* findminimum(node* root)
{
    if(root->left == NULL)
    {
        return root ; 
    }
    else
    {
        return findminimum(root->left) ; 
    }
}
struct node* deletenode(struct node* root , int value)
{
    if(root == NULL)
    {
        cout<<"Nodes are empty "<<endl;
        return NULL;
    }
    else if(value > root->data)
    {
        root->right = deletenode(root->right,value);
    }
    else if(value < root->data)
    {
        root->left = deletenode(root->left, value) ; 
    }
    else
    {
        if(root->left == NULL && root->right == NULL)
        {
            root = NULL ; 
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
            root->data = temp->data ; 
            root->right = deletenode(root->right , temp->data) ; 
        }
    }
    return root ; 
}
int main()
{
    struct node* root = NULL ; 
    cout<<"Enter the numbr of the nodes of the root "<<endl;
    int n ; 
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int value ; 
        cin>>value ;
        add_node(&root , value);
    }
    cout<<"Inorder Traversal of the node are "<<endl;
    inorder_traversal(root) ; 
    int data ;
    cout<<endl;
    cout<<"Enter the value of the node to be deleted from a tree "<<endl;
    cin>>data;
    deletenode(root,data) ; 
    cout<<"After deleting the data the node looks like "<<endl;
    inorder_traversal(root) ; 
}