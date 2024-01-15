#include<iostream>
using namespace std ; 
#define SIZE 3 
int stack[SIZE] , top = -1 ; 
void push(int ) ; 
void pop() ; 
void display() ;
void push(int data)
{
    if(top == SIZE-1)
    {
        cout<<"Stack overflow "<<endl;
    }
    else{
        top++ ; 
        stack[top] = data ; 
    }
}
void pop()
{
    if(top == -1)
    {
       cout<<"Stack underflow"<<endl; 
    }
    else{
        cout<<stack[top]<<endl;
        top--;
    }
}
void display()
{
    if(top == -1)
    {
        cout<<"Stack is Empty"<<endl;
    }
    else{
        int i ; 
        for(i=top ; i>=0 ; i--)
        {
            cout<<stack[i]<<" " ;
        }
    }
}
int main()
{
    while(1)
    {
        int choice , element ; 
        cin>>choice ; 
        if(choice == 1)
        {
            cin>>element ; 
            push(element) ; 
        }
        else if(choice == 2)
        {
            pop() ; 
        }
        else if(choice == 3)
        {
            display() ; 
        }
        else{
            exit(0) ; 
        }
    }
}