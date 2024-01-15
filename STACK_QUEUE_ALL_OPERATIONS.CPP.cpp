// #include<iostream>
// using namespace std  ; 
// #define size 3 
// // int top = -1 ; 
// // int arr[size] ; 
// // void push(int) ; 
// // void pop()  ; 
// // void display() ; 
// // void push(int value)
// // {
// //     if(top == size - 1)
// //     {
// //         cout<<"Stack OverFlow Condition "<<endl;
// //     }
// //     else
// //     {
// //         top++ ; 
// //         arr[top] = value ; 
// //     }
// // }
// // void pop()
// // {
// //     if(top == -1)
// //     {
// //         cout<<"Stack UnderFlow Condition "<<endl;
// //     }
// //     else
// //     {
// //         cout<<"The deleted element from the Stack is "<<arr[top]<<endl;
// //         top-- ; 
// //     }
// // }
// // void display()
// // {
// //     if(top == -1)
// //     {
// //         cout<<"Stack is Empty"<<endl;
// //     }
// //     else
// //     {
// //         int i = 0 ; 
// //         for(i = top ; i>=0 ; i--)
// //         {
// //             cout<<arr[i]<<" " ;
// //         }
// //     }
// // }
// // int main()
// // {
// //     while(1)
// //     {
// //         int choice , element ; 
// //         cin>>choice ; 
// //         switch(choice)
// //         {
// //             case 1:
// //             {
// //                 cin>>element ; 
// //                 push(element) ; 
// //                 break ; 
// //             }
// //             case 2:
// //             {
// //                 pop() ; 
// //                 break; 
// //             }
// //             case 3 :
// //             {
// //                 display() ; 
// //                 break ; 
// //             }
// //             default:
// //             {
// //                 exit(0) ; 
// //                 break ; 
// //             }
// //         }
// //     }
// //}
// int arr[size] ; 
// struct node
// {
//     int data ; 
//     struct node* next ; 
// }*top; 
// void push(int) ; 
// void pop() ; 
// void display() ; 
// void push(int value)
// {
//     struct node* newnode = new node ; 
//     newnode->data = value ; 
//     newnode->next = top ; 
//     top = newnode ; 
// }
// void pop()
// {
//     if(top == nullptr)
//     {
//         cout<<"Stack is Empty "<<endl;
//     }
//     else
//     {
//         struct node* temp = top ; 
//         top = temp->next ; 
//         free(temp) ; 
//     }
// }
// void display()
// {
//     struct node* temp = top ; 
//     if(top == NULL)
//     {
//         cout<<"Stack is Empty "<<endl;
//     }
//     else
//     {
//         while(temp != NULL)
//         {
//             cout<<temp->data<<" " ;
//             temp = temp->next ; 
//         }
//     }
// }
// int main()
// {
     
