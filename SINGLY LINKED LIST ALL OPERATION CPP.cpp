#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
using namespace std ; 
struct node{
    int data ; 
    struct node* next ; 
};
void insert_at_beg(struct node** head_ref , int data){
    struct node* newnode = (struct node*)malloc(sizeof(struct node)) ; 
    newnode->data = data ; 
    // newnode->next = *head_ref ; 
    // *head_ref = newnode ;
    newnode->next = NULL ; 
    if(*head_ref == NULL)
    {
        *head_ref = newnode ; 
        return  ; 
    }
    struct node* ptr = *head_ref ; 
    while(ptr->next != NULL)
    {
        ptr = ptr->next ; 
    }
    ptr->next = newnode ; 
}
// void insert_at_any_pos(struct node** head , int data , int pos)
// {
//     struct node* temp = (struct node*)malloc(sizeof(struct node)) ; 
//     struct node* ptr = *head ;
//     temp->data = data ; 
//     temp->next = NULL ; 
//     if(pos==0)
//     {
//         cout<<"No linked list is there or invalid position "<<endl;
//         return ; 
//     }
//     else if(pos==1)
//     {
//         temp->next = *head ; 
//         *head = temp ; 
//         return ;
//     }
//     pos-- ; 
//     while(pos != 1)
//     {
//         ptr = ptr->next ; 
//         pos-- ; 
//     }
//     temp->next = ptr->next ; 
//     ptr->next = temp ;
// }
// void delatbeg(struct node** head)
// {
//     if(*head == NULL)
//     {
//         cout<<"The linekd list is empty "<<endl;
//         return ; 
//     }
//     struct node* temp = *head ; 
//     *head = temp->next ; 
//     free(temp) ; 
// }
// void delatlast(struct node** head)
// {
//     if(*head==NULL)
//     {
//         cout<<"Empty linked list "<<endl;
//         return ; 
//     }
//     struct node* temp = *head ; 
//     while(temp->next->next != NULL)
//     {
//         temp = temp->next ;  
//     }
//     free(temp->next) ; 
//     temp->next = NULL ; 
// }
void del_at_any_pos(struct node** head , int pos)
{
    struct node* current = *head ; 
    struct node* prev = *head ; 
    if(pos == 0)
    {
        cout<<"Element are already deleted "<<endl;
        return ; 
    }
    else if(pos ==1)
    {
        *head = current->next ; 
        free(current);
    }
    while(pos != 1)
    {
        prev = current ; 
        current = current->next ; 
        pos-- ;
    }
    prev->next = current->next ; 
    free(current) ; 
    current->next = NULL ; 
}
void display(struct node** head)
{
    struct node* temp = *head ; 
    while(temp!= NULL)
    {
        cout<<temp->data<<" "   ; 
        temp = temp->next ; 
    }
}
int main(){
    struct node* head = NULL ; 
    cout<<"Enter the element you want to insert"<<endl;
    int n , element ; 
    cin>>n ; 
    // while(1)
    // {
    //     if(n==1)
    //     {
    //         int element ; 
    //         cin>>element   ; 
    //         cout<<"Insertion of element will be over there "<<endl;
    //         insert_at_beg(&head, element);
    //     }
    // }
    for(int i=0 ; i<n ; i++){
        cin>>element  ; 
        insert_at_beg(&head,element) ; 
    }
    display(&head) ; 
    cout<<endl;
    int pos ; 
    cout<<"Position to be inserted or deleted at any position in the linked list are"<<endl;
    cin>>pos ; 
    // int val ; 
    // cout<<"Enter the value you want to insert in the linked list is "<<endl;
    // cin>>val;
    // insert_at_any_pos(&head,val , pos) ; 
    // display(&head) ; 
    // delatbeg(&head) ; 
    // delatlast(&head) ;
    // display(&head) ; 
    del_at_any_pos(&head , pos) ;
    display(&head) ; 
}