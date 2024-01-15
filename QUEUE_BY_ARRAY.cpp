#include<iostream>
using namespace std ; 
#define size 3 
int front = 0 ; 
int rear = 0 ;
int arr[size] ; 
void enqueue(int data)
{
    if(rear == size)
    {
        cout<<"Queue is OverFlow Condition " <<endl;
    }
    else
    {
        arr[rear] = data ; 
        rear++ ; 
    }
}
void dequeue()
{
    if(front == rear)
    {
        cout<<"Queue UnderFlow Condition "<<endl;
    }
    else
    {
        cout<<"The deleted element from the queue is "<<arr[front] ; 
        front++ ; 
    }
}
void display()
{
    if(front == rear)
    {
        cout<<"Queue is already Empty "<<endl;
    }
    else
    {
        int i ; 
        for(i = front ; i<rear ; i++)
        {
            cout<<arr[i]<<" " ;
        }
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
                break;
            }
            case 2:
            {
                dequeue() ; 
                break;
            }
            case 3:
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
                break ; 
            }
        }
    }
}