//     while(1)
//     {
//         int choice , value ; 
//         cin>>choice ; 
//         if(choice == 1)
//         {
//             cin>>value ; 
//             push(value) ; 
//         }
//         else if(choice == 2)
//         {
//             pop() ; 
//         }
//         else if(choice == 3)
//         {
//             display() ; 
//         }
//         else
//         {
//             exit(0) ;
//         }
//     }
// }
#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
#include<stdio.h>
using namespace std ; 
// int prec(char c)
// {
//     if( c== '^')
//     {
//         return 3 ; 
//     }
//     else if(c == '*' || c == '/')
//     {
//         return 2;
//     }
//     else if(c == '+' || c == '-')
//     {
//         return 1 ; 
//     }
//     else
//     {
//         return -1 ; 
//     }
// }
// void InfixToPostfix(string s)
// {
//     string res ; 
//     int l = s.length() ; 
//     stack<char> st ; 
//     st.push('$') ; 
//     for(int i=0;i<l;i++)
//     {
//         // if it is an operand 
//         if(s[i] >= 'a' && s[i]<= 'z'  || s[i]>= 'A' && s[i]<= 'Z')
//         {
//             res += s[i] ; 
//         }
//         // if it is an ( then push i in to the stack 
//         else if(s[i] == '(')
//         {
//             st.push(s[i]) ; 
//         }
//         // if it is a ) 
//         else if(s[i] == ')')
//         {
//             while(st.top() != '$' && st.top() != '(')
//             {
//                 char c = st.top() ; 
//                 st.pop() ;
//                 res += c ; 
//             }
//             if(st.top() == '(')
//             {
//                 // char c = st.top() ; 
//                 st.pop() ; 
//             }
//         }
//         // if it is an operator //
//         else
//         {
//             while(st.top() != '$' && prec(s[i])<=prec(st.top()))
//             {
//                 char c = st.top() ; 
//                 st.pop() ; 
//                 res += c ; 
//             }
//             st.push(s[i]) ; 
//         }
//     }
//     // to clear all element from the stack //
//     while(st.top() != '$')
//     {
//         char c = st.top() ; 
//         st.pop() ; 
//         res += c ; 
//     }
//     cout<<res<<endl;
// }
// int main()
// {
//     string roushan ; 
//     cin>>roushan ; 
//     InfixToPostfix(roushan) ; 
// }
// int main()
// {
//     string s ; 
//     cin>>s ; 
//     int i , l = s.length() ; 
//     stack<int> st ; 
//     for(i=0 ; i<l;i++)
//     {
//         // if it is an operand to check 
//         if(s[i]>= '0' && s[i]<= '9')
//         {
//             st.push(s[i]-'0');
//         }
//         // if it is an operator 
//         else
//         {
//             int b = st.top() ; 
//             st.pop() ; 
//             int a = st.top() ; 
//             st.pop() ; 
//             switch(s[i])
//             {
//                 case '+':
//                 {
//                     int c = a+b ; 
//                     st.push(c) ; 
//                     break ; 
//                 }
//                 case '-' :
//                 {
//                     int c = a-b ; 
//                     st.push(c) ; 
//                     break ; 
//                 }
//                 case '/':
//                 {
//                     int c = a/b ; 
//                     st.push(c) ; 
//                     break ; 
//                 }
//                 case '*' : 
//                 {
//                     int c = a*b ; 
//                     st.push(c) ; 
//                     break ;
//                 }
//                 case '^' :
//                 {
//                     int c = a^c ; 
//                     st.push(c) ; 
//                     break ;  
//                 }
//             }
//         }
//     }
//     cout<<st.top()<<endl;
// }
int prec(char c)
{
    if(c == '^')
    {
        return 3 ; 
    }
    else if(c == '*' || c == '/')
    {
        return 2 ; 
    }
    else if(c == '+' || c == '-')
    {
        return 1 ;
    }
    else
    {
        return 1 ;
    }
}
void InfixToPrefix(string s)
{
    string res ; 
    reverse(s.begin() ,s.end()) ; 
    stack<char> st ; 
    int i , l = s.length() ; 
    st.push('$') ; 
    for(i=0 ; i<l ;i++)
    {
        if(s[i]>='a' && s[i]<= 'z' || s[i]>='A' && s[i]<='Z')
        {
            res += s[i] ; 
        }
        else if(s[i] == ')')
        {
            st.push(s[i]) ; 
        }
        else if(s[i] == '(')
        {
            while(st.top() != '$' && st.top() != ')')
            {
                char c = st.top() ; 
                st.pop() ; 
                res += c ; 
            }
            if(st.top() == ')')
            {
                st.pop() ; 
            }
        }
        else
        {
            while(st.top() != '$' && prec(s[i]) <= prec(st.top()))
            {
                char c = st.top() ; 
                st.pop() ; 
                res += c ; 
            }
            st.push(s[i]) ; 
        }
    }
    while(st.top() != '$')
    {
        char c = st.top() ; 
        st.pop() ; 
        res += c ; 
    }
    reverse(res.begin() ,res.end()) ; 
    cout<<res<<endl;
}
int main()
{
    string roushan  ; 
    cin>>roushan ; 
    InfixToPrefix(roushan) ; 
}
// #include<iostream>
// // using namespace std ; 
// // #define n 5
// // int front = 0 , rear = 0 ;
// // int arr[n] ;
// // void enqueue(int) ;
// // void dequeue() ; 
// // void display() ; 
// // void enqueue(int value)
// // {
// //     if(rear == n)
// //     {
// //         cout<<"Queue OverFlow Condition "<<endl;
// //     }
// //     else
// //     {
// //         arr[rear] = value ; 
// //         rear++ ; 
// //     }
// // }
// // void dequeue()
// // {
// //     if(front == rear)
// //     {
// //         cout<<"Queue UnderFow Condition "<<endl;
// //     }
// //     else
// //     {
// //         cout<<"The deleted element from the Queue is "<<arr[front]<<endl;
// //         front++ ;
// //     }
// // }
// // void display()
// // {
// //     if(front == rear)
// //     {
// //         cout<<"Queue is Empty "<<endl;
// //     }
// //     else
// //     {
// //         int i =front ; 
// //         for(i = front ; i<rear ; i++)
// //         {
// //             cout<<arr[i]<<" " ;
// //         }
// //     }
// // }
// // int main()
// // {
// //     while(1)
// //     {
// //         int choice , value ;
// //         cin>>choice ; 
// //         switch(choice)
// //         {
// //             case 1:
// //             {
// //                 cin>>value ; 
// //                 enqueue(value) ;
// //                 break ; 
// //             }
// //             case 2:
// //             {
// //                 dequeue() ; 
// //                 break ; 
// //             }
// //             case 3:
// //             {
// //                 display() ;
// //                 break ;
// //             }
// //             case 4:
// //             {
// //                 exit(0) ; 
// //                 break ; 
// //             }
// //         }
// //     }
// // }
// #include<iostream>
// using namespace std ;
// struct node
// {
//     int data ; 
//     struct node* next ; 
// }*front , *rear ; 
// void enqueue(int) ; 
// void dequeue() ; 
// void display() ; 
// void enqueue(int value)
// {
//     struct node* newnode = new node ; 
//     newnode->data = value ; 
//     newnode->next = NULL ; 
//     if(front== NULL && rear == NULL)
//     {
//         front = rear = newnode ; 
//     }
//     else
//     {
//         rear->next = newnode ; 
//         rear = newnode ; 
//     }
// }
// void dequeue()
// {
//     struct node* temp = front ; 
//     if(front == NULL)
//     {
//         cout<<"Queue UnderFlow Condition "<<endl;
//     }
//     else
//     {
//         cout<<"The deleted element from the Queue is "<<front->data ; 
//         front = front->next ; 
//         if(front == NULL)
//         {
//             rear = NULL ; 
//         }
//         free(temp) ; 
//     }
// }
// void display()
// {
//     if(front == NULL)
//     {
//         cout<<"Queue is Empty at this stage "<<endl;
//     }
//     struct node* temp = front ; 
//     while(temp != NULL)
//     {
//         cout<<temp->data<<" " ;
//         temp = temp->next ; 
//     }
// }
// int main()
// {
//     while(1)
//     {
//         int choice , value ;
//         cin>>choice ; 
//         switch(choice)
//         {
//             case 1:
//             {
//                 cin>>value ; 
//                 enqueue(value) ;
//                 break ; 
//             }
//             case 2:
//             {
//                 dequeue() ; 
//                 break ; 
//             }
//             case 3:
//             {
//                 display() ;
//                 break ;
//             }
//             case 4:
//             {
//                 exit(0) ; 
//                 break ; 
//             }
//         }
//     }
// }
#include<iostream>
// using namespace std ;
// #define n 5 
// // int front = 0 ,rear = 0 ;
// struct node
// {
//     int data ; 
//     struct node* next ; 
// }*front , *rear ; 
// int arr[n] ; 
// void enqueue(int) ; 
// void dequeue() ; 
// void display() ; 
// void enqueue(int value)
// {
//     // if(rear == n)//n belongs to size of the array 
//     // {
//     //     cout<<"Queue OverFlow Condition "<<endl;
//     // }
//     // else
//     // {
//     //     arr[rear] = value; 
//     //     rear++ ; 
//     // }
//     struct node* newnode = new node;
//     newnode->data = value ; 
//     newnode->next = NULL ; 
//     if(front==NULL && rear == NULL)
//     {
//         front = rear = newnode ; 
//     }
//     else
//     {
//         rear->next = newnode ;
//         rear = newnode ; 
//     }
// }
// void dequeue()
// {
//     // if(front == rear)
//     // {
//     //     cout<<"Queue UnderFlow Condition "<<endl;
//     // }
//     // else
//     // {
//     //     cout<<"The deleted data from the Queue is "<<arr[front]<<endl;
//     //     front++ ; 
//     // }
//     if(front == NULL)
//     {
//         cout<<"Queue UnderFlow Condition "<<endl;
//     }
//     else
//     {
//         cout<<"The deleted element from the Queue is "<<front->data ; 
//         struct node* temp = front ; 
//         front = temp->next ; 
//         free(temp) ; 
//     }
// }
// void display()
// {
//     // int i= front ; 
//     // for(i = front ; i<rear ; i++)
//     // {
//     //     cout<<arr[i]<<" " ;
//     // }
//     struct node* ptr = front ; 
//     while(ptr != NULL)
//     {
//         cout<<ptr->data<<" "; 
//         ptr = ptr->next ;
//     }
// }
// int main()
// {
//     while(1)
//     {
//         int choice , value ; 
//         cin>>choice ; 
//         switch(choice)
//         {
//             case 1:
//             {
//                 cin>>value ; 
//                 enqueue(value) ; 
//                 break ;
//             }
//             case 2:
//             {
//                 dequeue() ; 
//                 break;
//             }
//             case 3:
//             {
//                 display() ; 
//                 break;
//             }
//             default:
//             {
//                 exit(0) ; 
//                 break;
//             }
//         }
//     }
// }

