#include<iostream>
#include<string>
using namespace std ;
#include<stdio.h>
struct node{
    int data ; 
    struct node* next ; 
};
void push(struct node** top , int data)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node)) ; 
    newnode->data = data ;
    newnode->next = *top ; 
    *top = newnode ; 
}
void pop(struct node** top)
{
    if(*top==NULL)
    {
        cout<<"Stack Underflow "<<endl;
    }
    struct node* temp = *top ; 
    *top = temp->next ; 
    free(temp) ; 
}
void display(struct node** top)
{
    struct node* ptr = *top ; 
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" " ; 
        ptr = ptr->next ; 
    }
}
int main()
{
    struct node* top = NULL ; 
    while(1)
    {
        int choice  , element  ; 
        cin>>choice ; 
        if(choice==1)
        {
            cin>>element  ; 
            push(&top , element);
            
        }
        else if(choice == 2 )
        {
            pop(&top) ; 
            
        }
        else if(choice == 3)
        {
            display(&top) ; 
             
        }
        else{
            exit(0) ;
        }
    }
}