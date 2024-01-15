#include<iostream>
using namespace std ; 
#include<stack>
#define n 5 
int arr[n] ; 
int front = -1 , rear =-1 ; 
void enqueuefront(int value)
{ 
    // to check whether the queue is full 
    if(front ==0 && rear == n-1  || front == rear+1)
    {
        cout<<"Queue is Full "<<endl;
    }
    else if(front == -1 && rear == -1)
    {
        front = rear = 0 ; 
        arr[front] = value ; 
    }
    else if(front == 0 )
    {
        front = n-1 ; 
        arr[front] = value ; 
    }
    else
    {
        front-- ; 
        arr[front] = value ; 
    }
}

void enqueuerear(int value)
{
    if(front == 0 && rear == n-1 || front == rear+1)
    {
        cout<<"Queue is Full "<<endl;
    }
    else if(front == -1 && rear ==-1)
    {
        front = rear = 0 ;
        arr[rear] = value ; 
    }
    else if(rear == n-1)
    {
        rear = 0 ; 
        arr[rear] == value ; 
    }
    else
    {
        rear++ ; 
        arr[rear] = value ; 
    }
}
void display()
{
    if(front == -1 && rear == -1)
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        int i =front ; 
        while(i != rear)
        {
            cout<<arr[i]<<" ";
            i = (i+1)%n ; 
        }
        cout<<arr[rear];
    }
}
void dequeuefront()
{
    if(front ==-1 && rear == -1)
    {
        cout<<"Queue is Empty "<<endl;
    }
    else if(front == rear)
    {
        cout<<"The deleted element from the Queue is "<<arr[front]<<endl;
        front = rear = -1 ; 
    }
    else if(front == n-1)
    {
        cout<<"The deleted element from the Queue is "<<arr[front]<<endl;
        front = 0 ; 
    }
    else
    {
        cout<<"The deleted element from the Queue is "<<arr[front]<<endl;
        front++;
    }
}
void dequeuerear()
{
    if(front == -1 && rear ==-1)
    {
        cout<<"Queue is empty"<<endl;
    }
    else if(front == rear)
    {
        cout<<"The deleted element from the Queue is "<<arr[rear]<<endl;
        front = rear = -1 ; 
    }
    // always use == operator in this keep in mind ; 
    else if(rear == 0) 
    {
        cout<<"The deleted element from the Queue is "<<arr[rear]<<endl;
        rear = n-1 ; 
    }
    else
    {
        cout<<"The deleted element from the Queue is "<<arr[rear]<<endl;
        rear-- ; 
    }
}
int main()
{
    enqueuefront(2) ; 
    enqueuefront(5) ; 
    enqueuerear(-1) ; 
    enqueuerear(0) ; 
    enqueuefront(7) ; 
    enqueuefront(4) ; 
    display() ;
    dequeuerear() ; 
    dequeuefront() ; 
    display() ;
}