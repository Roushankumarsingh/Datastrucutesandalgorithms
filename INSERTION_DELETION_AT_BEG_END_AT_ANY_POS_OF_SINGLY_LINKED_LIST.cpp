#include<iostream>
using namespace std ; 
struct node{
    int data ; 
    struct node* next ; 
};
// void insert_at_beg(struct node** head , int data){
//     struct node* newnode = (struct node*)malloc(sizeof(struct node));
//     newnode->data = data ; 
//     newnode->next = *head ; 
//     *head = newnode ; 
//     return ; 
// }
void insert_at_end(struct node** head_ref , int data){
    struct node* newnode = (struct node*)malloc(sizeof(struct node)) ; 
    newnode->data = data ; 
    newnode->next = NULL ; 
    if(*head_ref == NULL){
        newnode->next = *head_ref ; 
        *head_ref = newnode ; 
        return ; 
    }
    struct node* ptr = *head_ref ; 
    while(ptr->next != NULL){
        ptr = ptr->next ; 
    }
    ptr->next  = newnode ; 
    return ; 
    
}
void insert_at_any(struct node** head_ref , int pos , int data){
    struct node* newnode = (struct node*)malloc(sizeof(struct node)) ; 
    newnode->data = data ; 
    newnode->next = NULL ; 
    if(pos == 0){
        cout<<"List is already empty"<<endl;
    }
    else if(pos == 1){
        newnode->next = *head_ref ; 
        *head_ref = newnode ; 
        return ; 
    }
    pos-- ; 
    struct node* ptr = *head_ref ; 
    while(pos != 1){
        ptr = ptr->next ; 
        pos-- ; 
    }
    newnode->next = ptr->next ; 
    ptr->next = newnode ; 
    return ;
}
// void delatbeg(struct node** head){
//     struct node* temp = *head ; 
//     *head = temp->next ; 
//     free(temp) ;
//     return;
// }
// void delatend(struct node** head){
//     struct node* ptr = *head ; 
//     if(*head == NULL){
//         cout<<"List is already empty"<<endl;
//     }
//     while(ptr->next->next != NULL){
//         ptr = ptr->next ; 
//     }
//     free(ptr->next) ;
//     ptr->next = NULL;
//     return ; 
// }
void delatany(struct node** head , int pos){
    struct node* prev = *head ;
    struct node* current = *head ; 
    if(pos == 0 ){
        cout<<"Entered position is incorrect or list is empty"<<endl;
    }
    else if(pos == 1){
        *head = current->next ; 
        free(current) ; 
        current = NULL ;
    }
    else{
        while(pos != 1){
            prev = current ; 
            current = current->next ; 
            pos-- ; 
        }
        prev->next = current->next ; 
        free(current) ; 
        current = NULL ; 
    }
}
void printlist(struct node* head){
    struct node* temp = head ; 
    while(temp != NULL){
        cout<<temp->data<<" " ;
        temp = temp->next ; 
    }
}
int main(){
    struct node* head = NULL ; 
    int n , element ; 
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>element ; 
        insert_at_end(&head , element) ; 
    }
    cout<<"The element of the singly linked list after insertion at end is "<<endl;
    printlist(head) ;
    cout<<endl;
    cout<<"The position of the element"<<endl;
    int pos , val ; 
    cin>>pos ; 
    cout<<"Enter the value of the element"<<endl;
    cin>>val ;
    insert_at_any(&head , pos , val) ;
    printlist(head) ;
    cout<<endl;
    // cout<<"After deleting at the beg of the node "<<endl;
    // delatbeg(&head) ; 
    // printlist(head) ;
    // cout<<"After deleting the last node of the element"<<endl;
    // delatend(&head) ; 
    // printlist(head) ; 
    cout<<"Enter the pos to be deleted"<<endl;
    int pos2 ; 
    cin>>pos2 ; 
    cout<<endl;
    cout<<"After deleting the element of the position "<<endl;
    delatany(&head , pos2) ;
    printlist(head) ; 
}