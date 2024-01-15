#include<iostream>
using namespace std ; 
struct node{
    int data ; 
    struct node* next ; 
};
struct node* add_in_last(struct node* ptr,int d){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = d ; 
    newnode->next = NULL ; 
    ptr->next = newnode ; 
    return newnode ;
}
struct node* del(struct node* ptr){
    struct node *temp = ptr ; 
    while(temp->next->next != NULL){
        temp = temp->next ;
    }
    free(temp->next);
    temp->next = NULL ;
    return ptr;
}
void printlist(struct node* ptr){
    while(ptr !=NULL){
        cout<<ptr->data<<" " ; 
        ptr = ptr->next ;
    }
}
int main(){
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 10 ; 
    head->next = NULL ; 
    struct node* ptr = head ; 
    ptr = add_in_last(ptr,20) ;
    ptr = add_in_last(ptr,30);
    ptr = add_in_last(ptr,40);
    ptr = add_in_last(ptr,50);
    ptr = head ; 
    printlist(ptr) ;
    ptr = del(ptr) ;
    cout<<endl;
    printlist(ptr) ;
}