#include<iostream>
using namespace std ; 
struct node{
    int data ; 
    struct node* prev ; 
    struct node* next ; 
};
void insert_at_beg(struct node** head_ref , int data){
    struct node* newnode = (struct node*)malloc(sizeof(struct node)) ; 
    newnode->data = data ; 
    newnode->prev = NULL ; 
    newnode->next = NULL ; 
    newnode->next = *head_ref; 
    if(*head_ref != NULL){
        newnode->next = *head_ref ; 
    }
    *head_ref = newnode ; 
}
void insert_at_end(struct node** head_ref , int data){
    struct node* newnode = (struct node*)malloc(sizeof(struct node)) ; 
    newnode->data = data ; 
    newnode->prev = NULL ; 
    newnode->next = NULL ; 
    if(*head_ref == NULL){
        newnode->prev = NULL ; 
        *head_ref = newnode ; 
        return ; 
    }
    struct node* ptr = *head_ref ; 
    while(ptr->next != NULL){
        ptr = ptr->next ; 
    }
    ptr->next = newnode ; 
    newnode->prev = ptr ; 
    return ; 
}
void insert_at_any_pos(struct node** head_ref , int pos , int val){
    struct node* newnode = (struct node*)malloc(sizeof(struct node)) ; 
    newnode->data = val ; 
    newnode->next = NULL ; 
    newnode->prev = NULL ; 
    if(pos == 0){
        cout<<"Empty list "<<endl;
    }
    else if(pos == 1){
        newnode->prev = NULL ; 
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
    ptr->next->prev = newnode ; 
    ptr->next = newnode ; 
    newnode->prev = ptr ; 
    return ; 
}
// void delatbeg(struct node** head_ref){
//     struct node* ptr = *head_ref ; 
//     *head_ref = ptr->next ; 
//     ptr->prev = NULL ;
//     free(ptr) ;
//     return ; 
// }
void delatend(struct node** head_ref){
    struct node* ptr = *head_ref ; 
    while(ptr->next->next != NULL){
        ptr = ptr->next ; 
    }
    free(ptr->next) ; 
    ptr->next = NULL ; 
    return ; 
}
void del_at_any_pos(struct node** head_ref , int pos){
    struct node* pre = *head_ref ;
    struct node* current = *head_ref ; 
    if(pos == 0){
        cout<<"List or node is empty"<<endl;
    }
    else if(pos == 1){
        *head_ref = current->next ; 
        current->prev = NULL ; 
        free(current) ;
        current = NULL ; 
        return ;
    }
    else{
        while(pos != 1){
            pre = current ; 
            current = current->next ; 
            pos-- ; 
        }
        if(current->next == NULL){
            free(pre->next) ;
            pre->next = NULL ;
        }
        else{
            pre->next = current->next ; 
            current->next->prev = pre ; 
            free(current) ; 
            current = NULL ; 
        }
    }
    return ; 
}
void printlist(struct node* head){
    struct node* ptr = head ; 
    while(ptr != NULL){
        cout<<ptr->data<<" " ;
        ptr = ptr->next ; 
    }
}
int main(){
    struct node* head = NULL ; 
    int n , element ; 
    cin>> n ; 
    for(int i=1 ; i<=n ; i++){
        cin>>element ; 
        // insert_at_beg(&head , element) ; 
        insert_at_end(&head , element) ;
    }
    // cout<<"After insertion at beg of the node "<<endl;
    cout<<"After insertion at end of the node "<<endl;
    printlist(head) ; 
    cout<<endl;
    cout<<"Enter the position to be insertion of the node in doubly linked list "<<endl;
    int pos ; 
    cin>>pos;
    cout<<"Enter the value of the insertion of the node"<<endl;
    int val; 
    cin>>val ; 
    cout<<endl;
    insert_at_any_pos(&head , pos ,val) ;
    printlist(head) ; 
    cout<<endl;
    // cout<<"After deleting the first node of the doubly linked list is"<<endl;
    // delatbeg(&head) ; 
    // printlist(head) ;
    cout<<"After deleting the last node of the doubly linked list is"<<endl;
    delatend(&head) ; 
    printlist(head) ; 
    cout<<endl;
    cout<<"Enter the position to be deleted in the node "<<endl;
    int pos2 ; cin>>pos2 ; 
    del_at_any_pos(&head , pos2) ; 
    cout<<"After deleting the element from its position the node becomes"<<endl;
    printlist(head) ; 
}