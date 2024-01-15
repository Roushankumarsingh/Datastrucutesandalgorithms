// #include<iostream>
// using namespace std  ; 
// struct node
// {
//     int data ;
//     struct node* next ; 
// }*head;
// // void insert_at_beg(int data)
// // {
// //     struct node* newnode = (struct node*)malloc(sizeof(struct node)) ; 
// //     newnode->data = data ; 
// //     newnode->next = head ; 
// //     head = newnode ; 
// // }
// void insert_at_end(int data)
// {
//     struct node* newnode = new node ; 
//     newnode->data = data ; 
//     newnode->next = NULL ; 
//     struct node* temp = head ; 
//     if(head==NULL)
//     {
//         head = newnode ;
//         return ; 
//     }
//     else
//     {
//         while(temp->next != NULL)
//         {
//             temp = temp->next ; 
//         }
//         temp->next = newnode ; 
//         return ;
//     }
// }
// void insert_at_any_pos(int pos , int data)
// {
//     struct node* newnode = new node ; 
//     newnode->data = data ; 
//     newnode->next = NULL ;
//     struct node* temp = head ; 
//     if(pos == 0 )
//     {
//         cout<<"Enter position is invalid"<<endl;
//     }
//     else if(pos == 1)
//     {
//         // newnode->next = temp ; 
//         newnode->next = head ; 
//         head = newnode ; 
//         return ; 
//     }
//     pos-- ; 
//     while(pos != 1)
//     {
//         temp = temp->next ; 
//         pos-- ; 
//     }
//     newnode->next = temp->next ; 
//     temp->next = newnode ; 
// }
// void delatbeg()
// {
//     if(head == NULL)
//     {
//         cout<<"List is already empty "<<endl;
//     }
//     struct node* ptr = head ; 
//     head = ptr->next ; 
//     free(ptr) ; 
// }
// void delatend()
// {
//     struct node* temp = head ; 
//     if(head==NULL)
//     {
//         cout<<"List is already empty "<<endl;
//     }
//     while(temp->next->next != NULL)
//     {
//         temp = temp->next ; 
//     }
//     free(temp->next);
//     temp->next = NULL ; 
// }
// void delatanypos(int pos)
// {
//     struct node* prev = head ; 
//     struct node* current = head ; 
//     if(pos==0)
//     {
//         cout<<"Empty list is over there "<<endl;
//         return ; 
//     }
//     else if(pos==1)
//     {
//         head = current->next ; 
//         free(current) ;
//         return ; 
//     }
//     while(pos != 1)
//     {
//         prev = current ; 
//         current = current->next ; 
//         pos-- ; 
//     }
//     prev->next = current->next ; 
//     free(current) ; 
// }
// void display()
// {
//     struct node* temp = head ; 
//     while(temp != NULL)
//     {
//         cout<<temp->data<<" " ; 
//         temp = temp->next ; 
//     }
// }
// int main()
// {
//     int n ,element ; 
//     cin>>n ; 
//     // for(int i=0 ; i<n;i++)
//     // {
//     //     cin>>element ;
//     //     insert_at_beg(element) ;
//     // }
//     for(int i=0 ; i<n;i++)
//     {
//         cin>>element ;
//         insert_at_end(element) ;
//     }
//     display() ;
//     cout<<endl;
//     int pos ; 
//     cout<<"Enter the position "<<endl;
//     cin>>pos ; 
//     int val ;
//     cout<<"Enter the value to inserted "<<endl;
//     cin>>val ; 
//     insert_at_any_pos(pos,val) ; 
//     display() ; 
//     cout<<endl;
//     delatbeg() ;
//     display() ; 
//     cout<<endl;
//     delatend() ; 
//     display() ;
//     cout<<endl;
//     int pos1;
//     cout<<"Enter the position to be deleted "<<endl;
//     cin>>pos1 ; 
//     delatanypos(pos1) ; 
//     display() ; 
// }
#include<iostream>
using namespace std ; 
struct node
{
    int data ; 
    struct node* prev ; 
    struct node* next ; 
}*head;
void insert_at_beg(int value)
{
    struct node* newnode = new node ; 
    newnode->data = value ; 
    newnode->prev = NULL ; 
    newnode->next = NULL; 
    if(head != NULL)
    {
        newnode->next = head;
    }
    head = newnode ; 
}
void insert_at_end(int value)
{
    struct node* newnode = new node ; 
    newnode->data = value; 
    newnode->prev = NULL ; 
    newnode->next = NULL ; 
    if(head == NULL)
    {
        newnode->next = head ; 
        head = newnode ;
        return ; 
    }
    struct node* temp = head ; 
    while(temp->next != NULL)
    {
        temp = temp->next ; 
    }
    temp->next = newnode ; 
    newnode->prev = temp ; 
}
void display()
{
    struct node* temp = head ; 
    while(temp != NULL)
    {
        cout<<temp->data<<" " ; 
        temp = temp->next ; 
    }
}
void insert_at_any_pos(int pos , int value)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node)) ; 
    struct node* ptr = head ; 
    newnode->data = value ; 
    newnode->prev = NULL ; 
    newnode->next = NULL ; 
    if(pos == 0)
    {
        cout<<"Position is Invalid "<<endl;
    }
    else if(pos == 1)
    {
        newnode->next = head ; 
        head = newnode; 
        return; 
    }
    pos-- ; 
    while(pos != 1)
    {
        ptr = ptr->next ; 
        pos-- ; 
    }
    newnode->next = ptr->next ; 
    ptr->next = newnode ; 
    newnode->prev = ptr ; 
}
void delatbeg()
{
    struct node* ptr = head ; 
    head = ptr->next ; 
    // ptr->prev = NULL ;
    free(ptr) ; 
    head->prev = NULL ; 
}
void delatend()
{
    struct node* temp = head ; 
    if(head==NULL)
    {
        cout<<"List is already empty "<<endl;
    }
    while(temp->next->next != NULL)
    {
        temp = temp->next ; 
    }
    free(temp->next) ;
    temp->next = NULL ; 
}
void delatanypos(int pos)
{
    struct node* pre = head ; 
    struct node* current = head ; 
    if(pos==0)
    {
        cout<<"No list is over there"<<endl;
    }
    else if(pos == 1)
    {
        head = current->next ; 
        free(current) ; 
        head->prev = NULL ; 
        return ; 
    }
    while(pos != 1)
    {
        pre = current ; 
        current = current->next ; 
        pos-- ; 
    }
    if(current->next == NULL)
    {
        free(pre->next) ; 
        pre->next = NULL ; 
        return ; 
    }
    pre->next = current->next ; 
    current->next->prev = pre ; 
    free(current) ; 
    current = NULL ; 
}
int main()
{
    int n , element ; 
    cin>>n ; 
    // for(int i=0;i<n;i++)
    // {
    //     cin>>element ; 
    //     insert_at_beg(element) ;
    // }
    for(int i=0;i<n;i++)
    {
        cin>>element ; 
        insert_at_end(element) ;
    }
    display() ;
    cout<<endl;
    int pos ; 
    cout<<"Enter the position to be inserted "<<endl;
    cin>>pos ; 
    int value ; 
    cout<<"Enter the value to be inserted"<<endl;
    cin>>value ; 
    insert_at_any_pos(pos , value) ;
    display() ; 
    cout<<endl;
    delatbeg() ; 
    display() ;
    cout<<endl;
    delatend() ;
    display() ;
    cout<<endl;
    int pos1 ; 
    cout<<"Enter the position to be deleted"<<endl;
    cin>>pos1;
    delatanypos(pos1) ; 
    display() ;
}




















