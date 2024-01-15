#include<iostream>
using namespace std  ;
struct node
{
    int data ; 
    struct node* next ; 
}*front , *rear ; //taking two pointer front and rear // for implementation

void enqueue(int) ; 
void dequeue() ; 
void display() ; 
void enqueue(int data)
{
    struct node* newnode = new node ; 
    newnode->data = data  ;
    newnode->next = NULL ; 
    if(front==NULL && rear==NULL)
    {
        front = rear = newnode ; 
    }
    else
    {
        rear->next = newnode ; 
        rear = newnode ; 
    }
}
void dequeue()
{
    struct node* temp = front  ;
    if(front==NULL)
    {
        cout<<"Stack UnderFlow Condition "<<endl;
    }
    else
    {
        cout<<"The deleted data from the queue is "<<front->data<<endl;
        front = front->next ; 
        if(front == NULL)
        {
            rear = NULL  ;
        }
        free(temp) ; 
    }
}
void display()
{
    struct node* ptr = front; 
    while(ptr != NULL)
    {
        cout<<ptr->data<<" " ;
        ptr = ptr->next ; 
    }
}
int main()
{
    while(1) 
    {
        int choice , value ; 
        cin>>choice ; 
        switch(choice)
        {
            case 1:
            {
                cin>>value ; 
                enqueue(value) ;
                break ; 
            }
            case 2:
            {
                dequeue() ; 
                break ; 
            }
            case 3 :
            {
                display() ; 
                break ; 
            }
            case 4:
            {
                exit(0) ; 
                break ; 
            }
            default:
            {
                exit(0) ; 
                break  ; 
            }
        }
    }
}