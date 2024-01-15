// delete node 
// searching
#include<iostream>
using namespace std;
struct node
{
    int data ; 
    struct node* left ; 
    struct node* right ;
};
void add_node(struct node** root , int value)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node)) ; 
    newnode->data = value;
    newnode->left = nullptr ; 
    newnode->right = nullptr ; 
    if(*root == nullptr)
    {
        *root = newnode ; 
        return;
    }
    struct node* ptr = *root ;
    while(1)
    {
        if(ptr->data >value)
        {
            if(ptr->left==nullptr)
            {
                ptr->left = newnode ; 
                return ; 
            }
            else
            {
                ptr = ptr->left ; 
            }
        }
        else
        {
            if(ptr->right == NULL)
            {
                ptr->right = newnode ; 
                return;
            }
            ptr = ptr->right ; 
        }
    }
}
void Inorder_Traversal(struct node* root)
{
    if(root == nullptr)
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
struct node* findminimum(struct node* root)
{
    if(root->left == nullptr)
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
    if(root == nullptr)
    {
        cout<<"Element is not Found "<<endl;
        return 0 ; 
    }
    else if(value > root->data)
    {
        root->right = deletenode(root->right , value) ; 
    }
    else if(value < root->data)
    {
        root->left = deletenode(root->left , value) ; 
    }
    else
    {
        if(root->left == nullptr && root->right == nullptr)
        {
            root = NULL ; 
        }
        else if(root->left == NULL)
        {
            root = root->right ; 
        }
        else if(root->right ==nullptr)
        {
            root = root->left ; 
        }
        else
        {
            struct node* temp = findminimum(root->right) ; 
            root->data = temp->data ; 
            root->right = deletenode(root->right , value) ; 
        }
    }
    return root ; 
}
int search_element(struct node* root , int value)
{
    if(root == nullptr)
    {
        return 0 ;
    }
    else if(root->data == value)
    {
        return 1 ; 
    }
    else if(root->data < value)
    {
        search_element(root->right , value) ; 
    }
    else if(root->data > value)
    {
        search_element(root->left , value) ;
    }
    return 0 ; 
}
int main()
{
    struct node* root = NULL ; 
    int n ; 
    cout<<"Enter the Size of the node "<<endl;
    cin>> n ; 
    for(int i=0;i<n;i++)
    {
        int element ; 
        cin>>element ;
        add_node(&root,element) ; 
    }
    Inorder_Traversal(root) ; 
    cout<<endl;
    int data  ; 
    cin>>data ; 
    deletenode(root,data) ; 
    Inorder_Traversal(root) ; 
    cout<<endl;
    int sear ; 
    cin>>sear;
    if(search_element(root , sear))
    {
        cout<<"Element is Found "<<endl;
    }
    else
    {
        cout<<"Element is not Found "<<endl;
    }
    return 0 ; 
}