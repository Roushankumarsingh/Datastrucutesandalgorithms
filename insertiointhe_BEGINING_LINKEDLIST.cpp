#include<iostream>
using namespace std ; 
struct node{
    int data ; 
    struct node* next ; 
};
struct node* insert_beg(struct node* head ,int  d){
    struct node* ptr = (struct node*)malloc(sizeof(struct node)) ; 
    ptr->data = d ; 
    ptr->next = head ; 
    head = ptr ; 
    return ptr ;
}
void printlist(struct node* head){
    while(head != NULL){
        cout<<head->data<<" " ;
        head = head->next ; 
    }
}
int main(){
    struct node* head = 0 ;
    int i,data , n; 
    cout<<"Enter the number of the elements"<<endl;
    cin>>n ; 
    for(i=0;i<n;i++){
        cin>>data ; 
        head = insert_beg(head,data) ;
    }
    printlist(head) ;
}