#include<iostream>
using namespace std ; 
#define n 5  
int front = -1 , rear = -1 ; 
int arr[n] ;
void enqueuefront(int value)
{
    if(front == 0 && rear == n-1 || front == rear+1)
    {
        cout<<"Queue is Full "<<endl;
    }
    else if(front == -1 && rear == -1)
    {
        front = rear = 0 ; 
        arr[front] = value ; 
    }
    else if(front == 0)
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
    else if(front == -1 && rear == -1)
    {
        front = rear = 0 ; 
        arr[rear] = value ; 
    }
    else if(rear == n-1)
    {
        rear = 0 ; 
        arr[rear] = value ; 
    }
    else
    {
        rear++ ; 
        arr[rear] = value ;
    }
}
void dequeuefront()
{
    if(front == -1 && rear == -1)
    {
        cout<<"Queue is Empty"<<endl;
    }
    else if(front == rear )
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
        front++ ; 
    }
}
void dequeuerear()
{
    if(front ==-1 && rear ==-1)
    {
        cout<<"Queue is Empty"<<endl;
    }
    else if(front == rear)
    {
        cout<<"The deleted element from the Queue is "<<arr[rear]<<endl;
        front = rear = -1 ; 
    }
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
void display()
{
    int i =front ; 
    while(i!=rear)
    {
        cout<<arr[i]<<" " ;
        i = (i+1)%n ; 
    }
    cout<<arr[rear]<<endl;
}
int main()
{
    enqueuefront(2);
    enqueuefront(5) ; 
    enqueuerear(-1) ; 
    enqueuerear(0) ; 
    enqueuefront(7) ; 
    enqueuefront(4) ; 
    display() ; 
    dequeuefront() ; 
    dequeuerear() ;
    display() ;
}